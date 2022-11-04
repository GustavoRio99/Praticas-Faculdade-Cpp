#include <iostream>
#include <stdio.h>

using namespace std;

int main(){


	int decisao=0, embate=0, fim=1, garagem=0, decisao2=0;
	char player[60];
	
	while(fim!=0)
	{
	
	
	
	cout<< "	\n\*Neste codigo teste demonstra como criar um jogo modo historia**\n\n";
	system("pause");
	system("cls");
	cout<< "              			**O INTRUSO**                \n\n";
	system("pause");
	system("cls");
	cout<< "	\n\nQual seu nome, Jogador(a):"<< player<< "\n\n"<< "\n\nAPERTE ENTER E DIGITE SEU NOME\n\n";
	system("pause");
	system("cls");
	cin>> player;
	system("cls");
	cout<< "\n\n"<< player<< "	\n\nHoje voce teve um dia super cansativo no trabalho...\n\n";
	system("pause");
	system("cls");
  	cout<< "	\n\nAo Chegar em casa... se SURPREENDE com Algo\n\n";
  	system("pause");
	system("cls");
	cout<< "	\n\nALGO TERRIVELMENTE ESTRANHO...\n\n";
	system("pause");
	system("cls");
	cout<< "	\n\nRAPIDO !!!!"<< player<< "!!! Voce precisa tomar uma DECISAO!!!!\n\n";
	system("pause");
	system("cls");
	inicio:
	cout<< "	\n\nENTRAR PELA GARAGEM[1]         OU         ENTRAR PELA PORTA DA FRENTE[2]\n\n";
	cin>> decisao;
	system("cls");
	system("pause");
	system("cls");
		
	    switch(decisao)
		{
		
			case 1:
			
			
				
			cout<< "	\n\nEsgueirando se entre os cercado e arbustos. \n\n";
			system("pause");
	   		system("cls");
	   		cout<< "	\n\nvoce ve alguem ESTRANHO fechando a cortina da frente da casa.\n";
	   		cout<< "	\n\nAo entrar na garagem de sua casa voce vai ate a bancada e ve sua Glock 9mm..\n\n";
			system("pause");
			system("cls");
			cout<< "	\n\nCUIDADO "<< player<< " ESSA DECISAO PODE LEVAR A UM DESTINO FATAL \n PARA PESSOA SUSPEITA QUE ESTA EM SUA CASA\n\n";
			cout<<  "	\n\nRAPIDO QUAL SUA DECISAO: \n PEGAR A ARMA[1] OU IR DESARMADO[2]\n\n";
			cin>> decisao2;
	        system("cls");
	        
						if(decisao2==1)
						{
							cout<< "	\n\nPassando vagarosamente pela cozinha voce segue \n apontando sua arma para frente...\n\n";
							system("pause");
	                        system("cls");
	                        cout<< "	\n\nEm direcao a sala de estar...\n\n";
	                        system("pause");
	                        system("cls");
	                        cout<< "	\n\nVOCE OUVE PASSOS APRESSADOS \n SUBINDO RAPIDAMENTE AS ESCADAS QUE LEVAM AOS QUARTOS.\n\n";
						    system("pause");
	                        system("cls");
	                        cout<< "	\n\nVoce tira os sapatos e segue rapidamente sem denunciar sua posicao.\n\n";
	                        system("pause");
	                        system("cls");
							cout<< "	\n\nSobe as escadas vagarosamente mirando para cima pronto para atirar.\n\n";
	                        system("pause");
	                        system("cls");
							cout<< "	\n\nSURGI DO ALTO UMA FIGURA ENORME E ASSUSTADORA.\n\n";
	                        system("pause");
	                        system("cls");
	                        cout<< "	\n\nRAPIDO "<< player<< " VOCE PRECISA TOMAR UMA DECISAO!!!\n\n";
	                        cout<< "	\n\nATIRAR[1] OU CORRER[2]";
	                        cin>> embate;
	                        system("pause");
	                        system("cls");
	                        
						    switch(embate)
	                        			{
										 case 1:
										 	
										 	cout<< "	\n\nINFELIMENTE VOCE ACABA DE MATAR SUA ESPOSA\n\n";
										 	system("pause");
	                                        system("cls");
	                                        cout<< "	\n\nEla queria assustar voce com a fantasia nova de Wallowen que havia comprado para te presentear\n\n";
	                                        system("pause");
	                                        system("cls");
	                                        cout<< "\n\n                 GAME OVER  !!!!!!!\n\n";
	                                        system("pause");
	                                        system("cls");
	                                        cout<< "\n\n				DESEJA CONTINUAR [1]SIM OU [0]NAO. \n\n";
	                                        cin>> fim;
	                                        system("pause");
	                                        system("cls");
	                                        
	                                        break;
	                                        
										case 2: 
										    
											cout<< "	\n\nVOCE DESCE AS ESCADAS O MAIS RAPIDO QUE PODE\n\n";
											system("pause");
	                                        system("cls");
	                                        cout<< "	\n\nO ESTRANHO GRITA ESTERICAMENTE!\n\n";
	                                        system("pause");
	                                        system("cls");
	                                        cout<< "	\n\nERA SUA ESPOSA COM UMA FANTASIA DE WELLOWEM\n\n";
	                                        system("pause");
	                                        system("cls");
	                                        cout<< "	\n\nELA PLANEJOU LHE ASSUSTAR COM A NOVA FANTASIA QUE ELA HAVIA COMPRADO PARA VOCE<3!!\n\n";
	                                        system("pause");
	                                        system("cls");
	                                        cout<< "	\n\nVoce havia pedido a ela uma fantasia ASSUSTADORA do Filme Silent Hill<3 =D.\n\n";
	                                        system("pause");
	                                        system("cls");
	                                        cout<< "	\n\nPAra voce ganhar a competicao de cosplay que vai ocorrer no dia do wellowen. U.U\n\n";
	                                        system("pause");
	                                        system("cls");
	                                        cout<< "\n\n					PARABENS!!! VOCE CONCLUIU O GAME\n\n\n\n";
	                                        cout<< "\n\n				DESEJA CONTINUAR JOGANDO E DESCOBRIR OS OUTROS POSSIVEIS FINAIS?\n\n [1]SIM OU [0]NAO. \n\n";
	                                        cin>> fim;
	                                        system("pause");
	                                        system("cls");
	                                        
	                                        break;
	                    
							
						}
	                   }else{
					   
										
														cout<< "	\n\nEm direcao a sala de estar...\n\n";	
														system("pause");
	                                        			system("cls");
														cout<< "	\n\nVoce tira os sapatos e segue rapidamente sem denunciar sua posicao.\n\n";
														system("pause");
	                                        			system("cls");
														cout<< "     \n\nEnquanto isso CHEGA RAPIDAMENTE UM FIGURA ATERRORIZANTE E LHE TOCA NO OMBRO.\n\n";
														system("pause");
	                                        			system("cls");
														cout<< "     \n\n VOCE CORRE DESESPERADAMENTE PARA GARAGEM, O MAIS RAPIDO POSSIVEL\n\n";
														system("pause");
	                                        			system("cls");
														cout<< "      \n\n INFELIZMENTE VOCE TROPESSA EM SEUS PROPRIOS SAPATOS QUE ESTAVAM NO CHAO DA COZINHA.\n\n";
														system("pause");
	                                        			system("cls");
														cout<< "      \n\n BATE VIOLENTAMENTE COM SUA CABECA NA QUINA DO ARMARIO...\n\n";
														system("pause");
	                                        			system("cls");
														cout<< "       \n\n VOCE CAI AO SOLO....\n\n";
														system("pause");
	                                        			system("cls");
	                                        		    system("pause");
	                                        			system("cls");
														cout<< "     \n\nSUA ESPOSA CHEGA ATE PERTO E GRITA POR SOCORRO...\n\n";
														system("pause");
	                                        			system("cls");
														cout<< "		\n\nMas.... INFELIZMENTE VOCE MORRE!!\n\n";
														system("pause");
	                                        			system("cls");
														cout<< "\n\n                 GAME OVER  !!!!!!!\n\n";
	                                        			system("pause");
	                                        			system("cls");
	                                        			cout<< "\n\n				DESEJA CONTINUAR [1]SIM OU [0]NAO. \n\n";
	                                        			cin>> fim;
	                                        			system("pause");
	                                        			system("cls");
	                                        			
	                                        			
	                                        
	                                        
														
																				
										}   
										case 2:
				
					cout<< "  \n\nCHEGANDO A PORTA DA FRENTE\n\n";
					system("pause");
					system("cls");
					cout<< " 	\n\n a porta encontra se TRANCADA\n\n";
					system("pause");
					system("cls");
					cout<< "   \n\nO QUE VOCE DESEJA FAZER "<< player<< " \n\n";
					cout<< "	\n\n VOLTAR A GARAGEM [1]\n\n";
					cin>> garagem; 
					
						if(garagem==1)
						{
									goto inicio;
									
									break;
						}     
	                       
						   
						   
		
			
			
	   }
	   return 0;
		}
					
				
		
		
										      
	                        			
							 	return 0;
	                        		    }
