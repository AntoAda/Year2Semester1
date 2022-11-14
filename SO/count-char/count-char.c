#include <stdio.h>
#include <string.h>

int main()
{
    char checked[256] = {0}, input[100];
    int i = 0, j = 0, found, counter;

    printf("Inserisci la stringa: ");
    fgets(input, sizeof(input), stdin);

    int len = strlen(input);

    for (i = 0; i < len && input[i] != '\n'; i++) {
        found = 0;
        counter = 0;

        for(j = 0; j < strlen(checked) && !found; j++) {
            found = (input[i] == checked[j]);
        }

        if(!found) {
            checked[strlen(checked)] = input[i];

            for(int k = i; k < strlen(input); k++) {
                if(input[k] == input[i]) counter++;
            }

            printf("%c -> %d\n", input[i], counter);
        }

    }
}
