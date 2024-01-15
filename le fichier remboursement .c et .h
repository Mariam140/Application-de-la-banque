#include "rembourser.h"
#include "emprunter.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initialiserListeRemboursements(ListeRemboursements *liste) {
    liste->debut = NULL;
}

void effectuer_remboursement(ListeRemboursements *liste, Remboursement *nouveau_remboursement,Emprunt *empruntARembourser) {
    nouveau_remboursement->suivant = liste->debut;
    liste->debut = nouveau_remboursement;
}
void enregistrer_remboursement(Remboursement *nouveau_remboursement, Emprunt *empruntARembourser){
        FILE *fichier;
        fichier =fopen("remboursement.txt", "a");
        if(fichier != NULL){
        int result = fprintf(fichier, "%ld %s %s %c %s %s %s\n",
                            nouveau_remboursement->numero,
                            nouveau_remboursement->numero_client,
                            nouveau_remboursement->montant,
                            nouveau_remboursement->date,
                            nouveau_remboursement->suivant);

}

}

void afficher_remboursements(ListeRemboursements *liste) {
    Remboursement *courant = liste->debut;

    while (courant != NULL) {
        printf("Numéro: %ld, Montant: %.2f, Date: %s\n",
               courant->numero, courant->montant, courant->date);
        courant = courant->suivant;
    }
}
