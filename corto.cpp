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
        case 2:
            cout << "Categoria de estudiantes" << endl;
            cout << "Selecciona tu compra" << endl;
            cout <<  "1. Laptop Avanzada: $1500" << endl;
            cout <<  "2. Tablet Pro: $1200" << endl;
            cout <<  "3. Estación de Trabajo: $2000" << endl;
            cin >> compra;
            if (compra = 1)
            {
                if (dinero >= 1350)
                {
                total = (dinero - 1350);
                cout << "Has adquirido un descuento del 20% por ser estudiante" << endl;
                cout << "laptop Laptop Avanzada" << endl;
                cout << "Tu cambio es: " << total << endl; 
                } else
                {
                    cout << "Tu saldo es insufuciente para poder adquirir una Laptop Avanzada" << endl;
                }
            }else if (compra = 2 )
            {
                if (dinero >= 1080)
                {
                total = (dinero - 1080);
                cout << "Has adquirido un descuento del 20% por ser estudiante" << endl;
                cout << "Tablet Pro comprada" << endl;
                cout << "Tu cambio es: "<< total << endl; 
                } else
                {
                    cout << "Tu saldo es insufuciente para poder adquirir una Tablet Pro" << endl;
                }
            }else if (compra = 3)
            {
                if (dinero >= 1800)
                {
                total = (dinero - 720);
                cout << "Has adquirido un descuento del 20% por ser estudiante" << endl;
                cout << "Estación de Trabajo comprada" << endl;
                cout << "Tu cambio es: " << total << endl; 
                } else
                {
                    cout << "Tu saldo es insufuciente para poder adquirir una Estación de Trabajo" << endl;
                }
            }
        break;
        case 3:
            cout << "Categoria de estudiantes" << endl;
            cout << "Selecciona tu compra" << endl;
            cout <<  "1. Laptop Básica: $900" << endl;
            cout <<  "2. Tablet Estudiantil: $600" << endl;
            cout <<  "3. Chromebook: $700" << endl;
            cout <<  "4. Laptop Avanzada: $1500" << endl;
            cout <<  "5. Tablet Pro: $1200" << endl;
            cout <<  "6. Estación de Trabajo: $2000" << endl;
            cin >> compra;
            if (compra = 1)
            {
                if (dinero >= 900)
                {
                total = (dinero - 900);
                cout << "Has adquirido un descuento del 20% por ser estudiante" << endl;
                cout << "laptop Basica comprada" << endl;
                cout << "Tu cambio es: " << total << endl; 
                } else
                {
                    cout << "Tu saldo es insufuciente para poder adquirir una laptop basica" << endl;
                }
            }else if (compra = 2 )
            {
                if (dinero >= 600)
                {
                total = (dinero - 600);
                cout << "Has adquirido un descuento del 20% por ser estudiante" << endl;
                cout << "Tablet Estudiantil comprada" << endl;
                cout << "Tu cambio es: "<< total << endl; 
                } else
                {
                    cout << "Tu saldo es insufuciente para poder adquirir una Tablet Estudiantil" << endl;
                }
            }else if (compra = 3)
            {
                if (dinero >= 700)
                {
                total = (dinero - 700);
                cout << "Has adquirido un descuento del 20% por ser estudiante" << endl;
                cout << "Chromebook comprada" << endl;
                cout << "Tu cambio es: " << total << endl; 
                } else
                {
                    cout << "Tu saldo es insufuciente para poder adquirir una Chromebook" << endl;
                }
            } else if (compra = 4)
            {
                if (dinero >= 1500)
                {
                total = (dinero - 1500);
                cout << "Has adquirido un descuento del 20% por ser estudiante" << endl;
                cout << "laptop Laptop Avanzada" << endl;
                cout << "Tu cambio es: " << total << endl; 
                } else
                {
                    cout << "Tu saldo es insufuciente para poder adquirir una Laptop Avanzada" << endl;
                }
            }else if (compra = 5 )
            {
                if (dinero >= 1200)
                {
                total = (dinero - 1200);
                cout << "Has adquirido un descuento del 20% por ser estudiante" << endl;
                cout << "Tablet Pro comprada" << endl;
                cout << "Tu cambio es: "<< total << endl; 
                } else
                {
                    cout << "Tu saldo es insufuciente para poder adquirir una Tablet Pro" << endl;
                }
            }else if (compra = 6)
            {
                if (dinero >= 2000)
                {
                total = (dinero - 2000);
                cout << "Has adquirido un descuento del 20% por ser estudiante" << endl;
                cout << "Estación de Trabajo comprada" << endl;
                cout << "Tu cambio es: " << total << endl; 
                } else
                {
                    cout << "Tu saldo es insufuciente para poder adquirir una Estación de Trabajo" << endl;
                }
            }
        break;
        
        default:
            break;
        }
    }else {
        cout << "Eres menor para poder poder realizar la compra" << endl;
    }
    
    return 0;
}