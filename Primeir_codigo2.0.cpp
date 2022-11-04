#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	int mat=0 ,n1=0, n2=0, n3=0, opc, resul=0, ret=1;
    char nome[30];
	
	while(ret!=0){
	
	inicio:
	
	cout<< "Qual seu nome:	";
	cin>> nome;
	cout<< "Insira seu numero de matricula:	 ";
	cin>> mat;
	cout<< "Seja bem vindo(a):"<< nome<< "\n";
	cout<< "Matricula:"<< mat<< "\n";
	
		cout<< "Calcular media [1]"<< "\n";
		cout<< "Voltar ao inicio [2]"<< "\n";
		cin>> opc;
		
			
			    switch(opc)
			
					case 1:
					{
					cout<< "insira suas notas: "<< "\n"<< "nota do primeiro bimestre: "<<"\n";
					cin>> n1;
					cout<< "nota do segundo bimestre: "<< "\n";
					cin>> n2;
					cout<< "nota do terceiro bimestre: "<< "\n";
					cin>> n3;
				
					resul=(n1+n2+n3)/3;
				
					if (resul < 5){
			
						
						cout<< "Reprovado\n";
						
					}else{
					
						cout<< "Aprovado\n";
				}
					
					cout<< "Media:	" <<resul<< "\n";
					
								
					cout<< "Deseja fechar o programa [0]"<< "\n";
					cout<< "Deseja continuar [1]"<< "\n";
					cin>> ret;
					
				    break;
				    
				    case 2:
				    	
				    	goto inicio;
			
				
				   }
				
							
							
							
						
				
		            }
			
return 0;
				}
	
		
