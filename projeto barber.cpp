#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
	//Entrada de dados
	int menu=0, serv=0, opcserv=0;
	char name[25], bairro[25], cel[10];
	
	cout<< ":::Bem vindo a BARBER SHOP do DG Atendimento Virtual:::\n\n";
	cout<< "Muito bom te ver aqui sangue bom, qual seu nome: 	";
	cin>> name;
	cout<< "Celula para contato:	";
	cin>> cel;
	cout<< "Para finalizar, informe seu bairro:	 ";
	cin>> bairro;
	system("cls");
    inicio:
	cout<< "\n\n:::MENU BARBER SHOP::\n\n";
	cout<< "Digite a opcao desejada " << name<< "\n\n";
	cout<< "1-SERVICOS\n\n2-SHOPCARE\n\n3-CONTATOS\n\n";
	cin>> menu;
	//processamento de dados
	
	
	
	if(menu==1){
		
		cout<< "1-CORTE SIMPLES:R$ 25.00 COMPRAR\n\n";
		cout<< "2-CORTE COM PIGMENTACAO:R$ 35.00 COMPRAR\n\n";
		cout<< "3-SOMBREADO:R$ 18.00 COMPRAR\n\n";
		cout<< "4-VOLTAR AO MENU\n\n";
		cin>> serv;
		
		if(serv==1){
			
			cout<< "Pagamento: 1-Dinheiro/Cartao 2-Pagamento presencial\n";
			cin>> opcserv;
		    
		if(opcserv==1){
		
			cout<< "Seu CORTE SIMPLES R$25.00 foi pago com sucesso!	 "<<  name;
			cout<< "  Toma aqui 5% na proxima compra.\n\n";
			
			return 0;
			
		}else(opcserv==2);{
				cout<< "Seu CORTE SIMPLES R$25.00 foi agendado com sucesso:	";
				
				return 0;
				}				
		}
		if(serv==2){
			cout<< "Pagamento: 1-Dinheiro/Cartao 2-Pagamento presencial\n";
			cin>> opcserv;
		
		if(opcserv==1){
			
			cout<< "Seu CORTE COM PIGMENTACAO R$35.00 foi pago com sucesso!	 "<<  name;
			cout<< "  Toma aqui 5% na proxima compra.";
			
			return 0;
			
		}else(opcserv==2);{
				cout<< "Seu CORTE COM PIGMENTACAO R$35.00 foi agendada com sucesso! 	";
				
				return 0;
				}				
		}
		if(serv==3){
			cout<< "Pagamento: 1-Dinheiro/Cartao 2-Pagamento presencial\n";
			cin>> opcserv;
		
		if(opcserv==1){
			
			cout<< "Seu SOMBREADO R$18.00 foi pago com sucesso!	 "<<  name;
			cout<< "  Toma aqui 5% na proxima compra.";
			
			return 0;
			
		}else(opcserv==2);{
				cout<< "Seu SOMBREADO R$18.00 foi agendado com sucesso! 	";
				
				return 0;
				}				
			}if(serv==4){
				
				goto inicio;
			}
	}if(menu==2){
		
		cout<< "SHOPCARE do ::.DG.::\n\n";
		cout<< "1-SHAMPOO MANHAIR 69.80 COMPRAR\n\n";
		cout<< "2-PO DESC TONSMASTER$ 23.00 COMPRAR\n\n";
		cout<< "3-VOLTAR AO MENU\n\n";
		cin>> serv;
		
		if(serv==1){
			cout<< "Pagamento: 1-Dinheiro/Cartao 2-Pagamento presencial\n";
			cin>> opcserv;
		
		if(opcserv==1){
			
			cout<< "Seu SHAMPOO MANHAIR 69.80 foi pago com sucesso!	 "<<  name;
			cout<< "  Toma aqui 5% na proxima compra.";
			
			return 0;
			
		}else(opcserv==2);{
				cout<< "Seu SHAMPOO MANHAIR 69.80 foi RESERVADO!	";
				
				return 0;
				}				
		}
		if(serv==2){
			cout<< "Pagamento: 1-Dinheiro/Cartao 2-Pagamento presencial\n";
			cin>> opcserv;
		
		if(opcserv==1){
			
			cout<< "Seu PO DESC TONSMASTER$ 23.00 foi pago com sucesso!	 "<<  name;
			cout<< "  Toma aqui 5% na proxima compra.";
			
			return 0;
			
		}	else(opcserv==2);{
				cout<< "Seu PO DESC TONSMASTER$ 23.00 foi RESERVADO! 	";
				
				return 0;
				}				
		}
	}	if(serv==3){
			goto inicio;
	}
	  	if(menu==3){
		
		cout<< "CONTATO:  \n\n";
		cout<< "Barber joao 21 312341-4213\n";
		cout<< "Barber maria 21 31231-3213 / mariabarber@gmail.com\n\n\n 1- VOLTAR AO MENU";
		cin>> opcserv;
			if(opcserv==1)
		system("cls");
			goto inicio;
		
		
		}
return 0;
}
