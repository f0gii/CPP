
/* 
    You can loop through the array elements with the for loop.

    The following example outputs all elements in the cars array:
*/

#include <iostream>

using namespace std;

int main(){
    
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    
    for(int i = 0; i < 4; i++) {
        cout << i << ": " << cars[i] << "\n";
    }

    return 0;
}