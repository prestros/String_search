// Programm zum Zählen von Zeichen in einer Zeichenkette
// Autor: Fabian Prestros
// Datum: 20.11.2020
#include <stdio.h>
#include <string.h>

int main()
{
	char Zeichenkette[100];
	char Zeichen;
	int Anzahl = 0;
	
	printf("Bitte geben Sie eine Zeichenkette (max. 100 Zeichen) ein: ");
	gets_s(Zeichenkette, 100);																			// Zeichenkette einlesen
	printf("\n");
	printf("Bitte geben Sie das Zeichen ein, von denen Sie wissen wollen, wie oft es enthalten ist: ");
	Zeichen = getchar();																				// Gesuchtes Zeichen einlesen
	printf("\n");

	for (int i = 0; i < 100; i++)																		// String nach dem Zeichen durchsuchen
	{
		if (Zeichenkette[i] == Zeichen)																	// Wenn Zeichen gefunden, dann wird die Zählvariable um 1 erhöht.
			Anzahl++;
	}

	printf("Das Zeichen \"%c\" ist %dx enthalten.\n", Zeichen, Anzahl);									// Ausgabe der Anzahl des gesuchten Zeichens.
}