#include  "compte.h"
#include  <stdio.h>
#include  <stdlib.h>

void  initialiserListeComptes ( ListeComptes  * liste ) {
    liste -> début  =  NULL ;
}

void  enregistrer_compte ( ListeComptes  * liste , Compte  * nouveau_compte ) {
    nouveau_compte -> suivant  =  liste -> début ;
    liste -> début  =  nouveau_compte ;
}
void  enregistrer_compte_dans_fichier ( Compte  * nouveauCompte ) {
    FICHIER  * fichier ;
    fichier  =  fopen ( "compte.txt" , "a" );
    if ( fichier  !=  NULL ){
        int  résultat  =  fprintf ( fichier , "%ld %s %s %c %s %s %s\n" ,
                            nouveauCompte -> numéro ,
                            nouveauCompte -> tapez ,
                            nouveauCompte -> numero_client ,
                            nouveauCompte -> solde ,
                            nouveauCompte -> état );
        si ( résultat  <  0 ) {
            printf ( "Erreur lors de l'écriture dans le fichier.\n" );
        } autre {
            fclose ( fichier );
            printf ( "Le compte a été enregistré avec succès.\n" );
        }
    } autre {
        printf ( "Erreur lors de l'ouverture du fichier.\n" );
    }
}

void  debloquer_compte ( ListeComptes  * liste , long  numero ) {
    Compte  * courant  =  liste -> début ;

    while ( courant  !=  NULL ) {
        if ( courant -> numéro  ==  numéro ) {
            if ( courant -> état  ==  BLOQUE ) {
                courant -> état  =  LIBRE ;
                printf ( "Compte %ld débloqué avec succès.\n" , numéro );
            } autre {
                printf ( "Le compte %ld n'est pas bloqué.\n" , numéro );
            }
            retour ;
        }
        courant  =  courant -> suivant ;
    }

    printf ( "Aucun compte trouvé avec le numéro %ld\n" , numéro );
}
// le fichier .h
#ifndef  COMPTE_H
#définir  COMPTE_H

typedef  enum { EPARGNE , COURANT } TypeCompte ;
typedef  enum { LIBRE , BLOQUE } EtatCompte ;

typedef  struct  Compte {
     numéro long ;
    TypeTypeCompte  ; _
    long  numéro_client ;
    double  vente ;
    EtatCompte  Etat ;
    struct  Compte  * suivant ;
} Compte ;

 structure typedef {
    Compte  * débuts ;
} ListeComptes ;

void  initialiserListeComptes ( ListeComptes  * liste );
void  enregistrer_compte ( ListeComptes  * liste , Compte  * nouveau_compte );
void  enregistrer_compte_dans_fichier ( Compte  * nouveauCompte );
void  debloquer_compte ( ListeComptes  * liste , long  numero );

#fin si
