#include <iostream>
#include <iomanip>
using namespace std;

void imprimir(float *puntero,int numero);

int main(){
    float *puntero=0;
    int numero=0;
    cout<<"El numero de notas a registrar";
    cin>>numero;
    float *array=new float[numero];
    cout<<"Ingrese notas: ";
    cout<<endl;
    for (int i = 0; i <numero ; ++i) {
        cin>>array[i];
    }
    puntero=array;
    imprimir(puntero,numero);
    delete[]array;
    return 0;
     }
     void imprimir(float* puntero,int numero){
    float suma=0;
    float promedio=0;
         for (int i = 0; i <numero ; ++i) {
             suma=suma+puntero[i];
             promedio=suma/numero;
             cout<<"El promedio es: "<<promedio;
         }

}





