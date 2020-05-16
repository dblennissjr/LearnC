#include <stdio.h>

//funtion prototype
char myName(char fname[50], char lname[50]);

int main()
{
    printf("My function is below:\n");
    //Function called
    myName("Darrell", "Blenniss");
    return 0;
}

//Function defined
char myName(char fname[50], char lname[50])
{
    return printf("First name: %s - Last Name: %s\n", fname, lname);
}