#include <stdio.h>

int main() {
    printf("Welcome to the number comparer for 4 numbers\n");

    int a, b, c, d;
    
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    printf("Enter 4th number: ");
    scanf("%d", &d);

    int largest = a;

    if (b > largest) {
        largest = b;  // Update largest if b is greater
    }
    if (c > largest) {
        largest = c;  // Update largest if c is greater
    }
    if (d > largest) {
        largest = d;  // Update largest if d is greater
    }

    printf("Largest number is %d\n", largest);
    printf("Thank You for using Number Comparer\nMade By Shantanu\n");

    return 0;
}

