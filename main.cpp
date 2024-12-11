#include "funzioniMenu.h"

int main() 
{
	Menu m;
	m.aggiungiVoce("INSERIMENTO");
	m.aggiungiVoce("STAMPA");
	m.aggiungiVoce("ESCI");
	
	do
	{
		
		m.stampaMenu();
		m.eseguiOperazione();
		
	}while(m.sceltaValida());
	
	
	return 0;
}
