#include <stdio.h>
/**
*run_b4_main - excute this function before main
*using constructor function
*/
void __attribute__((constructor)) run_b4_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
