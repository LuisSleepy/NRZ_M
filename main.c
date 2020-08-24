#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int initSize = 5;
    char * str = (char *) malloc(initSize * sizeof(char));

    scanf("%s", str);

    // Initializing the description of the timing diagram
    // Same with the input size
    int len = strlen(str);
    int nrzm[len];

    // Idle state is high level
    int currLvl = 1;

    // Shifts the level when the input is 1
    for (int i = 0; i < len; i++) {
        switch (str[i]) {
            case '1':
                nrzm[i] = currLvl = -currLvl;
                break;
            case '0':
                 nrzm[i] = currLvl;
                 break;
            default:
                 break;
        }
    }

    // Displaying the output
    for (int i = 0; i < len; i++) {
        printf("%i ", nrzm[i]);
    }

    // Freeing up allocated memory
    free(str);

    return 0;
}
