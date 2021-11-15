/*
b)	The following table specifies the major contents of four brands of breakfast cereals. 
Commodity   Fiber   Sugar   Fat     Salt
Top flake   12g     25g     16g     0.4g
Cornabix    22g     4g      8g      0.3g
Oatabix     28g     5g      9g      0.5g
Ultraban    37g     7g      2g      0.2g

•	Discuss briefly a two-dimensional array to capture this data 	(4 marks)
•	Write a function which outputs this table element by element. 	(6 marks)

float commodity[4][4];

*/

#include <iostream>
using namespace std;

void showCommodity()
{
    double commodity[4][4] = {
        {12.0, 25.0, 16.0, 0.4},
        {22.0, 4.0, 8.0, 0.3},
        {28.0, 5.0, 9.0, 0.5},
        {37.0, 7.0, 2.0, 0.2},
    };
    // nested for loop to output the data
    for (int row = 0; row < 4; row++)
    {
        /* code */
        for (int column = 0; column < 4; column++)
        {
            /* code */
            cout << commodity[row][column] << "\n";
        }
    }
}

int main () {
    showCommodity();
    return 0;
}
