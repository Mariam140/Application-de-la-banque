#include  "emprunter.h"
#include  <stdio.h>
#include  <stdlib.h>
 résultat entier ;
void  initialiserListeEmprunts ( ListeEmprunts  * liste ) {
    liste -> début  =  NULL ;
}

void  solliciter_emprunt ( ListeEmprunts  * liste , Emprunt  * nouvel_emprunt ) {
    nouvel_emprunt -> suivant  =  liste -> début ;
    liste -> début  =  nouvel_emprunt ;
}
void  enregistrer_emprunt ( Emprunt  * nouvel_emprunt ){
        FICHIER  * fichier ;
        fichier  = fopen ( "emprunt.txt" , "a" );
        if ( fichier  !=  NULL ){
        int  résultat  =  fprintf ( fichier , "%ld %s %s %c %s %s %s\n" ,
                            nouvel_emprunt -> numéro_client ,
                            nouvel_emprunt -> tapez ,
                            nouvel_emprunt -> raison ,
                            nouvel_emprunt -> montant ,
                            nouvel_emprunt -> date_limite ,
                            nouvel_emprunt -> date_premier_remboursement );

        si ( résultat  <  0 ) {
            printf ( "Erreur lors de l'écriture dans le fichier.\n" );
        } autre {
            fclose ( fichier );
            printf ( "Le compte a été enregistré avec succès.\n" );
        }


}
autre {
        printf ( "Erreur lors de l'ouverture du fichier.\n" );
    }
        }

void_affichers  ( ListeEmprunts * liste )  {
    Emprunt  * courant  =  liste -> début ;

    while ( courant  !=  NULL ) {
        printf ( "Numéro : %ld, Type : %d, Montant : %.2f, Statut : %d\n" ,
               courant -> numéro , courant -> type , courant -> montant , courant -> statut );
        courant  =  courant -> suivant ;
    }
}
Emprunt  * rechercher_emprunt ( ListeEmprunts  * liste , long  numéro ) {
    Emprunt  * courant  =  liste -> début ;

    while ( courant  !=  NULL ) {
        if ( courant -> numéro  ==  numéro ) {
            retour  courant ;
        }
        courant  =  courant -> suivant ;
    }

    renvoie  NULL ;
}
// le fichier emprunt .h
    #ifndef  EMPRUNTER_H
    #définir  EMPRUNTER_H

    typedef enum { PRET_SCOLAIRE, PRET_INVESTISSEMENT, PRET_IMMOBILIER } TypeEmprunt;
    typedef  enum { EN_COURS , SOLDE } StatutEmprunt ;

    typedef  struct  Emprunt {
         numéro long ;
        TypeEmprunt  type ;
        long  numéro_client ;
        char  raison [ 100 ];
        double  montant ;
        char  date_limite [ 15 ];
        char  date_premier_remboursement [ 15 ];
        StatutEmprunt  statut ;
        struct  Emprunt  * suivant ;
    } Emprunter ;

     structure typedef {
        Emprunt  * débuts ;
    } ListeEmprunts ;

    void  initialiserListeEmprunts ( ListeEmprunts  * liste );
    void  solliciter_emprunt ( ListeEmprunts  * liste , Emprunt  * nouvel_emprunt );
    void  enregistrer_emprunt ( Emprunt  * nouvel_emprunt );
    void_affichers  ( ListeEmprunts * liste ) ; 
    Emprunt  * rechercher_emprunt ( ListeEmprunts  * liste , long  numero );

    #fin si
