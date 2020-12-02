/* 
    You don't have to specify the size of the array. But if you don't, 
    it will only be as big as the elements that are inserted into it:

    string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3

    This is completely fine. However, the problem arise if you want 
    extra space for future elements. Then you have to overwrite the 
    existing values:

    string cars[] = {"Volvo", "BMW", "Ford"}; 
    //to 
    string cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    If you specify the size however, the array will reserve the extra space:
*/

#include <iostream>

using namespace std;

int main(){

    // size of array is 5, even though it's only three elements inside it
    string cars[5] = {"Volvo", "BMW", "Ford"};
    
    cars[3] = {"Mazda"};
    cars[4] = {"Tesla"};

    for(int i=0; i < 5; i++){
        cout << cars[i] << endl;
    }
    
    return 0;
}

/*     
    It is also possible to declare an array without specifying the elements on
    declaration, and add them later:

    string cars[5];
    cars[0] = {"Volvo"};
    cars[1] = {"BMW"};
    ... 
*/