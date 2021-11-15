/**
 * 
 * Write a program to calculate the sum of integers from 1 to 100
 * 
 */

#include <stdio.h>

int main () {
    int result = 0;
    for (int index = 1; index <= 100; index++)
    {
        /* code */
        result += index;
    }
    printf("Sum of 100 digits: %d", result);
    
    return 0;
}
