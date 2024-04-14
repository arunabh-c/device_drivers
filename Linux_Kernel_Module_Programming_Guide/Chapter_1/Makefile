obj-m += hello-1.o
2
3 PWD := $(CURDIR)
4
5 all:
6 make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
7
8 clean:
9 make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
