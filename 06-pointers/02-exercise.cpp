#include <iostream>

using namespace std;

int main(){
    int num, *dir_num;

    cout << "Enter a number: ";
    cin >> num;

    dir_num = &num;

    if(*dir_num%2 == 0){
        cout << "the " << *dir_num << " number is pair" << endl;
        cout << "memory direction: " << dir_num << endl;
    }else {
        cout << "the " << *dir_num << " number is odd" << endl;
        cout << "memory direction: " << dir_num << endl;    
    }


    return 0;
}