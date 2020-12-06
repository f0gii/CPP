#include <iostream>

using namespace std;

struct inf_direction{
    char direction[30];
    char town[20];
    char providens[20];
};

struct employee{
    char name[20];
    struct inf_direction dir_employee; 
    double salary;
}employee[2];

int main(){
    
    for(int i=0;  i<2; i++){
        fflush(stdin);
        cout <<"get name: ";
        cin.getline(employee[i].name,20,'\n');
        cout << "get direction: ";
        cin.getline(employee[i].dir_employee.direction,30,'\n');
        cout << "get town: ";
        cin.getline(employee[i].dir_employee.town,20,'\n');
        cout << "get providens: ";
        cin.getline(employee[i].dir_employee.providens,20,'\n');
        cout << "get salary: ";
        cin >> employee[i].salary;
        cout << "\n";
    }

    for(int i=0; i<2; i++){
        cout << "Name: " << employee[i].name << endl;
        cout << "Direction: " << employee[i].dir_employee.direction << endl;
        cout << "Town: " << employee[i].dir_employee.town << endl;
        cout << "Providens: " << employee[i].dir_employee.providens << endl;
        cout << "Salary: " << employee[i].salary << endl;
        cout << "\n";
    }
    return 0;
}