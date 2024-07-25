#include <iostream>
#include "check_scalar_matrix.h"
using namespace std; 

#pragma once

void PrintResult(int arr[3][3], short rows, short cols)
{
    if (CheckScalarMatrix(arr, rows, cols))
                cout << "Yes, matrix is scalar.\n";
    else
                cout << "No, matrix is not scalar.\n";
    
    
}