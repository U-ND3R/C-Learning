#include <stdio.h>

int main(){
  //Task: Scan three integers, store them in int, and output the average result as double with 2 decimal places.
  /*
    EXAMPLE
    Print 3 integers: 2 5 7
    Average of three numbers is 4.67
  */
  int x, y, z;
  printf("Print 3 integers: ");
  scanf("%d %d %d", &x, &y, &z);
  double avg = (x+y+z) / 3;
  printf("Average of three numbers is %.2lf", avg);
  return 0;
}
