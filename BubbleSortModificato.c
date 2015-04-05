#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){
int aiuto;
int v[N];
int i,x;
for(i = 0; i < N; i++)  //Inserimento valori nel vettore.
      {
       printf("Inserisci l'elemento %d: \n", i);
       scanf("%d", &v[i]);
      }
         
for(x = 0; x < N - 1; x++)          //Ciclo esterno che mi permette di ripetere il confronto tra coppie N-1 volte.
      {
       for(i = 0; i < (N - 1 - x); i++)     //Ciclo interno che mi permette di confrontare coppia per coppia.
            {
            if(v[i] < v[i + 1])
                    {
                     aiuto = v[i];
                     v[i] = v[i + 1];
                     v[i + 1] = aiuto;
                    }
            }
      
      }  
          
for(i = 0; i < N; i++)   //Stampa del vettore ordinato.
      {
       printf("Elemento %d del vettore ordinato: %d \n", i, v[i]);
      }

    return (EXIT_SUCCESS);
}
