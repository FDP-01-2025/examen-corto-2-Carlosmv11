#include <iostream> 

using  namespace std;

int main() {
int dinero = 1000, edad, categoria, compra, total;
    cout << "---- Compra de dispositivos ----" << endl;
    cout << "ingresa tu edad: ";
    cin >> edad;

    if (edad >= 16)
    {
        cout << "Selecciona una categoria para poder continuar:" << endl;
        cout <<  "1. Estudiante" << endl;
        cout <<  "2. Profesional" << endl;
        cout <<  "3. Ver todos" << endl;
        cin >> categoria;

        switch (categoria)
        {
        case 1:
            cout << "Categoria de estudiantes" << endl;
            cout << "Selecciona tu compra" << endl;
            cout <<  "1. Laptop Básica: $900" << endl;
            cout <<  "2. Tablet Estudiantil: $600" << endl;
            cout <<  "3. Chromebook: $700" << endl;
            cin >> compra;
            if (compra = 1)
            {
                if (dinero >= 720)
                {
                total = (dinero - 720);
                cout << "Has adquirido un descuento del 20% por ser estudiante" << endl;
                cout << "laptop Basica comprada" << endl;
                cout << "Tu cambio es: " << total << endl; 
                } else
                {
                    cout << "Tu saldo es insufuciente para poder adquirir una laptop basica" << endl;
                }
            }else if (compra = 2 )
            {
                if (dinero >= 480)
                {
                total = (dinero - 480);
                cout << "Has adquirido un descuento del 20% por ser estudiante" << endl;
                cout << "Tablet Estudiantil comprada" << endl;
                cout << "Tu cambio es: "<< total << endl; 
                } else
                {
                    cout << "Tu saldo es insufuciente para poder adquirir una Tablet Estudiantil" << endl;
                }
            }else if (compra = 3)
            {
                if (dinero >= 720)
                {
                total = (dinero - 720);
                cout << "Has adquirido un descuento del 20% por ser estudiante" << endl;
                cout << "Chromebook comprada" << endl;
                cout << "Tu cambio es: " << total << endl; 
                } else
                {
                    cout << "Tu saldo es insufuciente para poder adquirir una Chromebook" << endl;
                }
            }
        break;
        
        default:
            break;
        }
    }
    
    return 0;
}