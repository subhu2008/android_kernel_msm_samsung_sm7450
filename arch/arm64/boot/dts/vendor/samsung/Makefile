# M55 code added for SR-QN6887A-01-337 by caoyu at 20230918 start
ifneq ($(CONFIG_ARCH_QTI_VM), y)
ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
# M55 code added for QN6887A-103 by ZhaoXiangxiang at 20230926 start
dtbo-$(CONFIG_ARCH_X55) += \
	samsung-x55-qrd-default-overlay.dtbo \
	samsung-x55-qrd-r01-overlay.dtbo \
	samsung-x55-qrd-r02-overlay.dtbo \
	samsung-x55-qrd-r03-overlay.dtbo \
	samsung-x55-qrd-r04-overlay.dtbo \
	samsung-x55-qrd-r05-overlay.dtbo \
	samsung-x55-qrd-r06-overlay.dtbo \
	samsung-x55-qrd-r07-overlay.dtbo \
	samsung-x55-qrd-r08-overlay.dtbo \
	samsung-x55-qrd-r09-overlay.dtbo
# M55 code added for QN6887A-103 by ZhaoXiangxiang at 20230926 end

samsung-x55-qrd-default-overlay.dtbo-base := diwali.dtb diwalip.dtb diwali-lte.dtb
samsung-x55-qrd-r01-overlay.dtbo-base := diwali.dtb diwalip.dtb diwali-lte.dtb
samsung-x55-qrd-r02-overlay.dtbo-base := diwali.dtb diwalip.dtb diwali-lte.dtb
samsung-x55-qrd-r03-overlay.dtbo-base := diwali.dtb diwalip.dtb diwali-lte.dtb
samsung-x55-qrd-r04-overlay.dtbo-base := diwali.dtb diwalip.dtb diwali-lte.dtb
samsung-x55-qrd-r05-overlay.dtbo-base := diwali.dtb diwalip.dtb diwali-lte.dtb
samsung-x55-qrd-r06-overlay.dtbo-base := diwali.dtb diwalip.dtb diwali-lte.dtb
samsung-x55-qrd-r07-overlay.dtbo-base := diwali.dtb diwalip.dtb diwali-lte.dtb
# M55 code added for QN6887A-103 by ZhaoXiangxiang at 20230926 start
samsung-x55-qrd-r08-overlay.dtbo-base := diwali.dtb diwalip.dtb diwali-lte.dtb
samsung-x55-qrd-r09-overlay.dtbo-base := diwali.dtb diwalip.dtb diwali-lte.dtb
# M55 code added for QN6887A-103 by ZhaoXiangxiang at 20230926 end
else
dtb-$(CONFIG_ARCH_X55) += diwali-qrd.dtb
endif
endif

ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
dtbo-$(CONFIG_ARCH_ANORAK) += anorak-rumi-overlay.dtbo \
		anorak-idp-overlay.dtbo \
		anorak-qxr-overlay.dtbo \
		anorak-atp-overlay.dtbo \
		anorak-idp-hmt-overlay.dtbo \
		anorak-qxr-hmt-ufs-ref-overlay.dtbo \
		anorak-qxr-4kdisp-hmt-ufs-ref-overlay.dtbo \
		anorak-qxr-hmt-overlay.dtbo \
		anorak-idp-sd-overlay.dtbo \
		anorak-idp-top-hmt-overlay.dtbo \
		anorak-idp-top-hsp-overlay.dtbo \
		anorak-idp-4kdisp-hsp-overlay.dtbo \
		anorak-idp-4kdisp-hmt-overlay.dtbo \
		anorak-idp-hsp-nodisplay-overlay.dtbo
anorak-rumi-overlay.dtbo-base := anorak.dtb
anorak-idp-overlay.dtbo-base := anorak.dtb
anorak-qxr-overlay.dtbo-base := anorak.dtb
anorak-atp-overlay.dtbo-base := anorak.dtb
anorak-idp-hmt-overlay.dtbo-base := anorak.dtb
anorak-qxr-hmt-ufs-ref-overlay.dtbo-base := anorak.dtb
anorak-qxr-4kdisp-hmt-ufs-ref-overlay.dtbo-base := anorak.dtb
anorak-qxr-hmt-overlay.dtbo-base := anorak.dtb
anorak-idp-sd-overlay.dtbo-base := anorak.dtb
anorak-idp-top-hmt-overlay.dtbo-base := anorak.dtb
anorak-idp-top-hsp-overlay.dtbo-base := anorak.dtb
anorak-idp-4kdisp-hsp-overlay.dtbo-base := anorak.dtb
anorak-idp-4kdisp-hmt-overlay.dtbo-base := anorak.dtb
anorak-idp-hsp-nodisplay-overlay.dtbo-base := anorak.dtb
else
dtb-$(CONFIG_ARCH_ANORAK) += anorak-rumi.dtb \
		anorak-idp.dtb \
		anorak-qxr.dtb \
		anorak-atp.dtb \
		anorak-idp-hmt.dtb \
		anorak-qxr-hmt-ufs-ref.dtb \
		anorak-qxr-4kdisp-hmt-ufs-ref.dtb \
		anorak-qxr-hmt.dtb \
		anorak-idp-sd.dtb \
		anorak-idp-top-hmt.dtb \
		anorak-idp-top-hsp.dtb \
		anorak-idp-4kdisp-hsp.dtb \
		anorak-idp-4kdisp-hmt.dtb \
		anorak-idp-hsp-nodisplay.dtb
endif
# M55 code added for SR-QN6887A-01-337 by caoyu at 20230918 end
ifeq ($(CONFIG_ARCH_X55), y)
ifeq ($(CONFIG_ARCH_QTI_VM), y)
dtb-$(CONFIG_ARCH_QTI_VM) +=  diwali-vm-qrd.dtb
endif
endif

always-y	:= $(dtb-y)
subdir-y	:= $(dts-dirs)
clean-files	:= *.dtb *.dtbo
