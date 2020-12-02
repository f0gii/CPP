/*  
    To change the value of a specific element, refer to the index number:
    cars[0] = "Opel"; 
*/
#include <iostream>

using namespace std;

int main(){
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
cout << cars[0];
// Now outputs Opel instead of Volvo
}