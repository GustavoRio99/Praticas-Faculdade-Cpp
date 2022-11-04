//#include <iostream>
//using namespace std;
//int main()
//{
//int resultado=0;
//int a=10, b=20, c=30;
//resultado=((a*a)+(6*b)+c);
//cout<< resultado;	
//return 0;
//}
while(resultado!=0):
    expressao = input(":::::::::::::::::::::::::::CALCULADORA::::::::::::::::::::::::::::::::: Insira os valores ou digite [0] p/ SAIR:  ")
    resultado = eval(expressao)
    print (f"operação {expressao} = {resultado}")
if(resultado==0):
    print ("Calculadora Finalizada...")

*eu descobri um jeito facil de fazer uma calculadora no python... usando uma função milagrosa eval() kkkk
porem eu sei desenvolver usando o jeito mais dificil. Fiz uma em C++ :*

Exemplo: 

#include <iostream>
using namespace std;
int main()
{
float res=0.0,val1=0,val2=0;
char operador;
cout<< "CALCULADORA";
while(operador != 'a')
{
	cout<<endl<< "INSIRA PRIMEIRO NUMERO:	"<< endl;
	cin>>val1;
	cout<< "INSIRA SEGUNDO NUMERO:	"<< endl;
	cin>>val2;
	cout<< "Operador +, -, *,/ ,%"<< endl;
	cin>> operador;

	if(operador=='+')
	{
		res=val1+val2;
		cout<<"A soma: "<<val1 << "+" <<val2<< "="<< res;
	}
	else if(operador== '-')
	{
		res=val1-val2;
		cout<<"A subtracao: "<<val1 << "-" <<val2<< "= "<< res;
	}
	else if(operador== '*')
	{
		res=val1*val2;
		cout<<"A multiplicacao: "<<val1 << "*" <<val2<< "= "<< res;
	}
	else if(operador== '/')
	{
		res=val1/val2;
		cout<<"A divisao: "<<val1 << "/" <<val2<< "= "<< res;
	}
	else if(operador== '%')
	{
		res=val2*(val1/100);
			
		cout<<"Resultado: " << res;
	}
}
return 0;
}
