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

int conversao(int n)
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
    int ant=0,aux=1,prox=1;
    int cont=0;
    while(cont<n)
    {
       printf("%d ",aux);
       aux=ant+prox;
       ant=prox;
       prox=aux;
       cont = cont+1;
    }
    return aux;
}



int main()
{
    int aux,num,num2;
    scanf("%d",&num);
    num2 = conversao(num);
    aux=fibonnaci(num2);
}