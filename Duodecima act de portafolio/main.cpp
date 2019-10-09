#include <iostream>
#include <vector>
using namespace std;

struct TOrden{
    int FrijolConQueso;
    int Queso;
    int Revueltas;
    string arroz;
    string maiz;
    string harina = " ";
};
typedef struct TOrden Pupusas;

Pupusas CantidadPupusas(){
    Pupusas p;
    cout<<"Ingrese la harina que desea: "<<endl; cin>>p.harina;
    cout<<"Cuantas pupusas desea de frijol con queso? : "<<endl; cin>>p.FrijolConQueso;
    cout<<"Cuantas pupusas desea de Queso? : "<<endl; cin>>p.Queso;
    cout<<"Cuantas pupusas desea revueltas? : "<<endl; cin>>p.Revueltas;
    cout<<endl;
    return p;
}

void mostrarOrden(Pupusas p){
    cout <<"Su orden es: "<<endl;
    cout<<"Pupusas de harina: "<<p.harina<<endl;
    cout<<"Pupusas de frijol con queso: "<<p.FrijolConQueso<<endl;
    cout<<"Pupusas de queso: "<<p.Queso<<endl;
    cout<<"Pupusas revueltas: "<<p.Revueltas<<endl;
    cout<<endl;

}

vector<Pupusas> lista;

void agregarOrden(){
    Pupusas p = CantidadPupusas();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "1)Al principio\n"
                "2) Al final\n"
            << "\nOpcion elegida: "<<endl;
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarOrdenes() {
    for (int i = 0; i < lista.size(); i++) 
        mostrarOrden(lista[i]);
}

int main(){
    cout << "Inicializando..." << endl;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Orden\n\t2) Ver las ordenes"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarOrden();
            break;
            case 2: cout << "Ordenando..." << endl;
                mostrarOrdenes();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
    

    return 0;
}