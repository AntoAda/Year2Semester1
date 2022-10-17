#include <stdio.h>
#include <string.h>

int main()
{

    int array[7], len = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < len; i++)
    {
        printf("Inserisci il %d° numero: ", i + 1);

        char s[sizeof(array[0])];

        fgets(s, sizeof(s), stdin);
        array[i] = strtol(s, NULL, 10);
    }

    for (int i = 1; i < len; i+=2)
    {
        printf("%d   ", array[i]);
    }
    
    for (int i = 0; i < len; i+=2)
    {
        printf("%d   ", array[i]);
    }
    

    return 0;
}
