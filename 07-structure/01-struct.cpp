#include <iostream>
// #include <conio.h>

using namespace std;

struct Person{
    char name[20];
    int age;
}
person1 = {"Antonio", 20},
person2 = {"Luis", 15};

int main(){
    
    cout << "Nombre1: " << person1.name << endl;
    cout << "Edad1: " << person1.age << endl;
    cout << "\n";
    cout << "Nombre2: " << person2.name << endl;
    cout << "Edad2: " << person2.age << endl;
    
    return 0;
}