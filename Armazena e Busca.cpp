#include <iostream>

using namespace std;

int main()
{
	int mat;
	int matricula[4];
	static int i;	 
	
	for(int i=0;i<4;i++)
	{
		cout<< "Entre com a matricula: "<< endl;
		cin>> matricula[i];
	}
	cout<< "BUSCAR MATRICULA: ";
	cin>> mat;
	
	for(int i=0;i<4;i++)
	{
		if(mat==matricula[i])
		{
			cout<< "ok";
			
		}
	
	}
	
}


