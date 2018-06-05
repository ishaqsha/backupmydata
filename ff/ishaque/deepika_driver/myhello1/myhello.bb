#
# Yocto recipe to build a kernel module out of the kernel tree
# kernmodule.bb  
# Marco Cavallini - KOAN sas - www.koansoftware.com
#

DESCRIPTION = "Hello kernel module out of the kernel tree"
SECTION = "examples"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=12f884d2ae1ff87c09e5b7ccc2c4ca7e"
PR = "r0"

inherit module

SRC_URI =   "file://hellokernel.c \
	file://hikernel.c \	
	file://Makefile \
	file://0001-hiiii.patch \	
	file://COPYING \
"

S = "${WORKDIR}"
