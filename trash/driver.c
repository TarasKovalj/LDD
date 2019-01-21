#include <linux/module.h>
//#include <linux/version.h>
#include <linux/kernel.h>

static int my_mod_init(void)
{
  printk(KERN_ALERT "Hello, world\n");
  return 0;
}

static int my_mod_exit(void)
{
  printk(KERN_ALERT "Exit my module\n");
  return 0;
}

module_init(my_mod_init);
module_exit(my_mod_exit);
