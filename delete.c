#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include "contact.h"
 //extern int  count;
void delete_by_name(){
    char names[100];
    int found=0;
    printf("enter the name:");
    scanf(" %s",names);
    for(int i=0;i<count;i++){
        if(strcmp(contacts[i].name,names)==0){
            found=1;
            for(int j=i;j<count-1;j++){
                 contacts[j]=contacts[j+1];
            }
        
        count--;
        printf("Contact is deleted successfully\n");
        break;
        }
    }
        if(!found){
            printf("conatct is not found");

        }
    

}
void delete_by_phone_number(){
    char number[100];
    int found=0;
    printf("Enter the phonenumber");
    scanf(" %s",number);
    for(int i=0;i<count;i++){
        if(strcmp(contacts[i].phone,number)==0){
            found=1;
            for(int j=i;j<count-1;j++){
                contacts[j]=contacts[j+1];
            }
        
            
        count--;
        printf("Contact is deleted successfully\n");
        break;
        }
    }
        if(!found){
            printf("conatct is not found");

        }

        

}
void delete_by_mail(){
    char mail[100];
    int found=0;
    printf("Enter the mail");
    scanf(" %s",mail);
    for(int i=0;i<count;i++){
        if(strcmp(contacts[i].email_com,mail)==0){
            found=1;
             for(int j=i;j<count-1;j++){
                 contacts[j]=contacts[j+1];
             }
             count--;
              printf("Contact is deleted successfully\n");
              break;
        }
    }
        if(!found){
            printf("conatct is not found");
        }

}
void delete_contact() {
    int n;

    printf("\n--- Delete Contact ---\n");
    printf("1. Delete by Name\n");
    printf("2. Delete by Phone Number\n");
    printf("3. Delete by Email\n");
    printf("Enter your choice: ");
    
    scanf("%d", &n);

    switch(n){
        case 1:
            delete_by_name();
            break;
        case 2:
            delete_by_phone_number();
            break;
        case 3:
            delete_by_mail();
            break;
        default:
            printf("Please enter a valid option\n");
    }
}