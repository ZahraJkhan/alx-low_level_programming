#!/bin/bash
wget -P /tmp https://github.com/holbertonschool/0x18.c/blob/master/101-md5_gm/putshack.so
export LD_PRELOAD=/tmp/putshack.so
