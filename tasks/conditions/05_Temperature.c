#include <stdio.h>

int main(){
    // Task: scan user's number, and display the temperature type
    /*
      EXAMPLE:
      Enter today's temperature: 15
      Normal

      Enter today's temperature: 1PP
      Temperature not in reach
    */
    float temp;
    printf("Enter today's temperature: ");
    scanf("%f", &temp);
    (temp < 0 ) ? printf("Freezing") : (temp >= 0 && temp <= 30) ? printf("Normal") : (temp > 30) ? printf("Hot") : printf("Temperature not in reach");
    return 0;
}
