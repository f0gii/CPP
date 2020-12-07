#include <iostream>

using namespace std;

int main(){
    int num[10], *dir_num;
    
    cout << "Enter 10 num" << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter " << i+1 << " num: ";
        cin >> num[i];

    }    
    cout << "\n";

    dir_num = num;

    for (int i = 0; i < 10; i++)
    {
        if (*dir_num%2==0)
        {       
            cout << "num " << *dir_num  << " it is pair." << "\t";
            cout << "memory num: " << dir_num << endl;
        }
        else
        {
            cout << "num " << *dir_num  << " it is odd." << "\t";
            cout << "memory num: " << dir_num << endl;
        }

        dir_num++;
        
        
    }
    
    return 0;
}