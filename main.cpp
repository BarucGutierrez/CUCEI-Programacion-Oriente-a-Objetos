#include <iostream>

using namespace std;

class Mensaje{

//atrivuto
private:
    string texto;

//metodos
public:
    void imprimir();   //prototipo de metodo
    Mensaje();         //prototipo de constructor
    ~Mensaje();        //prototipo de destructor

};

void Mensaje::imprimir(){
    texto="Mi Mensaje";
    cout<<texto;
}

Mensaje::Mensaje(){
    texto=" ";
};

Mensaje::~Mensaje(){
};

int main()
{
    Mensaje msj1;
    msj1.imprimir();
    return 0;
}
