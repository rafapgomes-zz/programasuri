#include <stdio.h>
#include <string.h>
int main()
{
    char aux[1000],s[1000];
    int i,j,n,cont,temp,metade;
     
    scanf("%d",&n);
    
    getchar();
    for(int l=0; l<n; l++){
        gets(s);
        cont = strlen(s);
        temp = cont-1;
        metade = cont/2;
        for(j=0; j<cont; j++){
            if ((s[j]>=65 & s[j]<=90) || (s[j]>=97 & s[j]<=122)){
                s[j] = s[j]+3;                
            }   
            
            aux[temp] = s[j];
            temp = temp-1;
            if(j>=metade){
                aux[j]=aux[j]-1;
            }
        
        }
        aux[j]='\0';  
        printf("%s\n",aux);
    }
}
