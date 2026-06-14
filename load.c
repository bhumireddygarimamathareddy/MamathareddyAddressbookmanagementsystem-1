#include<stdio.h>
#include "contact.h"
void load() {
    FILE *fp = fopen("contacts.txt", "r");

    if(fp == NULL) {
        printf("No previous contacts found\n");
        return;
    }
    count = 0;   
    while(fscanf(fp, "%s %s %s",contacts[count].name,contacts[count].phone,contacts[count].email_com) == 3) {
        count++;   
    }
    fclose(fp);
    printf("Loaded %d contacts successfully\n", count);
}
