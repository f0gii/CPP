/* 
    Make a program that reads a 3x3 matrix and creates its transposed matrix.
    
    123         147
    456    ->   258
    789         369


 */
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
        int mtx [3][3] = {{1,2,3},{4,5,6},{7,8,9}};

        for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout << mtx[i][j];                        
                }
                
                cout << "\n";
        }

        cout << "\n";

        for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout << mtx[j][i];
                }
            cout << "\n";
        }
    getch();
    return 0;
}