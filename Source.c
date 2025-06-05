#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#pragma warning(disable : 4996)
int option_choose = 5;



void adaugare(char path[]) {
FILE* filePointer = fopen(path, "r");

char NrId[3] = { 0 };

char c = fgetc(filePointer);

    while (c != '|') {
        c = fgetc(filePointer);

        if (isdigit(c) == true) {
            strcat(NrId, c);

            printf("%c", c);

        }
        
    }

    int size = strlen(NrId);

        
    printf("%s", NrId);

   

}


void afisare(char path[]) {
FILE* filePointer = fopen(path, "r");

system("cls");
printf("Citire date\n\n");
if (filePointer == NULL) {
    printf("Fisierul nu poate fi accesat.\n");
}
else {
    char c = fgetc(filePointer);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(filePointer);
    }

    fclose(filePointer);
}

}


int main() {
    char path[] = "C:\\Users\\admin\\Desktop\\C program\\date.txt";


    while (true) {

        
        if (option_choose == 5) {
            system("cls");
            printf("Rezervari hotel meniu\n");

            printf("[1] Citire date\n");
            printf("[2] Rezervare hotel\n");
            printf("[3] Optiunea 3\n");
            printf("[4] Optiunea 4\n");

            scanf("%d", &option_choose);
        }


        else if (option_choose == 1) {

            afisare(path);

            printf("\nApasati [5] ca sa va intoarceti inapoi la meniul principal.\n");
          

            while (option_choose != 5){
                scanf("%d", &option_choose);
                printf("Eroare: utilizatorul a apasat alt numar in afara de [5] pentru a se intoarce la meniul principal.\n");
            }
        }
        else if (option_choose == 2) {
            system("cls");
            printf("Rezervare hotel\nApasati [5] ca sa va intoarceti inapoi la meniul principal.\n");
            while (option_choose != 5) {
                scanf("%d", &option_choose);
                printf("Error: trying to use different number other than 5 to exit.");
            }
        }
        else if (option_choose == 3) {
            system("cls");
            printf("Optiunea 3\nApasati [5] ca sa va intoarceti inapoi la meniul principal.\n");
            while (option_choose != 5) {
                scanf("%d", &option_choose);
                printf("Error: trying to use different number other than 5 to exit.");
            }
        }
        else if (option_choose == 4) {
            system("cls");
            printf("Optiunea 4\nApasati [5] ca sa va intoarceti inapoi la meniul principal.\n");
            while (option_choose != 5) {
                scanf("%d", &option_choose);
                printf("Error: trying to use different number other than 5 to exit.");
            }
        }
        else if (option_choose == 5) {
            system("cls");
            printf("Optiunea 5\nApasati [5] ca sa va intoarceti inapoi la meniul principal.\n");
            while (option_choose != 5) {
                scanf("%d", &option_choose);
                printf("Error: trying to use different number other than 5 to exit.");
            }
        }


    }


    return 0;
}