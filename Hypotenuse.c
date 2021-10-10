#include <stdio.h>
#include <math.h>

int main(void)
{
    
    float AB;
    float BC;
    //Ses deux float déclarent AB et BC.

    printf("Quelle est la longueur de AB ? \n");
    scanf("%f", &AB);

    printf("Quelle est la longueur de BC ? \n");
    scanf("%f", &BC);
    
    float AC = (AB * AB) + (BC * BC); 
    //Ici, c'est le calcul de l'hypotenuse qui sert à définir la somme au carré.

    printf("La longueur de AC est de %f cm.\n", sqrtf(AC)); 
    //sqrtf sert à dire la racine carrée de la somme du calcul précédent.
}
