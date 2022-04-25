#include "Proveedor.h"
#include <iostream>
#include <string>
using namespace  std;
int main() {
    int opc;
    string proveedor, nit, direccion, telefono;
    //Proveedor p = Proveedor();
    //p.leer();
    while (1) {
        cout << "Escoga el ejercicio que desee: " << endl;
        cout << "1.Ingreso: " << endl;
        cout << "2.Leer: " << endl;
        cout << "3.Actualizar: " << endl;
        cout << "4.Eliminar: " << endl;
        cin >> opc;

        switch (opc) {
        case 1:
            cout << "Ingrese proveedor:";
            getline(cin, proveedor);
            cout << "Ingrese nit:";
            getline(cin, nit);
            cout << "Ingrese direccion:";
            getline(cin, direccion);
            cout << "Ingrese telefono:";
            getline(cin, telefono);
            Proveedor p = Proveedor(proveedor, nit, direccion, telefono);
            p.crear();
            system("pause");
            break;
        case 2:
            cout << "Lectura de proveedor:";
            cout << "Ingrese nit:";
            getline(cin, nit);
            cout << "Ingrese direccion:";
            getline(cin, direccion);
            cout << "Ingrese telefono:";
            getline(cin, telefono);
            Proveedor p = Proveedor(proveedor, nit, direccion, telefono);
            p.leer();
            system("pause");
            break;
        case 3:
            cout << "Actualizacion de proveedor:";
            getline(cin, proveedor);
            cout << "Ingrese nit:";
            getline(cin, nit);
            cout << "Ingrese direccion:";
            getline(cin, direccion);
            cout << "Ingrese telefono:";
            getline(cin, telefono);
            Proveedor p = (proveedor, nit, direccion, telefono);
            p.actualizar();
            system("pause");
            break;
        case 4:
            cout << "Eliminar proveedor:";
            getline(cin, proveedor);
            cout << "Ingrese nit:";
            getline(cin, nit);
            cout << "Ingrese direccion:";
            getline(cin, direccion);
            cout << "Ingrese telefono:";
            getline(cin, telefono);
            Proveedor p = Proveedor(proveedor, nit, direccion, telefono);
            p.eliminar();
            system("pause");
            break;

        }
    }
    return 0;
}

