# include <stdio.h>
# include <string>
# include <iostream>
# include <cstdio>
# include <cstdlib>
# include <string>

using namespace std;

int main() {

    string linha;
    int a1, a2, a3, minutos;
    
    while (true)
    {
        cin >> linha;
        if(linha == "0")
        {
            break;
        }
   
        a1 = atoi(linha.c_str());
        cin >> linha;
        a2 = atoi(linha.c_str());
        cin >> linha;
        a3 = atoi(linha.c_str());
       
        if((a1 > a2) && (a1 > a3)){
            minutos = (a2 * 2) + (a3 * 4);
        }else if (a2 > a1 && a2 > a3){
            minutos = a1 * 2 + a3 * 2;
        }else
        {
            minutos = a1 * 4 + a2 * 2;
        }       
        cout << minutos;
		cout << "\n";
    }        
 
    return 0;
}