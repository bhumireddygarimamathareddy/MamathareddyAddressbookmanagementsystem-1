#include "contact.h"
#include<stdio.h>
#include<string.h>
void search_by_name(){
    char names[100];
    int found=0;
    printf("enter the name:");
    scanf(" %s",names);
    for(int i=0;i<count;i++){
        if(strcmp(names,contacts[i].name)==0){
            found=1;
            printf("contact is found\n");
            printf("---------------------------------------------\n");
            printf("%s     %s       %s\n",contacts[i].name,contacts[i].phone,contacts[i].email_com); 
            printf("------------------------------------------------\n");

        }
    }
        if(!found){
            printf("Not found");
        }

}
void search_by_phonenumber(){
    char phone[100];
    int found=0;
    printf("enter the phone number:\n");
    scanf("%s",phone);
    for(int i=0;i<count;i++){
        if(strcmp(phone,contacts[i].phone)==0){
            found=1;
            printf("contact is found");
            printf("---------------------------------------------\n");
            printf("%s     %s       %s\n",contacts[i].name,contacts[i].phone,contacts[i].email_com); 
            printf("------------------------------------------------\n");
            
        }
    }
        if(found==0){
            printf("Not found");
        }
    
}
void search_by_email(){
    char mail[100];
    int found=0;
    printf("enter the email:\n");
    scanf("%s",mail);
    for(int i=0;i<count;i++){
        if(strcmp(mail,contacts[i].email_com)==0){
            found=1;
            printf("contact is found:\n");
            printf("---------------------------------------------\n");
            printf("%s     %s       %s\n",contacts[i].name,contacts[i].phone,contacts[i].email_com); 
            printf("------------------------------------------------\n");

        }
    }
        if(found==0){
            printf("Not found");
        }
    
}
void search(){
    
    int n;
    printf("Enter the number how to be search:\n");
    
    printf("1. Search by Name\n");
    printf("2. Search by Phone Number\n");
    printf("3. Search by Email\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    switch(n){
        case 1:
            search_by_name();
        
             break;
        case 2:
            search_by_phonenumber();
            break;
        case 3:
            search_by_email();
            break;
        default:
            printf("please enter the valid\n");
    }
}