#include <stdio.h>

int main(){
  // Task: Scan two symbols and output their "sum" as a number
  /*
    EXAMPLE
    Please, enter 2 symbols: A B
    'A' + 'B' = 131
  */
  char a;
  char b;
  printf("Please, enter 2 symbols:");
  scanf("%c %c", &a, &b);
  int sum = a + b;
  printf("'%c' + '%c' = %d", a, b, sum);
  return 0;
}
