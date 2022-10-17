/* Manca l'import di stdio */
#include <stdio.h>
#include <string.h>

/* Codice che concatena le due stringhe v1 e v2 */
int main()
{
	/* Mancano i ; */
	char v1[10] = "Prima,";
	char v2[10] = " dopo";
	int len1, len2, i;

	/* Lunghezza delle due stringhe */
	len1 = sizeof(v1);
	len2 = sizeof(v2);

	/* Conto i caratteri della prima stringa per usarlo come offset*/
	int l = len1 - strlen(v1);

	/* Stampa delle due stringhe */
	/* Tipo d errato: per le stringhe si usa %s */
	printf("%s\n", v1);
	printf("%s\n", v2);

	/* Copia la seconda stringa alla fine della prima */
	/* Devo farlo dalla posizione del terminatore, altrimenti saranno due stringhe diverse */
	for (i = 0; i < len2; i++)
		v1[len1 - l + i] = v2[i];

	/* Stampa la stringa concatenata */
	/* Tipo d errato: per le stringhe si usa %s */
	printf("%s\n", v1);
}
