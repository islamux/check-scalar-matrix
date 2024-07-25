#include <iostream>
#include <iomanip>
#include <string>
#pragma once
using namespace std;

void NestedPrintMatrixWithRandomNumbers(int arr[3][3], short rows, short cols, short from , short i)
{
    for (short j = 0; j < cols; j++)
    {
      // cout << setw(3) << arr[i][j] ;
       printf("%0*d", 2, arr[i][j]);
       cout <<" ";
       
    }
    cout << "\n";
    
}