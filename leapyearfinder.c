#include <stdio.h> // To include C standard library for printf and scanf

void leapYear() // Determines new function for finding leap year
{
    int year, leap; // Declare 2 variables for storing user input, and leap year checking
    scanf("%i", &year); // Ask user for year
    
    leap = year % 4;
    if(leap == 0)  // Check if leap variable is equal to 0
    {
        printf("%i is a leap year\n", year);  // Informs that this is a leap year if the condition is true
    }
    else
    {
        printf("%i is not a leap year\n", year);  // Else, informs it's not
    }
}
int main()  // Control begins here
{
     leapYear(); // Call the function
}
