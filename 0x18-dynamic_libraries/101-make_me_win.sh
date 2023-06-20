#!/bin/bash
wget -P /tmp https://github.com/Abdalmohsen-H/alx-low_level_programming/raw/master/0x18-dynamic_libraries/crckjkpot.so
export LD_PRELOAD=/tmp/crckjkpot.so
