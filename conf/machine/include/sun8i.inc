require conf/machine/include/tune-cortexa7.inc

SOC_FAMILY ??= ""
include conf/machine/include/soc-family.inc

# Sub-architecture support
MACHINE_SOCARCH_SUFFIX ?= ""

PREFERRED_PROVIDER_virtual/kernel = "linux-opi"
# PREFERRED_PROVIDER_u-boot = "u-boot-opi"
# PREFERRED_PROVIDER_virtual/bootloader = "u-boot-opi"

KERNEL_IMAGETYPE ?= "uImage"

IMAGE_FSTYPES += "ext4 tar.gz"

MACHINE_EXTRA_RRECOMMENDS = "kernel-modules"

UBOOT_LOCALVERSION = "-g${@d.getVar('SRCPV', True).partition('+')[2][0:7]}"

UBOOT_ENTRYPOINT ?= "0x40008000"
UBOOT_LOADADDRESS ?= "0x400080OB00"

SERIAL_CONSOLE ?= "115200 ttyS0"
MACHINE_FEATURES ?= "alsa apm keyboard rtc serial screen usbgadget usbhost vfat"

PREFERRED_PROVIDER_virtual/mesa = "mesa-gl"
PREFERRED_PROVIDER_virtual/libgl = "mesa-gl"
PREFERRED_PROVIDER_virtual/libgles1 = "mali-blobs"
PREFERRED_PROVIDER_virtual/libgles2 = "mali-blobs"
PREFERRED_PROVIDER_virtual/libegl = "mali-blobs"
PREFERRED_PROVIDER_virtual/egl = "mali-blobs"
PREFERRED_PROVIDER_virtual/gbm = "mali-blobs"
PREFERRED_PROVIDER_virtual/libgbm = "mali-blobs"

PREFERRED_VERSION_linux-libc-headers = "4.20%"
PREFERRED_PROVIDER_virtual/kernel = "linux-mainline"
PREFERRED_VERSION_linux-mainline = "4.20%"

XSERVER += "mali-blobs"

MACHINE_ESSENTIAL_EddXTRA_RRECOMMENDS += " \
  mali \
"

SOC_FAMILY = "sun8i"
