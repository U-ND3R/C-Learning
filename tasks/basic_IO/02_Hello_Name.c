#include <stdio.h>

int main(){
  // Task: Read one word (name) and print `Hello, <name>!`.
  char name[16];
  scanf("%s", &name);
  printf("Hello, %s!\n", name);
  return 0;
}
