#include "stdio.h"

char nume[20][20];
char prenume[20][20];
char adress[20][30];
char telefon[20][15];
float suma[20];
int nrComenzi = 0;

void plaseaza() {
	if (nrComenzi < 20) {
		printf("Numele: ");
		scanf("%s", nume[nrComenzi]);
		printf("Prenume: ");
		scanf("%s", prenume[nrComenzi]);
		printf("Adresa: ");
		scanf("%s", adress[nrComenzi]);
		printf("Suma: ");
		scanf("%f", &suma[nrComenzi]);
		nrComenzi++;
	} else {
		printf("Nu puteti introduce mai mult de 20 de comenzi\n");
		return ;
	}
	int option;
	printf("1) Mai doresc o comanda\n2) Inapoi\n");
	scanf("%d", &option);
	if (option == 1)
		plaseaza();
}

void client() {
	int option;
	do {
		printf("1) Plaseaza comanda\n2) Scrie un comentariu\n3) Iesire\n");
		scanf("%d", &option);
		if (option == 1)
			plaseaza();
		else if (option == 2)
			return;
		else
			return;
	} while (option);
}

void afisare() {
	for (int i = 0; i < nrComenzi; i++) {
		printf("Comanda %d:\nNumle: %s\nPrenumele: %s\nAdresa: %s\nSuma: %f\n----------------\n", i+1, nume[i], prenume[i], adress[i], suma[i]);
	}
}

void curier() {
	int option;
	do {
		printf("1) Afiseaza toate comenzile\n2) Livraza o comanda\n");
		scanf("%d\n", &option);
		if (option == 1)
			afisare();
		else if (option == 2)
			printf("livrata\n");
		else
			option = 0;
	} while (option);
}

int main() {
	int option;
	do {
		printf("1) Client\n2) Curier\n3) Iesire\n");
		scanf("%d", &option);
		if (option == 1)
			client();
		else if (option == 2)
			curier();
		else {
			printf("Introduceti cifra 1 pentru client si 2 pentru curier si 3 pentru iesire din program\n");
			option = 0;
		}
	} while (option);
}
