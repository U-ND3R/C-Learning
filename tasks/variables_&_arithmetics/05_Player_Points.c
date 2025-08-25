#include <stdio.h>
int main(){
    /* Task: 
       The player starts with a certain number of points, which is entered by the user
       Then the program must calculate the  number of points according to the rules:
       1. Add 10 points using `points++` and output the intermediate result
       2. Add another 20 points using ++points and output the intermediate result
       3. Subtract 5 points using points-- and output the intermediate result
       4. Subtract another 15 points using --points and output the intermediate result
       5. Output a Final number of points = sum
    */
    /*
      EXAMPLE
      Initial points = 50
      After points++ = 50
      Current points = 51
      After ++points = 52
      Current points = 52
      After points-- = 52
      Current points = 51
      After --points = 50
      Current points = 50
      Expression (points++ + ++points + --points + points--) = 202
      Final points = 50
    */
    int points;
    printf("Initial points = ");
    scanf("%d", &points);
    printf("\nAfter points++ = %d", points++);
    printf("\nCurrent points = %d", points);
    printf("\nAfter ++points = %d", ++points);
    printf("\nCurrent points = %d", points);
    printf("\nAfter points-- = %d", points--);
    printf("\nCurrent points = %d", points);
    printf("\nAfter --points = %d", --points);
    printf("\nCurrent points = %d", points);
    int result = (points++ + ++points + --points + points--);
    printf("\nExpression (points++ + ++points + --points + points--) = %d", result);
    printf("\nFinal points = %d", points);
    return 0;
}
