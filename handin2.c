#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
    int n,c,low_number,high_number,current_number; // Definerer mine værdier som heltal
    int last_number = 0;
    int counts = 0;

    printf("Skriv det laveste tal i intervallet: ");
    scanf("%d", &low_number);
    printf("Skriv det højeste tal, du vil tjekke for: ");
    scanf("%d", &high_number);
    printf("Skriv tallet, du vil tjekke for: ");
    scanf("%d", &c);

    for (n=low_number; n<=high_number; n++) { //Her laver jeg en "for løkke", som n op med en hver gang den bliver kørt.
        current_number = n;
        do {
            last_number = current_number % 10; // Finder det sidste ciffer
            if (last_number == c) { /// Tjekker om det sidste ciffer slutter på det ønsket tal.
                counts ++; // Tæller hvor mange gange det ønsket tal er fundet
                current_number = 0; // For at stoppe do while løkken
            }
            current_number = current_number / 10; // Dividerer tallet med 10 for at fjerne et ciffer
        } while (current_number != 0); // Hvis tallet ikke er 0, kører løkken igen
    }
    printf("\n%d findes %d gange i intervallet fra %d til %d",c,counts,low_number,high_number);
    return 0;
}