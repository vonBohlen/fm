#include <stdio.h>

#define CLAY_IMPLEMENTATION
#include "clay.h"

int main() {
   uint64_t totalMemorySize = Clay_MinMemorySize();
   printf(" %d", totalMemorySize);
   return 0;
}
