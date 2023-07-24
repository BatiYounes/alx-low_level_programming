#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <password>\n", argv[0]);
        return 1;
    }

    // Replace the following strcmp with the correct comparison function for 101-crackme
    if (strcmp(argv[1], "PASSWORD_HERE") == 0) {
        printf("Tada! Congrats\n");
    } else {
        printf("Try again!\n");
    }

    return 0;
}
