L’objectif de ce projet de combiner l’ensemble des connaissances acquises durant le semestre 1 en
Langage C avanc´e afin de r´esoudre un probl`eme de la vie courante en produisant une application
op´erationnelle. L’´etudiant sera ´evalu´e sur sa capacit´e `a ´ecrire du code en langage C avec les outils
avanc´es. Il devra ainsi produire une application console. L’´etudiant devra ˆetre assez imaginatif, se
plonger en situation r´eelle en se posant des questions sur les attentes d’un client.
L’objectif `a traiter dans ce travail pratique est celui construction d’un mini syst`eme de gestion
d’une banque avec l’impl´ementation de plusieurs op´erations ´el´ementaires que l’on retrouve `a savoir
la cr´eation d’un compte, le cr´editer, ou le d´ebiter, les emprunts, les remboursements d’emprunt, le
blocage/d´eblocage de compte, le virement d’un compte `a un autre, etc ...
Un client est caract´eris´e par un num´ero (de pr´ef´erence celui de la carte nationale d’identit´e), son
nom, son pr´enom, son genre, sa date et lieu de naissance de naissance, sa profession. En ouvrant un
compte, celui-ci peut ˆetre caract´eris´e par un num´ero, le type de compte (´epargne, courant), le client
propri´etaire, le solde et son ´etat (BLOQUE ou LIBRE), un compte BLOQUE ne peut plus r´ealiser
aucune op´eration et celui LIBRE peut tout faire. Un client peut solliciter un emprunt dans la
banque auquel cas, l’emprunt sera caract´eris´e par un num´ero, le type d’emprunt (prˆet scolaire, prˆet
investissement, prˆet immobilier, ), le num´ero du client qui le fait, la raison de l’emprunt, le montant
du prˆet, la date limite de remboursement, la date pr´evue du premier remboursement, le statut (EN
COURS ou SOLD´E), un emprunt est EN COURS s’il n’a pas encore ´et´e rembours´e c’est-`a-dire, le
montant de tous ses remboursements est inf´erieur `a la somme emprunt´e, dans le cas contraire il
passe au statut SOLD´E. Un client peut rembourser ses emprunts, dans ce cas un remboursement
est caract´eris´e par un num´ero, le num´ero du client associ´e, le montant du remboursement, la date
de remboursement. Lorsque le client a termin´e ses remboursements, l’emprunt prend le statut de
SOLD´E.
On souhaite donc r´ealiser les op´erations suivantes (liste non exhaustive) :
• Enregistrer un nouveau client
• Modifier un client existant
• Rechercher un client
• Solliciter un emprunt (un client ne peut emprunter que s’il n’a pas d’emprunt encours)
• Effectuer un virement compte `a compte
1
• Savoir quels sont les clients avec un compte bloqu´e
• Effectuer un remboursement
• Effectuer le d´eblocage du compte (qui consiste `a le rendre LIBRE)
• etc ...
Afin de rendre plus attrayante votre application, pensez `a sauvegarder les informations de chaque
session dans des fichiers.
1. Un fichier clients.txt qui contiendra les informations sur tous les clients de la banque.
2. Un fichier comptes.txt qui contiendra les informations sur l’ensemble des compte de la
banque.
3. Un fichier emprunts.txt qui contiendra l’ensemble des information sur les emprunts effectu
´es.
4. Un fichier remboursements.txt sur l’ensemble des remboursements.
Pour la gestion des fichiers, il est fortement recommander de bien formater le contenu. Une
structure possible est la suivante pour le fichier de client.txt : Chaque ligne est un produit :
1027848451 | MANAYA | JUSTINE | F | 20/12/2001 | YAOUNDE | COMPTABLE
1597412058 | TCHIENTIEU | MARCO | M | 07/07/1997 | DOUALA | GRAPHISTE PRO
o`u le premier client a pour num´ero 1027848451, son nom est MANAYA, son pr´enom est
JUSTINE, son genre est F pour f´eminin (masculin est M), sa date de naissance est 20/12/2001,
son lieu de naissance est YAOUND´E et sa profession est COMPTABLE. Faire pareil pour
les autres fichiers, imaginer votre propre structure ou formatage. Pour la lecture dans le fichier,
informez-vous comment faire le Split d’une chaine de caract`eres.
Modalit´e de livraison du travail:
• Vous devez utiliser les listes chain´ees pour r´ealiser le travail.
• Les projets seront r´ealis´es en groupe, d´epos´e sur GitHub, chaque ´etudiant du groupe devra
obligatoirement contribuer `a la r´ealisation du projet sinon la note 0 lui sera attribu´ee.
• Le d´elai de livraison est de 3 semaines `a partir de la date de r´eception.
• Chaque groupe devra exposer son travail, le jour de pr´esentation sera fix´e au pr´ealable.
• Utiliser la compilation s´epar´ee ¸ca veut dire vous devez avoir un Makefile et les fichiers .h et
.c de votre projet.
• La note de TP compte pour 50% de la note finale de l’examen.
Remarque: Pour toute ´eventuelle question, bien vouloir contacter l’examinateur M. Samuel
NYOBE (samuel.nyobe@facsciences-uy1.cm).
