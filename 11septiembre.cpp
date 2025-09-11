#include <iostream>
#include <string.h>

using namespace std;

int i=0;

class Persona {
private:
    string nombre;

public:
    void PedirData();
    void ImprimirData();
    Persona();
    ~Persona();
};

void Persona::PedirData(){
    cout<<"Ingrese su nombre, por fa :)"<<endl;
    getline(std::cin, nombre);
}
void Persona::ImprimirData(){
    cout<<"Su nombre es: "<<nombre<<endl;
}

class Deportista : public Persona {
private:
    string tipo;

public:
    void PedirData(){
        Persona::PedirData();
        cout<<"Ingrese su tipo de deporte, por fa :)"<<endl;
        getline(std::cin, tipo);
    }
    void ImprimirData(){
        Persona::ImprimirData();
        cout<<"Su deporte es: "<<tipo<<endl;
    }

};

class Alumno : public Persona {
    private:
        int codigo;
        float califiacion[5];
        float promedio = 0.00;

    public:
        void PedirData(){
            Persona::PedirData();
            cout<<"Ingrese su codigo, por fa :)"<<endl;
            cin>>codigo;
            for(i=0; i<5;i++){
                cout<<"Ingrese su califacion "<<i+1<<", por fa :)"<<endl;
                cin>>califiacion[i];
                promedio = promedio + califiacion[i];
            }
            promedio = promedio /5;
        }

        void ImprimirData(){
            Persona::ImprimirData();
            cout<<"Su codigo de alumno es: "<<codigo<<endl;
            cout<<"Su promedio de alumno es: "<<promedio<<endl;
        }

};

int main(){

    Deportista Mario1;
    Mario1.PedirData();
    Mario1.ImprimirData();


    Alumno Mario2;
    Mario2.PedirData();
    Mario2.ImprimirData();

    return 0;
}
