#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char linha[100000];
    int a1, a2, a3, minutos;
    
    while (1)
    {
        //fgets(linha, 100000, stdin);
		//linha[strlen(linha) - 1] = '\0';
        scanf("%s",linha);        
        if (strcmp(linha, "0") == 0)
			break;
        
        a1 = atoi(linha);

        scanf("%s",linha);
        a2 = atoi(linha);

        scanf("%s",linha);
        a3 = atoi(linha);
       
        if((a1 > a2) && (a1 > a3)){
            minutos = (a2 * 2) + (a3 * 4);
        }else if (a2 > a1 && a2 > a3){
            minutos = a1 * 2 + a3 * 2;
        }else
        {
            minutos = a1 * 4 + a2 * 2;
        }       
        printf("%d\n",minutos);
    }        
 
    return 0;
}