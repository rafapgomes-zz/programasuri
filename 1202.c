

#include <stdio.h>
#include <string.h>


int conversao(num[])
{
	 for (int i = 0; i < strlen(num); i++) 
	{
                    ans *= 2;
                    ans += (num[i] - '0');
                    ans = ans%1500;
        }
        return ans;
}


int fibonnaci(int n)
{
    int ant=0,aux=0,prox=1,ret;
    int cont=0;
    
    if(n<2)
    {
    	return n;
    }else{
    
     while(cont<=n-2)
     { 
       aux=ant+prox;
       aux = aux%1000;
       ant=prox;
       prox=aux;
       cont = cont+1;
     }
    }
    return aux;
}
int main()
{


    int aux,num2,cont,i=0;
    char num[100001];
 int ans = 0, ciclo = 1500;

      
     
	scanf("%d",&cont);
	getchar();
	for(int i=0; i<cont; i++)
	{
	
	 scanf("%s",num);
	    
    		
    	       	printf("%03d",fibonnaci(conversao(num));
	      printf("\n");



        	
       }
    
            
	
}

