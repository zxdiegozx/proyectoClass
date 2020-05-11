#include <iostream>
#include <ctime>

using std::cout; // el programa usa cout
using std::cin; // el programa usa cin
using std::endl; // el programa usa endl
class CalculoNumeros
{
public:

    void procesoDisplay(int valor)
    {unsigned t0, t1;
    t0=clock();
    num=valor;
    if(valor<0)
    {   negativo=valor;
        valor=-(valor);
    }

    if(num<0){num=-(num);}
    while(num/10>0)
    {
        num=num/10;
        contador++;
    }
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

    switch(contador)
    {
        case 1:
                    if(negativo<0){cout << "-";}
                    cout << "  " << numDes[0];
                    cout << endl;
                     break;
        case 2:
                    if(negativo<0){cout << "-";}
                    cout << "  " << numDes[1];
                    cout << "  " << numDes[0];
                    cout << endl;
                     break;

        case 3:
                    if(negativo<0){cout << "-";}
                   cout << "  " << numDes[2];
                   cout << "  " << numDes[1];
                   cout << "  " << numDes[0];
                    cout << endl;
                     break;

        case 4:
                    if(negativo<0){cout << "-";}
                   cout << "  " << numDes[3];
                   cout << "  " << numDes[2];
                   cout << "  " << numDes[1];
                   cout << "  " << numDes[0];
                    cout << endl;
                     break;

        case 5:
                    if(negativo<0){cout << "-";}
                    cout << "  " << numDes[4];
                    cout << "  " << numDes[3];
                    cout << "  " << numDes[2];
                    cout << "  " << numDes[1];
                    cout << "  " << numDes[0];
                    cout << endl;
                     break;

        case 6:
                    if(negativo<0){cout << "-";}
                   cout << "  " << numDes[5];
                   cout << "  " << numDes[4];
                   cout << "  " << numDes[3];
                   cout << "  " << numDes[2];
                   cout << "  " << numDes[1];
                   cout << "  " << numDes[0];
                    cout << endl;
                     break;

        case 7:
                    if(negativo<0){cout << "-";}
                    for(xi=6;xi==0;xi--)
                    {
                        cout << "  " << numDes[xi];
                        cout << endl;
                    }break;
        default:
            break;

    }          t1 = clock();
long double time = (double(t1-t0)/CLOCKS_PER_SEC);
cout << "Execution Time code: " << time << endl;
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
