//  make a 2 x 2 int matrix, fill it with numbers and then pass them to another matrix.

#include <iostream>
using namespace std;

int main(){
    
    int oneM [2][2] = {{1,2},{3,4}};
    int twoM [2][2];

    for(int i=0; i < 2; i++){
        for(int j=0; j < 2; j++){
            twoM[i][j] = oneM[i][j];
        }
    }
    
    for(int i=0; i < 2; i++){
        for(int j=0; j < 2; j++){
            cout << twoM[i][j] << endl;
        }
    }
    return 0;
}

