#include <stdio.h>
 
int main() {
    
    float valor,total,menor,maior;
    int n;
     scanf("%d",&n);
    for(int i=0; i<n; i++)
    {  
         scanf("%d",&valor);
         if(valor<menor)
         {
             menor=valor;
         }else if(valor>maior)
         {
             maior = valor;
         }
         total = valor + total;
         total = total/n;
         total = (maior-total) + (total-menor);
         printf("%f",total);

    }
    return 0;
}
