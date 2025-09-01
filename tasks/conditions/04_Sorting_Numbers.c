#include <stdio.h>

int main() {
  // Task: Scan 3 numbers, and list them in ascending order
  /*
    EXAMPLE:
    7 2 5
    2 5 7
  */
  int x, y, z;
  scanf("%d %d %d", &x, &y, &z);
  if (x <= y) {
    if (y <= z) {
      printf("%d %d %d\n", x, y, z);
    } else {
      if (x <= z) {
        printf("%d %d %d\n", x, z, y);
      } else {
        printf("%d %d %d\n", z, x, y);
      }
    }
  } else {
    if (x <= z) {
      printf("%d %d %d\n", y, x, z);
    } else {
      if (y <= z) {
        printf("%d %d %d\n", y, z, x);
      } else {
        printf("%d %d %d\n", z, y, x);
      }
    }
  }
  return 0;
}
