/*
    The while loop loops through a block of code as long as a specified condition is true:
    
    while (condition) {
    // code block to be executed
    }
    
    In the example below, the code in the loop will run, over and over again, as long as a 
    variable (i) is less than 5:

*/

#include <iostream>

using namespace std;

int main(){
    
    int i = 0;
    
    while (i < 5) {
        cout << i << "\n";
        i++;
    }

    return 0;
}