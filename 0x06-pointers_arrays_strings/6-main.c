#include "main.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s\n", ptr); /* Print the modified string */
    printf("%s\n", str); /* Print the original string (to show it's not modified in place) */
    return 0;
}
