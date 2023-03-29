#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Hello,";
    char dest[] = "*****9999977777";

    // Copy up to 9 characters from src to dest
    strncpy(dest, src, 3);

    // Print the result
    printf("src = %s\n", src);
    printf("dest = %s\n", dest);

    return 0;
}

