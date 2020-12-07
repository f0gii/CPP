#include <iostream>

using namespace std;

int main(){
    int num[] = {1,2,3,4,5,'\0'};
    int *dir_num;

    dir_num = num;

    for (int i = 0; i < 5; i++)
    {
        cout << "num " << i << " :" << *dir_num++ << endl;
        // cout << " memory num " << i << " :" << dir_num++ << endl;
        
    }
    

    return 0;
}