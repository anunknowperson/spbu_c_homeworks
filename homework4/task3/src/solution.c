#include "solution.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_RECORDS 100
#define NAME_LENGTH 50
#define PHONE_LENGTH 15

typedef struct {
    char name[NAME_LENGTH];
    char phone[PHONE_LENGTH];
} Record;

Record directory[MAX_RECORDS];
int recordCount = 0;

void addRecord() {
    if (recordCount >= MAX_RECORDS) {
        printf("Directory is full!\n");
        return;
    }

    printf("Enter name: ");
    scanf("%49s", directory[recordCount].name);
    printf("Enter phone number: ");
    scanf("%14s", directory[recordCount].phone);
    recordCount++;
}

void printRecords() {
    for (int i = 0; i < recordCount; i++) {
        printf("Name: %s, Phone: %s\n", directory[i].name, directory[i].phone);
    }
}

void findNumberByName(const char *name) {
    for (int i = 0; i < recordCount; i++) {
        if (strcmp(directory[i].name, name) == 0) {
            printf("Phone number: %s\n", directory[i].phone);
            return;
        }
    }
    printf("Name not found.\n");
}

void findNameByNumber(const char *phone) {
    for (int i = 0; i < recordCount; i++) {
        if (strcmp(directory[i].phone, phone) == 0) {
            printf("Name: %s\n", directory[i].name);
            return;
        }
    }
    printf("Phone number not found.\n");
}

void saveToFile() {
    FILE *file = fopen("telephone_directory.txt", "w");
    if (file == NULL) {
        printf("Failed to open the file for writing.\n");
        return;
    }

    for (int i = 0; i < recordCount; i++) {
        fprintf(file, "%s %s\n", directory[i].name, directory[i].phone);
    }

    fclose(file);
    printf("Data saved successfully.\n");
}

void loadFromFile() {
    FILE *file = fopen("telephone_directory.txt", "r");
    if (file == NULL) {
        return;
    }

    while (fscanf(file, "%49s %14s", directory[recordCount].name, directory[recordCount].phone) == 2) {
        recordCount++;
        if (recordCount == MAX_RECORDS) break;
    }

    fclose(file);
}


int run(int argc, char *argv[])
{

    loadFromFile();

    int choice;
    char inputName[NAME_LENGTH];
    char inputPhone[PHONE_LENGTH];

    do {
        printf("\n0 - Exit\n1 - Add Record\n2 - Print All Records\n3 - Find Phone Number by Name\n4 - Find Name by Phone Number\n5 - Save to File\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRecord();
                break;
            case 2:
                printRecords();
                break;
            case 3:
                printf("Enter name: ");
                scanf("%49s", inputName);
                findNumberByName(inputName);
                break;
            case 4:
                printf("Enter phone number: ");
                scanf("%14s", inputPhone);
                findNameByNumber(inputPhone);
                break;
            case 5:
                saveToFile();
                break;
        }
    } while (choice != 0);

	printf("\nPress any key to exit...");

	getch();

	return 0;
}
