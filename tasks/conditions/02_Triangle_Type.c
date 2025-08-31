#include <stdio.h>

int main(){
    // Task: Scan 3 integers as 3 sides of triangle, and determine whether they can be made into an equilateral, isosceles or scalene triangle
    /*
    EXAMPLE
    Please enter 3 sides of a triangle: 5 5 3
    Isosceles
    */
    int x, y, z;
    printf("Please enter 3 sides of a triangle: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x == y) {
        if (y == z) {
            printf("Equilateral\n");
        } else {
            printf("Isosceles\n");
        }
    } else {
        if (x == z) {
            printf("Isosceles\n");
        } else {
            if (y == z) {
                printf("Isosceles\n");
            } else {
                printf("Scalene\n");
            }
        }
    }
    return 0; 
}
