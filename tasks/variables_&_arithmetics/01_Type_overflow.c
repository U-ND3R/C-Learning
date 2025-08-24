#include <stdio.h>

int main(){
  // Task: Scan a variable `char x` and print its value as char and as int.
  /*
    EXAMPLE
    Print any Character: H
    As a character - H
    As an integer - 72
  */
  char x;
  printf("Print any Character: ");
  scanf("%c", &x);
  int y = x;
  printf("As a character - %c\nAs an integer - %d", x, y);
}
