#include <iostream>
// #include <conio.h>

using namespace std;

struct Person{
    char name[20];
    int age;
}persona1;

int main(){
    cout << "Nombre: ";
    cin.getline(persona1.name,20,'\n');
    cout << "Edad: ";
    cin >> persona1.age;

    cout << "Nombre: " << persona1.name << endl;
    cout << "Edad: " << persona1.age << endl;

    return 0;
}