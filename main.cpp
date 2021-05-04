#include <iostream>
#include <string>
using namespace std;

int main()
{
    string texto;
   cout << "ingrese una frase  "<<endl;
   getline(cin,texto)
   for (int i=0;i<texto.length();i++){
        texto[i]=texto[i]+3;
       if (texto[i]=='#'){
        texto[i]=texto[i]-3;
       }
        cout << texto [i];
    }