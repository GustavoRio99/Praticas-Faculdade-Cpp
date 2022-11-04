#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
float valdolar, valeuro, valquantia, resultado;
int tipo;

    cout<<"digite Tipo de moeda 1 Dolar/2 Euro:  ";
    cin>> tipo;
	
	if(tipo==1){
		
		cout<< "Cotacao do Dolar:  ";
		cin>> valdolar;
		cout<< "Sua quantidade a ser trocada em reais:  " ;
		cin>> valquantia;
		resultado=valquantia/valdolar;
		cout<< "Sua quantia em Dolares:  "<< resultado;
		
		return 0;
		
		
		}else(tipo==2);{
			
        cout<< "Cotacao do Euro:  ";
		cin>> valeuro;
		cout<< "Sua quantidade a ser trocada em reais:  " ;
		cin>> valquantia;
		resultado=valquantia/valeuro;
		cout<< "Sua quantia em Euro:  "<< resultado;
		}
		
	}
	
