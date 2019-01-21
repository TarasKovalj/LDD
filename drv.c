#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Robert W. Oliver II");
MODULE_DESCRIPTION("A simple example Linux module.");
MODULE_VERSION("0.01");
static int __init drv_example_init(void) {
  printk(KERN_INFO "Hello, World!\n");
  return 0;
}
static void __exit drv_example_exit(void) {
  printk(KERN_INFO "Goodbye, World!\n");
}
module_init(drv_example_init);
module_exit(drv_example_exit);
///home/user/projects/core_src/linux
