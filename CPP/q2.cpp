/**
 * 
 * Write a program to calculate the sum of integers from 1 to 100
 * 
 */

#include <iostream>
using namespace std;

int main (){
    int result = 0;
    for (int index = 1; index <= 100; index++)
    {
        /* code */
        result += index;
    }
    cout << result;    
}
