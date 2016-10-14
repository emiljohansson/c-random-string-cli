#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../c-random-string/random-string.h"

int main(int argc, char *argv[]) {
  srand(time(NULL));

  int lengthLimit = 50000;
  int length = 10;

  if (argc > 1) {
    length = atoi(argv[1]);
    if (length > lengthLimit) {
      length = lengthLimit;
    }
  }

  char * value = randomString(length);
  printf("%s\n", value);

  return 0;
}
