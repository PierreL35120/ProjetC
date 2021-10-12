#include <stdio.h>
#include <cs50.h>
//C'est le liste des bibliothèque utilisée pour ce programme.

//Création du tableau.
string film[3][3] = {{"Winnie l'ourson", "Fantasia", "Le roi lion"},
    {"Madagascar", "One Piece : Strong World", "Gladiator"},
    {"The Shining", "La Nonne", "Conjuring"}
    
};
        


int main(void)
{
//Déclaration des variable voir1, voir2, voir3, qui servent à chaque catégorie.
    char voir1;
    char voir2;
    char voir3;
        
    int age = get_int("Quel est votre âge ?\n"); 
//Cette étape sert à définir votre âge.

    for (int i = 0; i < 3; i++)
    {
        if (age > 18)
        {
            voir1 = get_char("Voulez vous voir %s ? y/n ", film[2][i]);
        }
        if (voir1 == 'y')
        {
            printf("%s va commencer.", film[2][i]);
            break; //Si on accepte, le break va stopper le programme.
        }
        else if (voir1 == 'n')
        {
            printf("Proposition suivante :\n");
        }
    }


    for (int i = 0; i < 3; i++)
    {
        if (age > 11 && age < 17)
        {
            voir2 = get_char("Voulez vous voir %s ? y/n ", film[1][i]);
        }
        if (voir2 == 'y')
        {
            printf("%s va commencer.", film[1][i]);
            break; //Une fois que le choix sera confirmé, ce break sert à stopper le programme.

        }
        else if (voir2 == 'n')
        {
            printf("Proposition suivante :\n");
            //Si jamais on refuse, il ajoute +1 à i, ce qui ferra passer à l'option de film suivant.
        }
    }
        
    for (int i = 0; i < 3; i++)
    {
        if (age < 11)
        {
            voir3 = get_char("Voulez vous voir %s ? y/n ", film[0][i]);
        }
        if (voir3 == 'y')
        {
            printf("%s va commencer.", film[0][i]);
            break;
        }
        else if (voir3 == 'n')
        {
            printf("Proposition suivante :\n");
        }
            
    }
}
