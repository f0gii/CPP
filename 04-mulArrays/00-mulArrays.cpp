/* 
    In C/C++, we can define multidimensional arrays in simple words as array of arrays. 
    Data in multidimensional arrays are stored in tabular form (in row major order).
    General form of declaring N-dimensional arrays:
    
    data_type  array_name[size1][size2]....[sizeN];

    data_type: Type of data to be stored in the array. 
               Here data_type is valid C/C++ data type
    
    array_name: Name of the array

    size1, size2,... ,sizeN: Sizes of the dimensions

    Examples:

    Two dimensional array:
    int two_d[10][20];

    Three dimensional array:
    int three_d[10][20][30];

    The array int x[10][20] can store total (10*20) = 200 elements.
    Similarly array int x[5][10][20] can store total (5*10*20) = 1000 elements.

    To output all the elements of a Two-Dimensional array we can use nested for loops. 
    We will require two for loops. One to traverse the rows and another to traverse columns.

 */

#include <iostream>

using namespace std;

int main(){
        // an array with 3 rows and 2 columns. 
    int x[3][2] = {{0,1}, {2,3}, {4,5}}; 
  
    // output each array element's value 
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 2; j++) 
        { 
            cout << "Element at x[" << i 
                 << "][" << j << "]: "; 
            cout << x[i][j]<<endl; 
        } 
    }

    return 0;
}

/* 
    Output:
    Element at x[0][0]: 0
    Element at x[0][1]: 1
    Element at x[1][0]: 2
    Element at x[1][1]: 3
    Element at x[2][0]: 4
    Element at x[2][1]: 5 */