#include <stdio.h>

int main(){
  // Task: Scan a user's number, and print `Fizz` if number is divisible by 3,  `Buzz` if number is divisible by 5, `FizzBuzz` if number is divisible by 3 and 5
  /*
    EXAMPLE:
    Please enter number: 15
    FizzBuzz
  */
  int num;
  printf("Please enter number: ");
  scanf("%d", &num);
  if(num % 3 == 0 && num % 5 != 0){
    printf("Fizz");
  } else if (num % 5 == 0 && num % 3 != 0) {
    printf("Buzz");
  } else if (num % 3 == 0 && num % 5 == 0) {
    printf("FizzBuzz");
  } else {
    printf("%d", num);
  }
  return 0;
}
