#include "funzioniMenu.h"

int main() 
{
	Menu m;
	m.aggiungiVoce("INSERISCI STUDENTE");
	m.aggiungiVoce("STAMPA ARRAY STUDENTE");
	m.aggiungiVoce("ORDINA ARRAY STUDENTE");
	m.aggiungiVoce("RICERCA STUDENTE");
	m.aggiungiVoce("ELIMINA STUDENTE");
	m.aggiungiVoce("ESCI DAL PROGRAMMA");
	
	do
	{
		
		m.stampaMenu();
		m.eseguiOperazione();
		
	}while(m.sceltaValida());
	
	
	return 0;
}
