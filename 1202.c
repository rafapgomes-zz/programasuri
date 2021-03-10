#include <stdio.h>
int potencia(int cont)
{
    int num=1;
    for(int i=1; i<=cont; i++)
    {
        num = num*2;
    }
    return num;
}

int conversao(long long int n)
{
    int num=0,cont=0;
    while(n!=0)
    {
        int aux = n%10;
        aux  = aux * potencia(cont); 
        num = num+aux;
        cont = cont+1;
        n = n/10;
    }
    return num;
}


int fibonnaci(int n)
{
    int ant=0,aux=0,prox=1,ret;
    int cont=0;
    while(cont<n-1)
    { 
       aux=ant+prox;
       aux = aux%1000;
       ant=prox;
       prox=aux;
       cont = cont+1;
    }
    return aux;
}
int main()
{
    int aux,num2,cont,i=0;
    long long int num;

      
      scanf("%d",&cont);
	for(int i=0;i<cont;i++)
	{
		
	 	scanf("%lld",&num);
 		printf("%d",fibonnaci(conversao(num)));

         	printf("\n");
    	 
       }
    
            
	
}

