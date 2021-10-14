#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float ProdBase;
    float Pourcent;
    float Argent;
    float ProdPromo;
    float RendBase;
    float RendSolde;
    float Economie;
    float ManqueSolde;
    float ManqueBase;
    
    printf("Quel est le prix (€) du produit ? \n");
    scanf("%f", &ProdBase);

    printf("Quel est le pourcentage de réduction ? \n");
    scanf("%f", &Pourcent);
    
    printf("Quel somme avez sur vous ? \n");
    scanf("%f", &Argent);
    
    ProdPromo = ProdBase * (100 - Pourcent) / 100; //Ici, nous trouvons le prix en solde de l'article.
    RendBase = Argent - ProdBase; //Là, c'est l'argent qui nous aurais été rendu du base.
    RendSolde = Argent - ProdPromo; //Maintenant, c'est l'argent rendu avec le prix soldé.
    Economie = ProdBase - ProdPromo;  //Ça indique la somme économiser grâce à la solde.
    ManqueSolde = ProdPromo - Argent; //Si jamais vous n'aviez pas assez d'argent malgré les soldes.
    ManqueBase = ProdBase - Argent; //L'argent qui vous manquais avec le prix de base.

    printf("\n");
    printf("Le prix de votre produit avec cette solde est de %.2f€. \n", ProdPromo);
    printf("Grâce à cette solde, le produit coûte %.2f€ de moins.\n", Economie);
    printf("\n");

    
    if (Argent > ProdPromo && Argent > ProdBase)
    {
        printf("Avec cette solde, on vous rendra  %.2f€ au lieu de %.2f€. \n", RendSolde, RendBase);
        //Vous avez assez d'argent dans les deux cas.
    }
    else if (Argent > ProdPromo && Argent == ProdBase)
    {
        printf("Avec cette solde, on vous rendra %.2f€, vous aviez pile ce qu'il fallait pour le prix à plein tarif. \n", RendSolde); 
        //Vous aviez l'argent du prix de base.
    }
    
    else if (Argent == ProdPromo && Argent < ProdBase)
    {
        printf("Vous avez pile la bonne somme pour l'acheter en solde. Sinon, il vous manquais %.2f€. \n", Economie);
        //La somme que vous aviez était égale à la somme de la solde, l'argent qui manquais pour le tarif complet sera donc l'argent économisé.
    }

    else if (Argent > ProdPromo && Argent < ProdBase)
    {
        printf("Avec cette solde, on vous rendra %.2f€, heureusement qu'il y'a la solde car vous n'aurez pas eu assez . Sinon, vous auriez eu besoin %.2f€ en plus pour l'avoir à son prix de base. \n", 
               RendSolde, ManqueBase);
        //Vous aviez un peu plus que l'argent requis pour acheter le produit soldé.
    }
    
    else if (Argent < ProdPromo && Argent < ProdBase)
    {
        printf("Vous n'avez pas assez d'argent sur vous pour acheter ce produit, même soldé. \nIl vous manque %.2f€ pour l'avoir en solde et %.2f€ pour l'avoir plein pot. \n", 
               ManqueSolde, ManqueBase);
        //Là, vous n'avez aucune des deux sommes, c'est donc ce message qui s'affichera disant ce qu'il manque pour les deux.
    }
}
