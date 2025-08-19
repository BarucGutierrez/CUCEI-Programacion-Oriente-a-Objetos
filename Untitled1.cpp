#include <iostream>
#include<string>

using namespace std;

class Alumno{
//atributos
private:
    string nombre;
    string codigo;
    float calificaciones[5];
//metodos
public:
    void imprimir();
    float promedio();
    Alumno();
    ~Alumno();
};

void Alumno::imprimir(){
    if((nombre== " ")||(codigo== " ")){
       cout<<"ingrese el nombre del alumno: "<<endl;
       cin>>nombre;
       cout<<"ingrese el codigo del alumno: "<<endl;
       cin>>codigo;
       Alumno::promedio();
    }
}

float Alumno::promedio(){
    int i;
    float promedio=0;
    for(i=0;i<5;i++){
        cout<<"ingrese la calificacion "<<i<<": "<<endl;
        cin>>calificaciones[i];
        promedio += calificaciones[i];
    }
    promedio = promedio/5;
    return promedio;
}

Alumno::Alumno(){
    nombre=" ";
    codigo=" ";
}

Alumno::~Alumno(){
}

int main(){
Alumno pedro;
pedro.imprimir();
return 0;
}
