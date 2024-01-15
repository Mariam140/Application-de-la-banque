#include  "client.h"
#include  <stdio.h>
#include  <stdlib.h>

void  initialiserListeClients ( ListeClients  * liste ) {
    liste -> début  =  NULL ;
}

void  enregistrer_client ( ListeClients  * liste , Client  * nouveau_client ) {
    nouveau_client -> suivant  =  liste -> début ;
    liste -> début  =  nouveau_client ;
}
void  enregistrer_client_dans_fichier ( Client  * nouveauClient ){
    FICHIER  * fichier ;
    fichier  =  fopen ( "clients.txt" , "a" );
    if ( fichier  !=  NULL ){
        int  résultat  =  fprintf ( fichier , "%ld %s %s %c %s %s %s\n" ,
                            nouveauClient -> numéro ,
                            nouveauClient -> nom ,
                            nouveauClient -> prenom ,
                            nouveauClient -> genre ,
                            nouveauClient -> date_naissance ,
                            nouveauClient -> lieu_naissance ,
                            nouveauClient -> métier );
        si ( résultat  <  0 ) {
            printf ( "Erreur lors de l'écriture dans le fichier.\n" );
        } autre {
            fclose ( fichier );
            printf ( "Le client a été enregistré avec succès.\n" );
        }
    } autre {
        printf ( "Erreur lors de l'ouverture du fichier.\n" );
    }
}

void  modifier_client ( ListeClients  * liste , numéro long  ) {
    Client  * courant  =  liste -> début ;

    while ( courant  !=  NULL ) {
        if ( courant -> numéro  ==  numéro ) {
            printf ( "Modification du client %ld :\n" , numéro );

            printf ( "Nouveau nom : " );
            scanf ( "%s" , courant -> nom );

            printf ( "Nouveau prénom : " );
            scanf ( "%s" , courant -> prenom );

            printf ( "Nouveau genre (H/F) : " );
            scanf ( " %c" , & courant -> genre );

            printf ( "Nouvelle date de naissance (JJ/MM/AAAA) : " );
            scanf ( "%s" , courant -> date_naissance );

            printf ( "Nouveau lieu de naissance : " );
            scanf ( "%s" , courant -> lieu_naissance );

            printf ( "Nouveau métier : " );
            scanf ( "%s" , courant -> profession );

            printf ( "Modification effectuée avec succès.\n" );
            retour ;
        }
        courant  =  courant -> suivant ;
    }

    printf ( "Aucun client trouvé avec le numéro %ld\n" , numéro );
}

Client *  rechercher_client ( ListeClients  * liste , numéro long  ) {
    Client  * courant  =  liste -> début ;

    while ( courant  !=  NULL ) {
        if ( courant -> numéro  ==  numéro ) {
            retour  courant ;
        }
        courant  =  courant -> suivant ;
    }

    renvoie  NULL ;
}
