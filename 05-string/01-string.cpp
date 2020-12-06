#include <iostream> 
#include <string.h>

using namespace std;

int main(){
    char name[20];

    // 1)
    // cin >> name;
    // cout << name << endl;
    
    // 2)
    // gets(name);
    // cout << name << endl;

    // 3)
    cin.getline(name,20,'\n');
    cout << name << endl;

    return 0;
}

//length() da la cantidad de caracteres
// strcpy(name,name2) copia un string de otro
// strcom(name,name2) compara y da valor voliano
// strcat(name,name2) unir varios strings
// strriv(name) revertir
// strupr(name) mayu
// strlwr(name) minu
// atoi() string a enteros
// atof() string a flotantes