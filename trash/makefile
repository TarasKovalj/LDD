obj-m := drv.o	# Module Name is drv.c

KDIR  := /lib/modules/$(shell uname -r)/build
#KDIR  := /home/user/projects/core_src/linux
all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
	$(RM) Module.markers modules.order
