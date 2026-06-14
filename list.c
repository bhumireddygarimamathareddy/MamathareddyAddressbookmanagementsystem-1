#include<stdio.h>
#include<string.h>
#include "contact.h"

void sort_contacts(){
    for(int i=0;i<count;i++){
        for(int j=0;j<count-i-1;j++){
            if(strcmp(contacts[j].name,contacts[j+1].name)>0){
                contact temp=contacts[j];
                contacts[j]=contacts[j+1];
                contacts[j+1]=temp;
            }
        }
    }
}
void list() {
    if(count == 0) {
        printf("No contacts available\n");
        return;
    }

    sort_contacts();

    printf("---------------------------------------------------------------\n");
    printf("S.No    Name            Phone           Email\n");
    printf("---------------------------------------------------------------\n");

    for(int i = 0; i < count; i++) {
        contacts[i].name[strcspn(contacts[i].name, "\n")] = '\0';
        contacts[i].phone[strcspn(contacts[i].phone, "\n")] = '\0';
        contacts[i].email_com[strcspn(contacts[i].email_com, "\n")] = '\0';
        printf("%-5d %-15s %-15s %-25s\n",i + 1,contacts[i].name,contacts[i].phone,contacts[i].email_com);
    }

    printf("---------------------------------------------------------------\n");
    printf("Total Contacts: %d\n", count);
}