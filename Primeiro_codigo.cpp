#include <iostream>

using namespace std;

int main(){
	//variaveis
	float nota1, nota2, nota3, nota4, resul;
	//Entrada de Dados
	cout<<"Digite 4 notas escolares:  ";
	cin>> nota1;
	cin>> nota2;
	cin>> nota3;
	cin>> nota4;
	//processamento de dados
	
	resul=(nota1+nota2+nota3+nota4)/4;
    
	//Saida de Dados

	if(resul>=6){
		
		cout<<"APROVADO	    "<< resul;
		
		}else if(resul>=4){
			
			cout<<"Recuperacao	"<< resul;
		}else{
			
			cout<< "Reprovado  "<< resul;
		}
}
