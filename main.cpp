#include <iostream>
#include "print_matrix_with_random_numbers.h"
#include "print_result.h"
using namespace std;

int main()
{
    /*
        - Fill Matrix1 with Random Numbers.
        - Print Matrix

        - Check one by one --> fun (scalar matrx) ==> {{9,0,0},
                                                      {0,9,0},
                                                      {0,0,9}}
                                                number in diagonal is equal (any number) and the rest is 0

        - PrintResult
    */

   // Randomly every run
   srand((unsigned)time(NULL));

   // Declartion 
   int arr[3][3] = {{9,0,0},
                    {0,9,0},
                    {0,0,9}};
   short rows = 3;
   short cols = 3;
   short from = 0;
   short to = 1;

    // Fill & Print Matrix1
    cout << "Matrix1: \n";
    PrintMatrixWithRandomNumbers(arr, rows, cols, from);
    cout << "\n";

    // Check Identity matrix using bool and print the result in seperate fun
    PrintResult(arr, rows, cols);
    return 0;
}