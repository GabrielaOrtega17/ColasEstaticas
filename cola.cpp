#include "cola.hpp"
Estudiante::Estudiante(){}

Estudiante::Estudiante(std::string n, int m, float p, std::string c: nombre(n), materias(m), promedio(p), carrera(c) {}

void Estudiante::operator=(Estudiante& x){
    nombre=x.nombre;
    materias=x.materias;
    promedio=x.promedio;
    carrera=x.carrera;
}

std::ostream& operator<<( std::ostream& o, Estudiante& p){
    g << " Nombre: " << o.nombre << endl;
    g << " Materias aprobadas: " << o.materias << endl;
    g << " Promedio: " << o.promedio << endl;
    g << " Carrera: " << o.carrera << endl;
    return g;
}
std::istream& operator>>( std::istream& o, Estudiante& p){
    cout << endl << endl;
    cout <<" Nombre: ";
    g>>o.nombre;
    cout << " Materias aprobadas: ";
    g>>o.materias;
    cout << " Promedio: ";
    g>>o.promedio;
    cout << " Carrera: ";
    g>>o.carrera;
    cout << endl << endl;
    return g;
}
///******************************************************************

bool Cola::vacia()const{
    if(ult==-1)
        return true;
    return false;
}
bool Cola::llena()const{
    if(ult==TAM-1)
        return true;
    return false;
}

int Cola::ultimo()const{
    return ult;
}

std::ostream& operator<<(std::ostream & o, Cola& L){
    int i=0;
    std::cout<<"\n";
    while(i<=L.ultimo()){
        ;
        o<<L.datos[i];
        i++;
    }
    return o;
}

void Cola::enqueue(Estudiante& elem){
    inserta(elem,0);
}
Estudiante& Cola::dequeue(){
    ult--;
    return datos[ult+1];
}
bool Cola::elimina(int pos){
    if(vacia() || pos<0 || pos>ult){
        std::cout<<"\n Error de eliminacion";
        return true;
    }
    int i=pos;
    while(i<ult){
        datos[i]=datos[i+1];
        i++;
    }
    ult--;
    return false;
}
int Cola::inserta(Estudiante& elem, int pos){
    if(llena()|| pos<0 || pos>ult+1){
        std::cout<<"\n Error de insercion";
        return 0;
    }
    int i=ult+1;
    while(i>pos){
        datos[i]=datos[i-1];
        i--;
    }
    datos[pos]=elem;
    ult++;
    return 1;
}
