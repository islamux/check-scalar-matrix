#include <iostream>
#include "nested_print_matrix_with_random_number.h"
#pragma once
using namespace std;

void PrintMatrixWithRandomNumbers(int arr[3][3], short rows, short cols, short from)
{
    for (short i = 0; i < rows; i++)
    {
        NestedPrintMatrixWithRandomNumbers(arr, rows, cols, from, i);
    }
    
}