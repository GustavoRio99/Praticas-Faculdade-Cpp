#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

inicio:
char pal[30],letr[1],secreto[30];
int tam,i,c,ac, inicio;
bool acerto=false;

c=6;
tam=0;
i=0;
ac=0;
acerto=false;
	
		
cout<< "JOGO DA FORCA ESTACIO.\n\n"<< "Digite uma palavra sem que seus amigos a vejam:	";
cin>> pal;
system("cls");
	
while(pal[i] !='\0')
{
	
i++;
tam++;	
		
}	
	
for(i=0;i<30;i++)
{
	secreto[i]='-';
}
	
while( (c>0) and (ac<tam) )
{
cout<< "chances restantes:	" << c<< "\n\n";
cout<< "palavra secreta:	\n\n";
		
		
for(i=0;i<tam; i++)
{
cout<< secreto[i];
}
		
cout<< "\n\nDigite uma letra: 	";
cin>> letr[0];
for(i=0;i<tam;i++)
{
if(pal[i]==letr[0])
{
acerto=true;
secreto[i]=pal[i];
ac++;
}
}
if(!acerto)
{
c--;
}
acerto=false;
system("cls");
}
if(ac==tam)
{
cout<< "voce venceu!!!!!!\n";
cout<< "Digite [1] para CONTINUAR ou [2] para SAIR: 	";
cin>> 	inicio;
if(inicio==1)
{
goto inicio;
}else
{
return 0;
}
}else
{
cout<< "Voce PERDEU!!!!\n";
}
cout<< "Digite [1] para CONTINUAR ou [2] para SAIR: 	";
cin>> 	inicio;
if(inicio==1)
{
				
goto inicio;
}else
{
return 0;
}
return 0;	
}

