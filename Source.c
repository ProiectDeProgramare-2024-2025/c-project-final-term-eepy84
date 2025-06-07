#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

int option_choose = 5;



int input_validare(int* validation) {

    while (*validation != 5) {
        scanf("%d", &option_choose);

        printf("ERROR: the user has pressed something else other than \033[1;31m[5]\033[0m to return back.\n");
    }

    return *validation;

}

/*void stergere(char path[]) {
    FILE* filePointer1 = fopen(path, "r");
    FILE* filePointer2 = fopen("C:\\Users\\admin\\Desktop\\C program\\date2.txt", "a");


    char sameNumber[4] = { 0 };
    char buffer[50];
    int selection = 0;
    int String_to_integer;
    int counter = 0;
    printf("Which hotel room reservation do you want to delete? (Type in the room's ID)");
        scanf("%d", &selection);

    if (filePointer1 == NULL) {
        printf("No file has been found.\n");
    }
    else {
        char c = fgetc(filePointer1);

        while( c != '|') {

            if (isdigit(c) == 0) {}
            else {

                sameNumber[counter] = c;
                counter++;

            }
            String_to_integer = atoi(SameNumber);
            if ( ){

                fgets(buffer, sizeof(buffer), filePointer1) != NULL);

                fprintf(filePointer2, buffer);
            }


        while (c != EOF) {

            printf("%c", c);

            c = fgetc(filePointer2);
        }


}*/


void adaugare(char path[]) {
    FILE* filePointer = fopen(path, "r");

    int number = 0;

    struct hotelRoom {
        int ID;
        int numberPeople;
        int days;
    };

    struct hotelRoom HotelRoom;

    system("cls");
    printf("BOOKING\n\n");

    char NrId[4] = { 0 };
    char buffer[50];

    if (filePointer == NULL) {
        printf("No file has been found.");
    }
    else {
        while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {}

        for (int i = 0; buffer[i] != '|' && buffer[i] != '\0'; i++) {

            if (isdigit(buffer[i]) == 0) {}
            else {

                NrId[number] = buffer[i];
                number++;

            }

        }

        fclose(filePointer);

        HotelRoom.ID = atoi(NrId);

        HotelRoom.ID++;

        FILE* filePointer = fopen(path, "a");

        printf("Please enter your booking information. (Number of people \\ days)\n\n>>>");
        scanf("%d", &HotelRoom.numberPeople);
        printf(">>>");
        scanf("%d", &HotelRoom.days);

        fprintf(filePointer, "\nID_Camera: %d | Nr_Persoane: %d | Zile: %d | ", HotelRoom.ID, HotelRoom.numberPeople, HotelRoom.days);

        fclose(filePointer);

    }

}


void afisare(char path[]) {
    FILE* filePointer = fopen(path, "r");

    system("cls");
    printf("VIEW\n\n");

    if (filePointer == NULL) {
        printf("No file has been found.\n");
    }
    else {
        char c = fgetc(filePointer);

        while (c != EOF) {

            printf("%c", c);

            c = fgetc(filePointer);
        }
        printf("\n");
        fclose(filePointer);

    }

}


int main() {
    char path[] = "C:\\Users\\admin\\Desktop\\C program\\date.txt";

    while (true) {

        if (option_choose == 5) {

            system("cls");
            printf("Hotel reservation menu\n");

            printf("\033[1;31m[1]\033[0m VIEW: List of booked hotel rooms\n");
            printf("\033[1;31m[2]\033[0m BOOK: Room reservaztion\n");
            printf("\033[1;31m[3]\033[0m Option 3\n");
            printf("\033[1;31m[4]\033[0m Option 4\n");

            scanf("%d", &option_choose);
        }


        else if (option_choose == 1) {

            afisare(path);

            printf("\nPress \033[1;31m[5]\033[0m to return back.\n\n");

            input_validare(&option_choose);

        }
        else if (option_choose == 2) {

            adaugare(path);

            printf("\nPress \033[1;31m[5]\033[0m to return back.\n\n");

            input_validare(&option_choose);

        }
        else if (option_choose == 3) {

            system("cls");

            printf("\nPress \033[1;31m[5]\033[0m to return back.\n\n");

            input_validare(&option_choose);
        }
        else if (option_choose == 4) {

            system("cls");

            printf("\nPress \033[1;31m[5]\033[0m to return back.\n\n");

            input_validare(&option_choose);
        }
        else if (option_choose == 5) {

            system("cls");

            printf("\nPress \033[1;31m[5]\033[0m to return back.\n\n");

            input_validare(&option_choose);
        }


    }

    return 0;
}