ARCH=arm64
COMPILER=aarch64-linux-gnu-
obj-m := hikernel.o
KERNELDIR := /home/ishaqsha/rpi/linux-64/linux
PWD := $(shell pwd)
default:
    $(MAKE) -C $(KERNELDIR) M=$(PWD) ARCH=$(ARCH) CROSS_COMPILE=$(COMPILER) modules

clean:
    $(MAKE) -C $(KERNELDIR) M=$(PWD) ARCH=$(ARCH) clean

