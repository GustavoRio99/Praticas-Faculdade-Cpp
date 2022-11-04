#include <iostream>

using namespace std;

int main()
{
	
		int vel=0;

		cout<< "RADAR INICIADO"<< "\n\n" << "Aguardando DADOS do EQUIPAMENTO...\n";
		
			
		while (vel!=-1){
		
		cin>> vel;
		
		if(vel>=60){
			
			cout<< "MULTADO POR EXCESSO DE VELOCIDADE!!! \n\n";
			
			
		
		}else {
			
			cout<< "Dentro da velocidade permitida\n\n";
		}
	
}



}
