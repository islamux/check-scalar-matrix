#include <iostream>
using namespace std;

#pragma once 

bool CheckScalarMatrix(int arr[3][3], short rows, short cols)
{
    int firstDiogonalElement  = arr[0][0];

    for (short i = 0; i  < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            // check diagonal element
            if (i==j && arr[i][j] != firstDiogonalElement) // check diagonal 
            {
                return false;
            }

            // Check the rest elements
            else if(i != j && arr[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

