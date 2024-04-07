Steps to run:

Navigate to the folder SimpleLinuxDriver

Give command make load

Check /proc/modules file and /proc/devices file to see Simple-driver loaded from Step 2.

Get major device number xxx from the /proc/devices file. It is < 255.

Give command mknod /dev/simple-driver c  xxx 0 where xxx is the major device number

Give command cat /dev/simple-driver to make sure device works correctly.

Reference: https://www.apriorit.com/dev-blog/195-simple-driver-for-linux-os
