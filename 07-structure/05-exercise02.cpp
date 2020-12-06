#include <iostream>
#include <string.h>

using namespace std;

struct Student{
    char name[20];
    int age;
    float note;
}stn[3];

int main(){
    for(int i=0; i<3; i++){
        cout << "Name: ";
        cin.getline(stn[i].name,20,'\n');
        cout << "Age: ";
        cin >> stn[i].age;
        cout << "Final note: ";
        cin >> stn[i].note;
        fflush(stdin);
    }

    int bnote;

    
    if(stn[0].note > stn[1].note){
        bnote = 0;
    }
    else if(stn[1].note > stn[2].note){
        bnote = 1;
    }
    else if(stn[2].note > stn[0].note){
        bnote = 2;
    }
    
    cout << "Name: "<< stn[bnote].name << endl;
    cout << "Age: "<< stn[bnote].age << endl;
    cout << "Final note: : "<< stn[bnote].note << endl;

    return 0;
}