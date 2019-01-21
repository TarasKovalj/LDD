obj-m := lkm_example.o	# Module Name is drv.c

KDIR  := /lib/modules/$(shell uname -r)/build
#KDIR  := /home/user/projects/core_src/linux
all:
	$(MAKE) -C $(KDIR) M=$(shell pwd) modules

clean:
	$(MAKE) -C $(KDIR) M=$(shell pwd) clean
	$(RM) Module.markers modules.order

test:
	# We put a — in front of the rmmod command to tell make to ignore
  # an error in case the module isn’t loaded.
	-sudo rmmod lkm_example
  # Clear the kernel log without echo
	sudo dmesg -C
  # Insert the module
	sudo insmod lkm_example.ko
  # Display the kernel log
	dmesg
