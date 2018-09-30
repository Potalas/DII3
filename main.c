#include <stdio.h>
#include <stdlib.h>

#define taille 3

//Structure Joueur
struct Joueur{
    char symbole;
    char* nom;
};

//Structure Jeu
struct Jeu{

    int plateau[taille][taille];
    struct Joueur joueurs[2];

};

struct Jeu jeu;

void intro();
void initialiser_jeu();
void algorithme_morpion();

int main()
{
    intro();
    initialiser_jeu();

    algorithme_morpion();

    return 0;
}

void intro(){

    printf("-----------------------\n");
    printf("------  MORPION  ------\n");
    printf("-----------------------\n");
}

void initialiser_jeu(){

    jeu.joueurs[0].nom = "Joueur 1";
    jeu.joueurs[0].symbole = 'X';
    jeu.joueurs[1].nom = "Joueur 2";
    jeu.joueurs[1].symbole = 'O';

    for(int i = 0; i < taille; i++){
        for(int j = 0; j < taille; j++){
            jeu.plateau[i][j] = -1;
        }
    }
}

void afficher_barre(int nb){
    printf("\t");
    for(int k = 0; k < nb; k++){
           printf("-");
    }printf("\t\n");
}

//affichage du plateau de jeu
//avec les delimitations
void afficher_jeu(){

    int nb = taille * 2 + 1;

    afficher_barre(nb);


    for(int i = 0; i < taille; i++){
        printf("\t|");
        for(int j = 0; j < taille; j++){


                 if( jeu.plateau[i][j] ==-1 ){ printf("-"); }
            else if( jeu.plateau[i][j] == 0 ){ printf("%c", jeu.joueurs[0].symbole); }
            else if( jeu.plateau[i][j] == 1 ){ printf("%c", jeu.joueurs[1].symbole); }

            printf("|");

        }printf("\n");

        afficher_barre(nb);

    }printf("\n");
}


//Demande un entier entre 1 et la taille
//du plateau, s'assure que la valeur
//est bien entre les bornes avant de le retourner
//sinon redemande
int saisir_entier(){

    int retour = 0;

    /**
    TODO
    */

    return retour;
}


//prend en paramètre une ligne et colonne,
//renvoie 1 si la place et libre 0, sinon
int controle_place_libre( int ligne, int colonne ){

    if( 0/** TODO*/ ){
        printf("Oups, il y a deja un jeton a cet endroit... \nEssayer ailleurs!\n\n");
        return 0;
    }
    return 1;
}


//Demande les coordonnees de ligne et colonne au joueurs
//et met à jour le plateau
//en vérifiant que la place est libre
void saisir_coordonee(int numero_joueur){

    int ligne, colonne;
    int place_libre = 0;


    /**
    TODO
    */
}

/**
Victoire :
Renvoie le numéro du joueur gagnant s'il existe
-1 sinon
*/

//vérifie s'il y a un gagnant d'après une ligne passee en parametre
int victoire_ligne( int ligne ){

    int gagnant;

    /**
    TODO
    */

    return gagnant;
}

//vérifie s'il y a un gagnant d'après une colonne passee en parametre
/**TODO*/

// ... diagonles
/** TODO*/


//compile toutes les possibilité de victoire
int test_victoire(){

    int gagnant;

    /**
    TODO
    */

    //pas de gagnant
    return -1;
}


/**
Un dernier cas à traiter
TODO
*/



//algorithme general
void algorithme_morpion(){

    int fini = 0;
    int num_joueur = 0;
    int gagnant, match_nul;

    afficher_jeu();

    /**
    TODO
    */

    gagnant = ('T'+'o'+'d'+'o')&(1<<0);
    printf(" Bravo %s, vous avez battu votre adversaire.\n", jeu.joueurs[gagnant].nom);
}






