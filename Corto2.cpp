#include <iostream>
using namespace std;
int main(){
    int edad, num1, num2, saldo = 1000, vuelto;

    cout << "Ingresar edad: ";
    cin >> edad;

    if(edad >= 16){
        cout << "Seleccione el numero de tu categoria: \n";
        cout << "1. Estudiante.\n";
        cout << "2. Profesional.\n";
        cout << "3. Ver todos.\n";
        cin >> num1;

        switch(num1){
            case 1: 
              cout << "Dispositivos disponibles de estudiante con descuento del 20%:\n";
              cout << "1. Laptop basica: $900.\n";
              cout << "2. Tablet estudiantil: $600.\n";
              cout << "3. Chromebook: $700.\n";
              break;
            
            case 2:
              cout << "Dispositivos disponibles con descuento del 10%:\n";
              cout << "4. Laptop avanzada: $1500.\n";
              cout << "5. Tablet pro: $1200.\n";
              cout << "6. Estación de trabajo: $2000.\n";
              break;

            case 3:
              cout << "Dispositivos disponibles de estudiante con descuento del 20%:\n";
              cout << "1. Laptop basica: $900.\n";
              cout << "2. Tablet estudiantil: $600.\n";
              cout << "3. Chromebook: $700.\n" << endl;
              cout << "Dispositivos disponibles de profesional con descuento del 10%:\n";
              cout << "4. Laptop avanzada: $1500.\n";
              cout << "5. Tablet pro: $1200.\n";
              cout << "6. Estación de trabajo.\n";
              break;
            
            default:
              cout << "Ingreso un numero no valido";
              break;
        }
        
        cout << "Ingrese el dispositivo que desea comprar: ";
        cin >> num2;
        cout << "Saldo disponible: 1000" << endl;
        switch(num2){
            case 1:
            vuelto = saldo - 900;
            break;
            case 2:
            vuelto = saldo - 600;
            break;
            case 3:
            vuelto = saldo - 700;
            break;
            default:
               cout << "Ingrese un numero valido";
        }
        cout << "Compra exitosa.\n";
        cout << "Tu saldo restamte es: "<< vuelto;

        
//dasdsa
    }
    else {
        cout << "No tienes edad suficiente.";
    }
    return 0;
}
