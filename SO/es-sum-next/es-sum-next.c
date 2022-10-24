#include <string.h>
#include <stdio.h>

int main()
{

    int v1[10], v2[10], len = sizeof(v1)/sizeof(v1[0]);

    /* Popolo l'array v1 */
    for (int i = 0; i < len; i++)
    {
        printf("Inserisci il %d° numero: ", i+1);

        char s[sizeof(v1[0])];
        fgets(s, sizeof(s), stdin);
        v1[i] = atoi(s);
    }

    /* Calcolo la somma degli elementi da inserire in v2 */
    for (int i = 0; i < len; i++)
    {
        int sum = 0;

        for (int j = i; j < len; j++)
        {
            sum += v1[j];
        }

        v2[i] = sum;
    }

    /* Printo v2 */
    for (int i = 0; i < len; i++)
    {
        printf("Posizione %d = %d\n", i, v2[i]);
    }
    
    return 0;
    
}
