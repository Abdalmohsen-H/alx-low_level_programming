# 0x18-dynamic_libraries

## How to create it
gcc -fPIC -c *.c
gcc -shared -o libdynamic.so *.o



then check with
nm -D libdynamic.so

