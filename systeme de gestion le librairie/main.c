#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int affichageMenu(){
    printf("1- Ajouter un livre\n2- Afficher tous les livres\n3- Rechercher un livre par son titre\n4- Mettre a jour la quantite d'un livre\n5- Supprimer un livre du stock\n6- Afficher le nombre total de livres en stock\n\n");
    printf("Veuillez choisir le nombre d'une option :");
    int choix;
    scanf("%d", &choix);
    return choix;
}

void ajouterLivre(char *tableau, char titre, char auteur, char prix, char qtte){
    printf("%s est le titre, %s auteur, %s prix, %s qtte\n");
    printf("%s", tableau[0][1]);
}

int main()
{



    //int test = affichageMenu();
    //printf("%d", test);
    //int nbrLignes = 0;
    char tableau[100][4][45] = {{"abdelmalek", "ben", "45"},{"abdelmalek", "ben", "45"},};
    printf("%s\n", tableau[0][0]);
    char texte[] = "que du text";
    strcpy(tableau[0][0], texte);
    printf("%s", tableau[0][0]);


    return 0;
}
