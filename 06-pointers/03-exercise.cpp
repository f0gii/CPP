#include <iostream>

using namespace std;

int main(){
    int num = 10, *dir_num;
    dir_num = &num;
    bool prime = true;

    for(int i= 2; i < *dir_num && prime == true; i++){
        if(*dir_num%i == 0){
            prime = false;
        }
    }
    
    string result = (prime == true) ? "its prime" : "its not prime";
    cout << result << endl;

    return 0;
}