#include <iostream>

using std::cout; // el programa usa cout
using std::cin; // el programa usa cin
using std::endl; // el programa usa endl
class CalculoNumeros
{
public:
    void procesoDisplay(int valor)
    {
    num=valor;
    if(valor<0)
    {   negativo=valor;
        valor=-(valor);
    }

     //Calcular cantidad digitos
    if(num<0){num=-(num);}
    while(num/10>0)
    {
        num=num/10;
        contador++;
    }

    //Descopone la lectura
    numDes[0]= valor%10;
    for(int x=1; x<7; x++)
    {
        pos*=10;
        numDes[x]=(valor/pos)%10;
    }

    if(negativo>0)
     { cout << "El numero a descomponer es: " << valor <<endl;
     }else{ cout << "El numero a descomponer es: -" << valor <<endl;
     }
     cout << "El numero tiene estos digitos: " << contador << endl;
      cout << endl;

      //visualiza numero descompuesto
      if(negativo<0){cout << "-"<<endl;}
        for(int xi=0; xi<contador; xi++)
        {
            cout<<xi<<": "<<numDes[xi]<<endl;
        }
    }
    private:
    int num=1,contador=1, pos=1, xi;
    int numDes[7];
    int negativo;
};

int main()
{
    int Numero;
    CalculoNumeros miCalculoNumeros;
    cout << "Escriba valor: ";
    cin >>Numero;
    miCalculoNumeros.procesoDisplay(Numero);
    return 0;
}

