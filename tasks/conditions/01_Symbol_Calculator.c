#include <stdio.h>

int main(){
    /* 
    Task: Scan 2 integers and an operator (+, -, *, /), perform the corresponding operation and output the result
    If the symbol is unknown, output "Unknown operator"
    */
    /*
      EXAMPLE: 
      Please print two numbers and an operator (+, -, /, %, *): 5 3 +
      Addition of x and y is 8.0

      Please print two numbers and an operator (+, -, /, %, *): 4 7 ?
      Unknown operator
    */
    int x, y;
    char symbol;
    float result;
    printf("Please print two numbers and an operator (+, -, /, %, *): ");
    scanf ("%d %d %c", &x, &y, &symbol);
    if (symbol == '+'){
        result = x + y;
        printf("Addition of x and y is %.1f", result);
    } else if (symbol == '-'){
        result = x - y;
        printf("Substraction of x and y is %.1f", result);
    } else if (symbol == '/'){
        result = x / y;
        printf("Division of x and y is %.1f", result);
    } else if (symbol == '%'){
        result = x / y;
        printf("Modulus of x and y is %.1f", result);
    } else if (symbol == '*'){
        result = x / y;
        printf("Multiplication of x and y is %.1f", result);
    } else {
        printf("Unknown operator");
    }
    return 0;
}
