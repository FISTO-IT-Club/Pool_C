#include <stdio.h>
#include <string.h>

void add_to_history(char history[5][50], char entry[50], int *count) {
	int i;
    if (*count < 5) {
        strcpy(history[*count], entry);
        (*count)++;
    } else {
        for (i = 1; i < 5; i++) {
            strcpy(history[i-1], history[i]);
        }
        strcpy(history[4], entry);
    }
}

void afficher_history(char history[5][50], int count) {
	int i;
    printf("\n=== HISTORIQUE (5 derniers calculs) ===\n");
    if (count == 0) {
        printf("Aucun historique disponible.\n");
    } else {
        for (i = 0; i < count; i++) {
            printf("%d) %s\n", i + 1, history[i]);
        }
    }
}

