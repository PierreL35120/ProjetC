#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char voir;
    int age = get_int("Quel est votre âge ?\n"); //Cette étape sert à définir votre âge.
    
    string filmCategorieEnfant[3] = {"Winnie l'ourson", "Fantasia", "Le roi lion"};
    string filmCategorieAdos[3] = {"Madagascar", "One Piece : Strong World", "Gladiator"};
    string filmCategorieAdulte[3] = {"The Shining", "La Nonne", "Conjuring"};

    for (int i = 0; i < 3; i++)
    {
        if (age > 18)
        {
            voir = get_char("Voulez vous voir %s ? y/n ", filmCategorieAdulte[i]);
            
        }
        if (voir == 'y')
        {
            printf("%s va commencer.", filmCategorieAdulte[i]);
            break; //Si on accepte, le break va stopper le programme.
        }
        else if (voir == 'n')
        {
            printf("Proposition suivante :\n");
            i++; //Si jamais on refuse, il ajoute +1 à i, ce qui ferra passer à l'option de film suivant.
        }
    }
}
