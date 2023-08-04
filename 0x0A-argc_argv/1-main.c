#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc == 1) {
    printf("Usage: %s <arguments>\n", argv[0]);
    return 1;
  }

  // Call the main program (1-args.c)
  return main(argc, argv);
}
