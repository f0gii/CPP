#include <iostream> 
#include <string.h>

using namespace std;

int main(){
    char name[20];

    // 1)
    // cin >> name;
    // cout << name << endl;
    
    // 2)
    // gets(name);
    // cout << name << endl;

    // 3)
    cin.getline(name,20,'\n');
    cout << name << endl;

    return 0;
}