#include <stdio.h>
#include <stdlib.h>

// Creiamo un piccolo minigioco  con domande a rispsota multipla, includiamo le librerie e impostaiamo le variabili

int main (){


int punteggio=0;
int numero_domanda=0;
int scelta;
int risposta;
int scelta_finale;
char nickname[20] = {'\0'};
// per l'inserimento del nome se  superiamo i caratteri che ci permette l'array ci da errore overload

     printf ("Benvenuto in questo mini gioco dove dovrai rispondere a delle domande a risposta multipla\n");
     printf ("inserisci 1 per una nuova partita\n inserisci 0 per uscire dal gioco\n");
     scanf  ("%d", &scelta);
     printf ("inserisci il tuo nome:\n");
     scanf  ("%s", &nickname);
/* inseriamo una funzione while così da far iniziare il ciclo delle nostre domande ed escludiamo anche che l'utente inserisca un numero diverso
da 1 o 0 dandogli la scritta errore
*/
    while  (scelta>1){
     printf ("errore\n inserisci 1 per una nuova partita\n inserisci 0 per uscire dal gioco\n");
     scanf  ("%d", &scelta);
}

    do { 
     if(scelta==0){exit;}
     if(scelta ==1){
      printf ("\ninizio del gioco %s!\n",nickname);
      printf ("\nrispondi inserendo il numero della risposta corretta\n");

/* per ogni domanda utilizziamo la funzione  if e  else con risposta errata diversa dal valore di quella giusta
cosi anche inserendo un numero non compreso nei valori offerti risulta come domanda sbagliata
*/
     printf ("\nDomanda 1: quale è la capitale d'Italia?\n 1Torino\n 2Roma\n 3Genova\n");
     scanf  ("%d", &risposta);
     if (risposta !=2){
     printf ("risposta errata\n");}
     else {
     printf ("risposta corretta\n");
     punteggio++;}

     printf("\nDomanda 2: quale è la capitale della Francia?\n 1Lione\n 2Marsiglia\n 3Parigi\n");
     scanf ("%d", &risposta);
     if (risposta!=3){
     printf ("risposta errata\n");}
     else{
     printf ("risposta corretta\n");
     punteggio++;}

     printf("\nDomanda 3: quale è la capitale del regno unito?\n 1Glasgow\n 2Londra\n 3Edimburgo\n");
     scanf ("%d", &risposta);
     if (risposta!=2){
     printf ("risposta errata\n");}
     else{
     printf ("risposta corretta\n");
     punteggio++;}
}

     printf ("\nhai totalizzato %d punti\n",punteggio);
     printf ("\nvuoi iniziare una nuova partita?\n inserisci 1 per una nuova partita\n se vuoi uscire inserisci 0\n");
     scanf  ("%d", &scelta_finale);
}
    while (scelta_finale==1);
}
// inseriamo una funzione while finale per far ripetere il ciclo una volta concluse le domande
