#include <stdio.h>

int main(){
  // Task: Scan 3 values: int, float, char and print them on corresponding to their types.
  /*
    EXAMPLE
    Enter int, float, and a word (or char): 25 3.14 A
    int=25 
    float=3.140000
    char=A
  */
  int x;
  float y;
  char text[32];
  printf("Enter int, float, and a word (or char): ");
  scanf("%d %f %32s", &x, &y, text);
  printf("int = %d\nfloat = %f\ntext = %s\n", x, y, text);
  return 0;
}
