#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
     * Escriba un programa que reciba una cadena de texto y que muestre en pantalla cual es la palabra más común en el texto
     * Ejemplo 1: "todos los numeros que son pares son divisibles entre dos" ---> "son" es la palabra más repetida
     * Ejemplo 2: "ayer no trabajé porque ayer era día del trabajo no importa ayer era lunes" ---> "ayer" es la palabra más repetida
     * Consejo: El docente solo va a probar textos en minisculas y que solo tengan letras y espacios
     */
    cout << "Challenge #3" << endl;
    string texto="";
    cout << "Ingrese un texto cualquiera:" << endl;
    getline(cin, texto);
    cout << texto;
    // Comience a programar desde aquí
    for (int i=0;i<texto.length();i++){
        cout << texto[i]<<endl;
        if (texto[i]==texto){
            cout << texto[i] << "fue el que mas se repitio"
            // quise que cuando la cadena se repita para eso pero no me comparaba los textos asi que talvez no funcione y tenga que borrar el if  
                    }



    }
    return 0;
}
