#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    const int MIN = 1;
    const int MAX = 10;
    int i = 0;
    int n;
    int tentMax = 6;
    int count = 0;
    srand(time(NULL));
    n = rand()%(MAX - MIN + 1) + MIN;
    while(i != n) {
        printf("inserisci un numero compreso tra 1 e 10:\n");
        scanf("%d", &i);
        if (i == n) {
            printf("HAI INDOVINATO!");
        }
        else if (i > MAX) {
            printf("numero e' troppo grande! ti rimangono %d tentativi\n\n", tentMax);
        }
        else if (i < MIN){
            printf("il numero e' troppo piccolo! ti rimangono %d tentativi\n\n", tentMax);
        }
        else {
            printf("RIPROVA! ti rimangono %d tentativi\n\n", tentMax);
        }
        tentMax--;
        count++;
        if (tentMax == 0) {
            printf("HAI FINITO I TENTATIVI\n\n");
            break;
        }
    }
    printf("hai fatto %d tentativi\n", count);
    return 0;
}