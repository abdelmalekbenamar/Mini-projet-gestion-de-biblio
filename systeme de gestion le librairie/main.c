#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nbrLivres = 0;
int affichageMenu(){
    printf("1- Ajouter un livre\n2- Afficher tous les livres\n3- Rechercher un livre par son titre\n4- Mettre a jour la quantite d'un livre\n5- Supprimer un livre du stock\n6- Afficher le nombre total de livres en stock\n\n");
    printf("Veuillez choisir le nombre d'une option :");
    int choix;
    scanf("%d", &choix);
    return choix;
}

void ajouterLivre(char tableau[100][4][35]){
    printf("Veuillez taper les informations suivantes :\nLe nom du livre:");
    char titre[100];
    scanf(" %[^\n]s", titre);
    printf("L'auteur du livre :");
    char auteur[100];
    scanf(" %[^\n]s", auteur);
    printf("Le prix du livre :");
    char prix[100];
    scanf("%s", prix);
    printf("La quantite du livre :");
    char qtte[100];
    scanf("%s", qtte);
    strcpy(tableau[nbrLivres][0], titre);
    strcpy(tableau[nbrLivres][1], auteur);
    strcpy(tableau[nbrLivres][2], prix);
    strcpy(tableau[nbrLivres][3], qtte);
    nbrLivres = nbrLivres + 1;
    printf("nombre de livres est : %d\n", nbrLivres);
    //printf("\n\ntitre : %s -- auteur : %s -- prix : %s -- qtte : %s", tableau[nbrLivres][0], tableau[nbrLivres][1], tableau[nbrLivres][2], tableau[nbrLivres][3]);

}
void afficherTousLivres(char tableau[100][4][35]){
    int i;
    for(i = 0; i < nbrLivres; i++){
        printf("%s\n", tableau[i][0]);
    }
}

int main()
{



    //int test = affichageMenu();

    /*char tableau[100][4][35] = {{"alice", "ben", "45dh","100"},{"enfant noir", "kamara", "25dh", "200"},};
    */
 /*
    printf("%s\n", tableau[0][0]);
    char texte[] = "que du text";
    strcpy(tableau[0][0], texte);
    printf("%s", tableau[0][0]);
*/
    char tableau[100][4][35];
    ajouterLivre(tableau);
    ajouterLivre(tableau);
    ajouterLivre(tableau);
    afficherTousLivres(tableau);

    return 0;
}
