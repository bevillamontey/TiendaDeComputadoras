#include<iostream>
#include<string.h>
#include "Usuario.cpp"
using namespace std;

class Vendedor : public Usuario {
    private:
        string codigo;
        float sueldo;
    public:
        Vendedor(string,string,string,string,int,string,string,string,string,float);
        void modificar_vendedor();
        void mostrar_vendedor();
        void vender_productos();
};

Vendedor::Vendedor(string u,string c,string n,string a,int e,string d,string t,string m,string cd,float s) : Usuario(u,c,n,a,e,d,t,m){
    codigo=cd;
    sueldo=s;
}

void Vendedor::modificar_vendedor(){
    modificar_usuario();

}

void Vendedor::mostrar_vendedor(){
    mostrar_usuario();
    cout<<"Codigo de vendedor: "<<codigo<<endl;
    cout<<"Sueldo: "<<sueldo<<endl;
}