#include<stdio.h>
#include "contact.h"
contact contacts[MAX];
int count;
int main() {
    int choice;
    load();
    printf("\"THE LIST OF FILES AVAILABLE IN THE ADDRESS BOOK\"\n");
    while (1) {
        printf("----------------------------------\n");
        printf("  1. Create the Contact\n");
        printf("  2. Search the Contact\n");
        printf("  3. Edit   the Contact\n");
        printf("  4. Delete the Contact\n");
        printf("  5. List   the Contacts\n");
        printf("  6. Save and Exit\n");
        printf("----------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("--- Create Contact ---\n");
                create();
                break;
            case 2:
                printf("--- Search Contact ---\n");
                search();
                break;
            case 3:
                printf("--- Edit Contact ---\n");
                search();
                edit();
                break;
            case 4:
                printf("--- Delete Contact ---\n");
                search();
                delete_contact();
                break;
            case 5:
                printf("--- List Contacts ---\n");
                list();
                break;
            case 6:
                printf("Saving and exiting...\n");
                save();  
                return 0;          
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    }

    return 0;
}