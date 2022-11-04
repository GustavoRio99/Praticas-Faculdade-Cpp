#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
	int ocorrencia=0, inicio=0, back2=-1, back11=-1, back3=-1, menu, menu1;
	char nome1[30], end1[30], numero1[30], cid1[30], uf1[10], delegado[30], obj[34], causa[30], nome2[30], end2[30], numero2[30], cid2[30], uf2[10], agt[30], data[30], arma[30], viole[30];	
	inicio:
	
	system("cls");
	cout<< "REGISTRO DE OCORRENCIA POLICIAL SIMPLIFICADO\n\n";
	cout<<"Nome (representante):	\n";
	cin>> nome1;
	cout<<"Endereco Rua: \n";
	cin>> end1;
	cout<<"Numero: \n";
	cin>> numero1;
	cout<< "Cidade: \n";
	cin>> cid1;
	cout<<"UF: \n";
	cin>> uf1;
	cout<<"Nome (envolvido):  \n" ;
	cin>> nome2;
	cout<<"Endereco Rua: \n" ;
	cin>> end2;
	cout<<"Numero: \n";
	cin>> numero2;
	cout<< "Cidade: \n";
	cin>> cid2;
	cout<<"UF: \n";
	cin>> uf2;
    cout<<"Dr. Delegado: \n";
    cin>> delegado;
    cout<<"Agente responsavel Ocorrencia:  \n";
    cin>> agt;
	menu:
	system("cls");
    	while(back11!=4)
		{
			cout<< "Qual tipo de ocorrencia:\n\n\n	[1]TERMO CIRCUNSTANCIADO	[2]REGISTRO CRIMINAL	[3]REGISTRO OCORRENCIAS";
    		cin>> ocorrencia;
			switch(ocorrencia)
			{
		       
		 		case 1:
				cout<< "\n\n\nTERMO CIRCUNSTANCIADO DE OCORRENCIA\n\n";
				cout<< nome1 << " se fez presente na delegacia XPTO, residente na Rua "<< end1<<" numero: "<< numero1<< " Cidade: "<< cid1<< " do estado: "<< uf1<< "\n\n";
				cout<< "Com finalidade de elaboracao do (TCO) contra "<< nome2<< " residente da rua: "<< end2 << " numero: "<<numero2<< " Cidade: "<< cid2<< " Estado: "<< uf2<< ".\n\n foi conduzido pelo agente: "<< agt<< "\n\n";
				cout<< "O Dr.Delegado: "<< delegado<< " LIBEROU AS PARTES\n\n\n";
				cout<< "\nVOLTAR AO INICIO[0]     Mudar TERMO/REGISTRO[1]     SAIR[2]  ";
		
				while(back11!=2)
				{
					cin>> back11;
						if(back11==0)
						{
							goto inicio;
							system("cls");
						}
							if(back11==1)
			   				{
								goto menu;
								system("cls");										
			   				}   
								if(back11==2)
								{
									return 0;
								}    	
									else if(back11!=0 xor 1 xor 2 )
									{
										cout<< "OPCAO INVALIDA\n\n"; 
									}
			
				}
				break;
		
				case 2:
					cout<< "\n\n\nREGISTRO CRIMINAL\n\n\n";
					cout<< "Qual objeto foi furtado/roubado: ";
					cin>> obj;
					cout<< "Arma do crime: ";
					cin>> arma;
					cout<< "Violencia grave/moderada/leve: ";
					cin>> viole;
					cout<< "Data: ";
					cin>> data;
					cout<< "\n\n\nREGISTRO CRIMINAL\n\n\n";
					cout<< nome1<<" Deseja REPRESENTAR contra "<< nome2<< " residente: "<< end2 << " numero: "<<numero2<< " Cidade: "<< cid2<< " Estado: "<< uf2<< ".\n\n O suspeito foi conduzido pelo agente: "<< agt<< "\n\n";
					cout<< nome2<<" suspeito de furtar/roubar "<< obj<< " no dia: " << data<<" onde foi empregada o uso de"<< arma<< " com emprego de violencia "<< viole<< "\n\n\n";
					cout<< "\nO Dr.Delegado: "<< delegado<< " OUVIU A VITIMA E EMITIU MANDATO DE PRISAO AO DETIDO: "<< nome2<< " ficando a disposicao  da justica\n\n\n";
					cout<< "\nVOLTAR AO INICIO[0] VOLTAR EM TERMO/REGISTRO[1]  SAIR[2]";
			
					while(back2!=2)
					{
						cin>> back2;	
							if(back2==0)
							{
								goto inicio;
								system("cls");
							}	
								if(back2==1)
			   					{
									goto menu;
									system("cls");
											
			   					}   
									if(back2==2)
									{
										return 0;
									}
			   							 else if(back2!=0 xor 1 xor 2)
										{
				   							cout<< "OPCAO INVALIDA\n\n"; 
										}
					}	
				break;
		
				case 3:
					cout<< "\n\n\n**nREGISTRO DE OCORRENCIA***\n\n\n";
					cout<< "Motivacaoo do R.O\n\n(Ex: Perturbacao do silencio/Maus tratos aos animais) : \n\n";
					cin>> causa;
					cout<< "Data da ocorrencia:";
					cin>> data;
					system("cls");
					cout<< "\n\n\n**nREGISTRO DE OCORRENCIA***\n\n\n";
					cout<< nome1 << " se fez presente na delegacia XPTO, residente na Rua "<< end1<<" numero: "<< numero1<< " Cidade: "<< cid1<< " do estado: "<< uf1<< ". \n\n";
					cout<< "\nabriu requerimento na data: "<< data<< " com a finalidade denunciar "<< nome2<< " residente da rua: "<< end2 << " numero: "<<numero2<< " Cidade: "<< cid2<< " Estado: "<< uf2;
					cout<< " por "<<causa<< "\n\n\n";
					cout<< "O Dr.Delegado: "<< delegado<< " OUVIU AS PARTES DEIXANDO O R.O para tomada de decisao por meio da justica\n\n\n";
					cout<< "\nVOLTAR AO INICIO[0] VOLTAR EM TERMO/REGISTRO[1]  SAIR[2]";
			
					while(back3!=2)
					{
						cin>> back3;	
						if(back3==0)
						{
							goto inicio;
							system("cls");
						}
							if(back3==1)
			   				{
								goto menu;
								system("cls");
											
			   				}   
								if(back3==2)
								{
									return 0;
								}
				
			    					else if(back3=!0 xor 1 xor 2)
									{
				   						cout<< "OPCAO INVALIDA\n\n"; 
				break;				}
					}
			break;	
		}
	}
	return 0;
}
			
