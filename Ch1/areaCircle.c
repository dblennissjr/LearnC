#include <stdio.h>
#include<math.h>    

// Calculate the area of a cicle with user input

int main() {
    // declare variables of int type
    double radius;
    double area;
    const double pi = 22/7;
    
    // Get User Input for base & height
    printf("\nThis programs calculates the area of a Circle.\n");
    printf("Enter Radius Length: ");
    scanf("%lf", &radius);
    
    // Calcuate area and output to user
    area = (pi * (radius*radius));
    printf("\nThe Triangle Area = %.2lf\n", area);
    return 0;
}