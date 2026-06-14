#ifndef CONTACT_H
#define CONTACT_H

#define MAX 100

typedef struct{
    char name[100];
    char phone[100];
    char email_com[100];
} contact;

extern contact contacts[MAX];   
extern int count;  
void create();
void list();
void search();
void edit();
void delete_contact();
void save();
void load();             
#endif