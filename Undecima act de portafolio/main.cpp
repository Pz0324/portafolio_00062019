 #include<string.h>
#include<iostream>
#include<stdlib.h>

using namespace std;



struct empleado{
int ident;
char ap[20], nom[20],cargo[20];
int sueldo;
struct empleado *avanc;

};



empleado* insertar_nodo_inicial(void);
void insertar_nodos_circular(empleado *&,int c);

int progenc(empleado *);

void empleadosmayora(empleado *);

void sumanomina(empleado *);

char opciones(empleado *);

void ordenar(empleado*);

void imprime_lista_circ(empleado*);

void eliminar_nodo_circ(empleado *&cab,int i);

char opciones(empleado * cab)



{

char a;

cout<<"1.Crear nodo inicial"<<endl;

cout<<"2.Insertar nuevo dato\n";

cout<<"3.Programadores en c++\n";

cout<<"4.Sueldo mayor a $2'500.000\n";

cout<<"5.Motrar suma de sueldos empleados\n";

cout<<"6.imprimir lista\n";

cout<<"7.borrar nodo\n";

cout<<"8.salir\n";                    

cout<<"INGRESE OPCION: ";

cin>>a;

return a;

}



int main()

{

int i,c;

char opcion;

empleado *cab=NULL;

  while(opcion!='8')

    {

    opcion=opciones(cab);

    switch(opcion)

    {

    case '1':cab=insertar_nodo_inicial();

             break;

    case '2':cout<<"inserte identificacion: ";

                  cin>>c;

                insertar_nodos_circular(*&cab,c);

             break;

    case '3':cout<<"en la empresa hay "<<progenc(cab)<<" programador(es) de  c++";

             break;

    case '4':empleadosmayora(cab);

                 break;

    case '5':sumanomina(cab);

                 break;

    case '6':imprime_lista_circ(cab); 

                 break;

    case '7':cout<<"inserte identificacion: ";

                  cin>>i;

             eliminar_nodo_circ(*&cab, i);

                 break;

    case '8':exit(0);

                break;

    default:cout<<"fuera de parametro";

    }

    }

}



//crearnodo

empleado* insertar_nodo_inicial()

{

empleado *crear;

crear=new empleado;

cout<<"IDENTIFICACION: ";

cin>>crear->ident;

cout<<"APELLIDO: ";

cin>>crear->ap;

cout<<"NOMBRE: ";

cin>>crear->nom;

cout<<"CARGO: ";

cin>>crear->cargo;;

cout<<"SUELDO: ";

cin>>crear->sueldo;

crear->avanc=crear;

return crear;

}



//insertar nodo

void insertar_nodos_circular(empleado *&cab,int c)

{

empleado *aux;

empleado *r;

if(cab!=NULL)

{

    r=cab;

        aux=new empleado;

        while(r->ident!=c && r->avanc!=cab)

        r=r->avanc;

        if(r==cab)

        {

                 cout<<"IDENTIFICACION: ";

                 cin>>aux->ident;

             cout<<"APELLIDO: ";

                 cin>>aux->ap;

             cout<<"NOMBRE: ";

                 cin>>aux->nom;

             cout<<"CARGO: ";

                 cin>>aux->cargo;

             cout<<"SUELDO: ";

                 cin>>aux->sueldo;

                 aux->avanc=r->avanc;

                 r->avanc=aux;

                 r=aux;

        }

        else

        {

                aux->avanc=r->avanc;

                r->avanc=aux;

                cout<<"IDENTIFICACION: ";

                cin>>aux->ident;

            cout<<"APELLIDO: ";

                cin>>aux->ap;

            cout<<"NOMBRE: ";

                cin>>aux->nom;

            cout<<"CARGO: ";

                cin>>aux->cargo;

            cout<<"SUELDO: ";

                cin>>aux->sueldo;

        }

}

else

cout<<"no hay nodo inicial de lista por favor digite 1";

}



//prog en c++

int progenc(empleado*cab)

{

empleado *q;

int cant=0;

q=cab;

if(cab)

{

        if(strcmp(q->cargo,"programadores_en_c++")==0)

        cout<<"n";

        cant=cant+1;

        while(q->avanc!=cab)

        {

        if(strcmp(q->cargo,"programadores_en_c++")==0)

        cout<<"n";

        cant=cant+1;

        q=q->avanc;

        }

}

else

cout<<"no existe lista";

return cant;


}



//SUELDO

void empleadosmayora(empleado *cab)

{ 

empleado *p;

p=cab;

if(cab)

   {

if(cab->sueldo>2500000)

        {

        cout<<"IDENTIFICACION: "<<cab->ident;

        cout<<"n";

    cout<<"APELLIDO: "<<cab->ap;

        cout<<"n";

    cout<<"NOMBRE: "<<cab->nom;

    cout<<"n";

        cout<<"CARGO: "<<cab->cargo;

    cout<<"n";

        cout<<"SUELDO: "<<cab->sueldo;

    cout<<"n";

        }

        p=cab->avanc;

    while(p!=cab){

        if(p->sueldo>2500000 && p!=cab)

                {

                cout<<"n";

                cout<<"IDENTIFICACION: "<<p->ident;

                cout<<"n";

                cout<<"APELLIDO: "<<p->ap;

                cout<<"n";

                cout<<"NOMBRE: "<<p->nom;

                cout<<"n";

                cout<<"CARGO: "<<p->cargo;

                cout<<"n";

                cout<<"SUELDO: "<<p->sueldo;

                cout<<"n";

                }

        p=p->avanc;}

        }

else   

cout<<"no existe lista";


}



//SUMANOMINA

void sumanomina(empleado *cab)

{

empleado *q;

int sumnomina=0;

q=cab->avanc;

if(cab)

        {

        sumnomina=cab->sueldo+sumnomina;

        }

while(q!=cab)

        {

                sumnomina=cab->sueldo+sumnomina;

                q=q->avanc;

        }

cout<<"El total de la nomina es "<<sumnomina;


}



void imprime_lista_circ(empleado*cab)

{

empleado *q;

if(cab==NULL)

cout<<"no hay lista";

else

        if(cab->avanc==cab)

        {

                 cout<<"n";

                 cout<<"n";

                 cout<<"cedula:"<<cab->ident;

                 cout<<"n";

             cout<<"apellido:"<<cab->ap;

                 cout<<"n";

             cout<<"nombre:"<<cab->nom;

                 cout<<"n";

             cout<<"cargo:"<<cab->cargo;

                 cout<<"n";

             cout<<"sueldo:"<<cab->sueldo;

                 cout<<"n";

                 cout<<"n";

        }

        else

        {

                        q=cab;

                        cout<<"n";

                        cout<<"n";

                        cout<<"cedula:"<<cab->ident;

                        cout<<"n";

                        cout<<"apellido:"<<cab->ap;

                        cout<<"n";

                        cout<<"nombre:"<<cab->nom;

                        cout<<"n";

                        cout<<"cargo:"<<cab->cargo;

                        cout<<"n";

                        cout<<"sueldo:"<<cab->sueldo;

                        cout<<"n";

                        cout<<"n";

                        q=cab->avanc;

                        do{

                        cout<<"cedula:"<<q->ident;

                        cout<<"n";

                        cout<<"apellido:"<<q->ap;

                        cout<<"n";

                        cout<<"nombre:"<<q->nom;

                        cout<<"n";

                        cout<<"cargo:"<<q->cargo;

                        cout<<"n";

                        cout<<"sueldo:"<<q->sueldo;

                        cout<<"n";

                        cout<<"n";

                        q=q->avanc;

                        }

                        while(q!=cab);

        }


}





//ELIMINAR NODO

void eliminar_nodo_circ(empleado *&cab, int i)

{

empleado *q,*r;

q=r=cab;

if(cab==NULL)

cout<<"no hay cabeza";

else

        if(cab->avanc==cab && cab->ident==i)

        {

        delete(q);

        }

        else

                while((q->ident!=i) && (q->avanc!=cab))

                {

                        q=q->avanc;

                }

                if(cab->avanc==q)

                {

                        cab->avanc=q->avanc;

                        delete(q);

                }

                else

                {

                        while(r->avanc!=q)

                        {

                                r=r->avanc;

                        }

                r->avanc=q->avanc;

        delete(q);

        }

}