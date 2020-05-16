#include <stdio.h>

// Calculate the area of a triangle with user input

int main() {
    // declare variables of int type
    int base;
    int height;
    int area;
    
    // Get User Input for base & height
    printf("\nThis programs calculates the area of a Triangle.\n");
    printf("Enter Base Length: ");
    scanf("%d", &base);
    printf("Enter Height Length: ");
    scanf("%d", &height);
    
    // Calcuate area and output to user
    area = (base * height)/2;
    printf("\nThe Triangle Area = %d\n", area);
    return 0;
}