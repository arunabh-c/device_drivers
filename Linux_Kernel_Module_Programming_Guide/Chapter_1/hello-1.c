/*
2 * hello-1.c - The simplest kernel module.
3 */
4 #include <linux/module.h> /* Needed by all modules */
5 #include <linux/printk.h> /* Needed for pr_info() */
6
7 int init_module(void)
8 {
9 pr_info("Hello world 1.\n");
10
11 /* A non 0 return means init_module failed; module can't be loaded. */
12 return 0;
13 }
14
15 void cleanup_module(void)
16 {
17 pr_info("Goodbye world 1.\n");
18 }
19
20 MODULE_LICENSE("GPL");
