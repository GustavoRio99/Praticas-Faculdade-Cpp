#include <iostream>

using namespace std;

int main()
{
	int vetor[1][3];
	int notas=0;
	
	
	
	for(int i=0 ; i<1;i++)
	{
		for(int j=0 ; j<3;j++)
		{
			cout<< "Digite um numero"<< endl;
			cin>> vetor[i][j];
			notas=vetor[i][j]+vetor[i][j]+vetor[i][j];
			
		
				
			
		}
			
		
	}		
cout<< notas<<endl;			
}
