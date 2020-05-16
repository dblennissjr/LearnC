#include <stdio.h>

int main() {
    // declare variables of int type
    int length;
    int width;
    int area;
    
    // Get User Input
    printf("\nThis programs calculates the area of square or rectangle.\n");
    printf("Enter Length: ");
    scanf("%d", &length);
    printf("Enter Width: ");
    scanf("%d", &width);
    
    // Calcuate Area and output to user
    area = length * width;
    printf("\nThe Area = %d\n", area);
    return 0;
}