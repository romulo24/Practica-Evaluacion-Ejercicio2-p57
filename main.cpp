#include <iostream>
#define valorBN 0.06
#define valorColor 0.12
using namespace std;

int main()
{
    int contadorI,contadorF,contador;
    int opc;
    float precio;

    cout << " - - - - Grupo Tech - - - - " << endl;
    cout<<endl;
    cout<<endl;
    cout<<"Contador Inicial: "; cin>>contadorI;
    cout<<endl;
    do{
        cout<<"Contador Final: "; cin>>contadorF;
        if(contadorI<contadorF){
            do{
                cout<<endl;
                cout<<"Impresora (1. B/N, 2. Color):";
                cin>>opc;
                if(opc>0 && opc<=2)
                    switch (opc) {
                    case 1:
                        contador=contadorF-contadorI;
                        precio=contador*valorBN;
                        break;
                    case 2:

                        contador=contadorF-contadorI;
                        precio=contador*valorColor;
                        break;

                    }
            }
            while (opc<=0 || opc>2);
            cout<<endl;
            cout<<"Impresiones:"<<contador<<endl;
            cout<<endl;
            cout<<"Costo: $"<<precio<<endl;
            cout<<endl;
            cout<<endl;
            break;

        }
        cout<<endl;
        cout<<"Error: El contador final es menor que el inicial"<<endl;
        cout<<endl;
    }

    while (contadorI>contadorF);

    return 0;
}
