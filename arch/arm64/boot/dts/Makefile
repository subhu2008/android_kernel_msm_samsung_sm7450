# SPDX-License-Identifier: GPL-2.0
subdir-y += actions
#subdir-y += allwinner
subdir-y += altera
subdir-y += amazon
subdir-y += amd
subdir-y += amlogic
subdir-y += apm
subdir-y += arm
subdir-y += bitmain
subdir-y += broadcom
subdir-y += cavium
subdir-y += exynos
subdir-y += freescale
#subdir-y += hisilicon
subdir-y += intel
subdir-y += lg
subdir-y += marvell
subdir-y += mediatek
subdir-y += microchip
subdir-y += nvidia
#subdir-y += qcom
subdir-y += realtek
subdir-y += renesas
subdir-y += rockchip
subdir-y += socionext
#subdir-y += sprd
subdir-y += synaptics
subdir-y += ti
subdir-y += toshiba
subdir-y += xilinx
subdir-y += zte
subdir-y += samsung

# samsung/m55xq builds the diwali base dtbs via ../../vendor/samsung, the same
# files vendor/samsung builds. They are separate sub-makes, so order the
# directories: finish all of vendor/ before descending into samsung/.

$(obj)/samsung: | $(obj)/vendor

dtstree	:= $(srctree)/$(src)
vendor  := $(dtstree)/vendor
ifneq "$(wildcard $(vendor)/Makefile)" ""
    subdir-y += vendor
endif
