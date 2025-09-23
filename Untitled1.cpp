#include <iostream>

using namespace std;

class Figura{
public:
    int cordx;
    int cordy;

public:
    void imprime();
    double area();

};

class Cuadrado : public Figura{
private:
    double base;
    double altura;

public:
    void pedirDatos(){
        cout<<"ingrese la cordenada en x de la figura: "<<endl;
        cin>>cordx;
        cout<<"ingrese la cordenada en y de la figura: "<<endl;
        cin>>cordy;
        cout<<"ingrese la base de la figura: "<<endl;
        cin>>base;
        cout<<"ingrese la altura de la figura: "<<endl;
        cin>>altura;
    };

    double area(){
        double re;
        re = base*altura;
        return re;
    };

    void imprime(){
        cout<<"Las cordenadas de la figura son: ("<<cordx<<","<<cordy<<")"<<endl;
        cout<<"el area de la figura es: "<<area()<<endl;
    };
};

class Triangulo : public Figura{
private:
    double base;
    double altura;

public:
    void pedirDatos(){
        cout<<"ingrese la cordenada en x de la figura: "<<endl;
        cin>>cordx;
        cout<<"ingrese la cordenada en y de la figura: "<<endl;
        cin>>cordy;
        cout<<"ingrese la base de la figura: "<<endl;
        cin>>base;
        cout<<"ingrese la altura de la figura: "<<endl;
        cin>>altura;
    };

    double area(){
        double re;
        re = (base*altura)/2;
        return re;
    };

    void imprime(){
        cout<<"Las cordenadas de la figura son: ("<<cordx<<","<<cordy<<")"<<endl;
        cout<<"el area de la figura es: "<<area()<<endl;
    };
};

class Circulo : public Figura{
private:
    double radio;

public:
        void pedirDatos(){
        cout<<"ingrese la cordenada en x de la figura: "<<endl;
        cin>>cordx;
        cout<<"ingrese la cordenada en y de la figura: "<<endl;
        cin>>cordy;
        cout<<"ingrese el radio de la figura: "<<endl;
        cin>>radio;
    };

    double area(){
        double re;
        re = (3.14)*(radio*radio);
        return re;
    }
    void imprime(){
        cout<<"Las cordenadas de la figura son: ("<<cordx<<","<<cordy<<")"<<endl;
        cout<<"el area de la figura es: "<<area()<<endl;
    }
};

int main(){

    char eleccion;3

    cout<<"ingrese si quiere utilizar el objeto de cubo-triangulo-circulo (c-t-o)"<<endl;
    cin>>eleccion;

    switch (eleccion){


    }
    Cuadrado cubin;
    cubin.pedirDatos();
    cubin.area();
    cubin.imprime();

    Triangulo picudo;
    picudo.pedirDatos();
    picudo.area();
    picudo.imprime();

    Circulo gordo;
    gordo.pedirDatos();
    gordo.area();
    gordo.imprime();

return 0;
}
