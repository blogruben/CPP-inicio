#include<iostream>
 
 using namespace std;
 
 int main(){

    int numeroDia;

    cout<<"Escriba un numero de dia: "; cin>>numeroDia;

    //SWITCH
    switch (numeroDia) {
    case 1:
        cout << "Lunes"<<endl; break;
    case 2:
        cout << "Martes"<<endl; break;
    case 3:
        cout << "Miercoles"<<endl; break;
    case 4:
        cout << "Jueves"<<endl; break;
    case 5:
        cout << "Viernes"<<endl; break;
    case 6:
        cout << "Sabado"<<endl; break;
    case 7:
        cout << "Domingo"<<endl; break;
    }



    return 0;
 }