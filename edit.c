#include<stdio.h>
#include<string.h>
#include "contact.h"
     void edit_by_name() {
    char old_name[100], new_name[100];
    int found = 0;

    printf("Enter the name to edit: ");
    scanf("%s", old_name);

    for(int i = 0; i < count; i++) {
        if(strcmp(old_name, contacts[i].name) == 0) {
            found = 1;

            printf("Enter new name: ");
            scanf("%s", new_name);

            strcpy(contacts[i].name, new_name);

            printf("Name updated successfully!\n");
            break;
        }
    }

    if(!found) {
        printf("Contact not found\n");
    }
}
void edit_by_phone_number(){
    char old_phone_number[100], new_phone_number[100];
    int found = 0;

    printf("Enter the number to edit: ");
    scanf("%s", old_phone_number);

    for(int i = 0; i < count; i++) {
        if(strcmp(old_phone_number, contacts[i].phone) == 0) {
            found = 1;

            printf("Enter new number: ");
            scanf("%s", new_phone_number);

            strcpy(contacts[i].phone, new_phone_number);

            printf("phone number updated successfully!\n");
            break;
        }
    }

    if(!found) {
        printf("Contact not found\n");
    }
}
void edit_by_email(){
    char old_mail[100], new_mail[100];
    int found = 0;

    printf("Enter the mail to edit: ");
    scanf("%s", old_mail);

    for(int i = 0; i < count; i++) {
        if(strcmp(old_mail, contacts[i].email_com) == 0) {
            found = 1;

            printf("Enter new mail: ");
            scanf("%s", new_mail);

            strcpy(contacts[i].email_com, new_mail);

            printf("email updated successfully!\n");
            break;
        }
    }
}
void edit(){
    int m;
    printf("how to you want to edit:\n");
    scanf("%d",&m);
    switch(m){
        case 1:
             edit_by_name();
             break;
        case 2:
             edit_by_phone_number();
             break;
        case 3:
             edit_by_email();
             break;
        default: 
             printf("please enter the valid choice");

    }
}