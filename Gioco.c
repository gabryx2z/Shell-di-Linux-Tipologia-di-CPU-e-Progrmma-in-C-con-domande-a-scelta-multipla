#include <stdio.h>
#include <stdlib.h>

int main (){


int punteggio=0;
int numero_domanda=0;
int scelta;
int risposta;
int scelta_finale;
char nickname;

printf ("Benvenuto in questo mini gioco dove dovrai rispondere a delle domande a risposta multipla\n");
printf ("inserisci 1 per una nuova partita\n inserisci 0 per uscire dal gioco\n");
scanf  ("%d", &scelta);
while  (scelta>1){
printf ("errore\n inserisci 1 per una nuova partita\n inserisci 0 per uscire dal gioco\n");
scanf  ("%d", &scelta);
}

do {
if(scelta==0){exit;}
if(scelta ==1){
printf ("inizio del gioco\n rispondi selezionando il numero della risposta corretta\n");
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

printf ("hai totalizzato %d punti",punteggio);
printf ("se vuoi iniziare una nuova partita inserisci 1\n se vuoi uscire premere 0\n");
scanf  ("%d", &scelta_finale);
}
while (scelta_finale==1);
}
