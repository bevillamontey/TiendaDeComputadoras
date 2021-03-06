#include<iostream>
#include<string.h>
#include "Usuario.cpp"
using namespace std;

class Cliente : public Usuario{
    private:
        string codigo;
        string preferencias;
    public:
        Cliente(string,string,string,string,int,string,string,string,string,string);
        void modificar_cliente(int);
        void mostrar_cliente();
};

Cliente::Cliente(string u,string c,string n,string a,int e,string d,string t,string m,string cd,string p) : Usuario(u,c,n,a,e,d,t,m){
    codigo=c;
    preferencias=p;
}

void Cliente::modificar_cliente(int dato){
    if((dato<9)||(dato==0)){
        modificar_usuario(dato);
    }
    if((dato==9)||(dato==0)){
        cout<<"Cambiar preferencias: ";
        getline(cin,preferencias);
    }
}

void Cliente::mostrar_cliente(){
    mostrar_usuario();
    cout<<"Codigo de cliente: "<<codigo<<endl;
    cout<<"Preferencias: \n"<<preferencias<<endl;
}
