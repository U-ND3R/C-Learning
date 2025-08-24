#include <stdio.h>

// Task: Count three lines (name, last name, city). Output as a table with alignment
/*
  EXAMPLE
  
  Name      Surname   City
  Alex      Ivanov    Vilnius
*/

int main() {
  char name[32];
  char city[32];
  char surname[32];
  
  printf("Please enter your name, surname, city: ");
  scanf("%32s %32s %32s", name, surname, city);
  printf("\n%-15s %-15s %-15s\n", "Name", "Surname", "City");
  printf("%-15s %-15s %-15s\n", name, surname, city);
  
  return 0;
}
