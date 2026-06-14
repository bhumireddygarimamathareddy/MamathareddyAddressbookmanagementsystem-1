

#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include "contact.h"


//extern int count;
//extern contact contacts[MAX];
int valid_name(char name[]){
    for(int i = 0; name[i] != '\0'; i++){
        if(!((name[i] >= 'A' && name[i] <= 'Z') ||
             (name[i] >= 'a' && name[i] <= 'z') ||
              name[i] == ' ')){
           return 0;
        }
    }
    return 1;   
}
int isDuplicate_name(char name[]){
      for(int i = 0; i < count; i++){
        if(strcmp(name, contacts[i].name) == 0){
            return 1;  
        }
    }
    return 0;
}


int valid_phone_number(char phone_number[]) {
    if(strlen(phone_number) != 10)
        return 0;

    for(int i = 0; phone_number[i] != '\0'; i++) {
        if(!isdigit(phone_number[i]))
            return 0;
    }
    return 1;
}


int isDuplicate_phone_number(char phone_number[]){
    for(int i = 0; i < count; i++){
        if(strcmp(phone_number, contacts[i].phone) == 0){
            return 1;  // duplicate found
        }
    }
    return 0;
}


int valid_email(char email_com[]){
    return strchr(email_com,'@') != NULL;
}
int isDuplicate_mail(char email_com[]){
      for(int i = 0; i < count; i++){
        if(strcmp(email_com, contacts[i].email_com) == 0){
            return 1;  
        }
    }
    return 0;
}
void create() {
    if(count >= MAX){
        printf("Already exists maximum contacts\n");
        return;
    }

    contact temp;

    // CREATING THE NAME
    do {
        printf("Enter the name: ");
        fgets(temp.name, sizeof(temp.name), stdin);
        temp.name[strcspn(temp.name, "\n")] = '\0';

        if(!valid_name(temp.name)){
            printf("Invalid name\nTry Again\n");
        } 
        else if(isDuplicate_name(temp.name)){
            printf("This name already exists\nTry Again\n");
        }
        else break;

    } while(1);

    //  CREATING THE PHONE NUMBER
    do {
        printf("Enter the phone number: ");
        fgets(temp.phone, sizeof(temp.phone), stdin);
        temp.phone[strcspn(temp.phone, "\n")] = '\0';

        if(!valid_phone_number(temp.phone)){
            printf("Invalid phone number!\nTry Again\n");
        }
        else if(isDuplicate_phone_number(temp.phone)){
            printf("This phone number already exists\nTry Again\n");
        }
        else break;

    } while(1);

    //  CREATING THE EMAIL
    do {
        printf("Enter the email: ");
        fgets(temp.email_com, sizeof(temp.email_com), stdin);
        temp.email_com[strcspn(temp.email_com, "\n")] = '\0';

        if(!valid_email(temp.email_com)){
            printf("Invalid email\nTry Again\n");
        } 
        else if(isDuplicate_mail(temp.email_com)){
            printf("This mail already exists\nTry Again\n");
        }
        else break;

    } while(1);

    //KNOWING THE CONTACT COUNT
    contacts[count] = temp;
    count++;

    printf("Contact is created successfully\n");
}


