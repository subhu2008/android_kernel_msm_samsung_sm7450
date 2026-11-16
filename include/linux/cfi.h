/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Clang Control Flow Integrity (CFI) support.
 *
 * Copyright (C) 2022 Google LLC
 */
#ifndef _LINUX_CFI_H
#define _LINUX_CFI_H

#include <linux/bug.h>
#include <linux/elf.h>
#include <linux/types.h>

struct module;
struct pt_regs;

/*
 * Type of the legacy LLVM CFI check function. The 6.x kCFI scheme does not
 * use it anymore, but struct module keeps the field to preserve the GKI
 * structure layout, so the type must be available even when CFI is disabled
 * (e.g. when building with a compiler that lacks kCFI support).
 */
typedef void (*cfi_check_fn)(uint64_t id, void *ptr, void *diag);

#ifdef CONFIG_CFI_CLANG
enum bug_trap_type report_cfi_failure(struct pt_regs *regs, unsigned long addr,
				      unsigned long *target, u32 type);

static inline enum bug_trap_type report_cfi_failure_noaddr(struct pt_regs *regs,
							   unsigned long addr)
{
	return report_cfi_failure(regs, addr, NULL, 0);
}

#ifdef CONFIG_ARCH_USES_CFI_TRAPS
bool is_cfi_trap(unsigned long addr);
#endif
#endif /* CONFIG_CFI_CLANG */

#ifdef CONFIG_MODULES
#ifdef CONFIG_ARCH_USES_CFI_TRAPS
void module_cfi_finalize(const Elf_Ehdr *hdr, const Elf_Shdr *sechdrs,
			 struct module *mod);
#else
static inline void module_cfi_finalize(const Elf_Ehdr *hdr,
				       const Elf_Shdr *sechdrs,
				       struct module *mod) {}
#endif /* CONFIG_ARCH_USES_CFI_TRAPS */
#endif /* CONFIG_MODULES */

#endif /* _LINUX_CFI_H */
