/*     
    &n = n direction
    *n = variable content from pointer
*/
#include <iostream>

using namespace std;

int main(){

    int num, *dir_num;
    num = 20;
    dir_num = &num;

    cout << "Number: " << num << endl;
    cout << "Memory direction: " << &num << endl;

    cout << "Number: " << *dir_num << endl;
    cout << "Memory direction: " << dir_num << endl;

    return 0;
}
