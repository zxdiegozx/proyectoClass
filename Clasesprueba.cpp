#include <iostream>

using std::cout; // el programa usa cout
using std::cin; // el programa usa cin
using std::endl; // el programa usa endl
class CalculoNumeros
{
public:

    //establece valor
    void establecerDatos(int valor)
        {
            datos=valor;
            digitos=valor;
        }

    //obtiene datos
    int obtenerDatos()
        {
            return datos;
        }

    //Calcula cantidad de digitos
     int calculoDigitos()
        {

            if(datos<0)
            {
                datos=-(datos);
            }
            while(datos/10>0)
            {
                datos=datos/10;
                contador++;
            }
        }

    //obtiene digitos
    int obtenerDigitos()
    {
        calculoDigitos();
        return contador;
    }

    void mostrarResultado(int valor)
    {
        cout << "El numero tiene estos digitos: " << obtenerDigitos()
        << endl;
        cout << endl;

        //Descopone la lectura
        numDes[0]= valor%10;
        for(int x=1; x<7; x++)
        {
            pos*=10;
            numDes[x]=(valor/pos)%10;
        }

      //visualiza numero descompuesto
        if(valor<0){cout << "-"<<endl;}
        for(int xi=0; xi<contador; xi++)
        {
            cout<<xi<<": "<<numDes[xi]<<endl;
        }

    }
    private:
    int num=1,contador=1, pos=1, xi;
    int numDes[7];
    int datos, digitos;};

int main()
{
    int Numero;
    CalculoNumeros miCalculoNumeros;
    cout << "Escriba valor: ";
    cin >>Numero;
    miCalculoNumeros.establecerDatos(Numero);
    miCalculoNumeros.mostrarResultado(Numero);
    return 0;
}

