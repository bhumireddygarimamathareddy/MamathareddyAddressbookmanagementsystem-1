#include<stdio.h>
#include "contact.h"
void save() {
    FILE *fp = fopen("contacts.txt", "w");

    if(fp == NULL) {
        printf("Error opening file\n");
        return;
    }

    for(int i = 0; i < count; i++) {
        fprintf(fp, "%s %s %s\n",
                contacts[i].name,
                contacts[i].phone,
                contacts[i].email_com);
    }

    fclose(fp);
    printf("The contacts are saved successfully\n");
}