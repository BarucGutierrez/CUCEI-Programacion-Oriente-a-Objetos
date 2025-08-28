#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class Persona{
//atributos
private:
    int dia; 
    int mes; 
    int anio;
    string nombre;

//metodos
public:
    void pedirdata();
    void imprimirdata();
    int usardata();
    Persona();
    ~Persona();
};

void Persona::pedirdata(){
    cout<<"Ingrese su nombre: "; getline(cin, nombre);
    cout<<"Ingrese su dia de nacimiento (solo dia): "; cin>>dia;
    cout<<"Ingrese su mes de nacimiento (solo mes): "; cin>>mes;
    cout<<"Ingrese su ano de nacimiento (solo mes): "; cin>>anio;
}

int Persona::usardata(){
    time_t t = time(0);
    tm* fechaActual = localtime(&t);

    int diaHoy = fechaActual->tm_mday;
    int mesHoy = fechaActual->tm_mon + 1; 
    int anioHoy = fechaActual->tm_year + 1900; 

    int edad = anioHoy - anio;

    if (mesHoy < mes || (mesHoy == mes && diaHoy < dia)) {
        edad--;
    }

    return edad;
}

void Persona::imprimirdata() {
        cout << "\nNombre: " << nombre << endl;
        cout << "Edad: " << usardata() << " anios" << endl;
}

Persona::Persona(){
    nombre=" ";
}

Persona::~Persona(){
}

int main(){
    Persona usuario;
    char hrm1 = 'n';

    do{
    usuario.pedirdata();
    usuario.imprimirdata();

    cout<<"Desea salir del programa? (y/n):"<<endl;
    cin>>hrm1;
    cout<<"\n\n";
    cin.ignore();

    }while(hrm1=='n');

    cout<<"El programa ha terminado...\n\n";

}
