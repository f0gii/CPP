#include <iostream>
#include <string.h>

using namespace std;

struct Runner{
    char name[20];
    int age;
    char gender[10];
    char club[20];
}r1;


int main(){
    char level[20];

    cout << "Given name: ";
    cin.getline(r1.name,20,'\n');
    cout << "Given age: ";
    cin >> r1.age;
    fflush(stdin);
    cout << "Given gender: ";
    cin.getline(r1.gender,10,'\n');
    cout << "Given club: ";
    cin.getline(r1.club,20,'\n');

    if (r1.age <= 18){
        strcpy(level,"young");
    }
    else if(r1.age <= 40 ){
        strcpy(level,"Senior");
    }
    else {
        strcpy(level,"Veteran");
    }

    cout << "\n";
    cout << "Name: " << r1.name << endl;
    cout << "Age: " << r1.age << endl;
    cout << "Gender: " << r1.gender << endl;
    cout << "Club: " << r1.club << endl;
    cout << "Category: " << level << endl;

    return 0;
}
