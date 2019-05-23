#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node Node;
struct node{
    int data;
    struct node *next; 
};
int main(){
    struct node *ptr;
    ptr = NULL;
    append(&ptr,11);
    append(&ptr,3);
    append(&ptr,5);
    append(&ptr,83);

    display(ptr);
    
    addatbeg(&ptr,999);
    addatbeg(&ptr,43);
    
    display(ptr);

    addafter(ptr,7,0);
    addafter(ptr,2,1);
    addafter(ptr,1,99);

    display(ptr);

    delete(&ptr,999);

    display(ptr);

    return 0;
}
append(struct node **q,int data){
    struct node *temp,*r;
    temp = *q;
    if(temp==NULL){
        temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        *q = temp;
    }
    else{
        temp = *q;
        while(temp->next != NULL){
            temp = temp->next;
        }
        r = malloc(sizeof(struct node));
        r -> data = data;
        r -> next = NULL;
        temp -> next = r;
    }
}
display(struct node *q){
    struct node *temp;
    temp = q;
    printf("\n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp = temp -> next;
    }
    printf("NULL");
    
}
addatbeg(struct node **q,int data){
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = *q;
    *q = temp;
}
addafter(struct node *q,int position,int data){
    struct node *temp,*r;
    int i=0;
    temp = q;
    
    while(temp->next!=NULL){
        i++;
        if(i==position){
            r = malloc(sizeof(struct node));
            r -> data = data;
            r -> next = temp -> next;
            temp -> next = r;
        }
        temp = temp -> next;
        
    }
}
delete(struct node **q,int tobedel){
    struct node *temp,*old;
    temp = *q;
    if(temp->data == tobedel) *q = temp -> next;
    else{
        old = temp;
        temp = old->next;
        while(temp->next!=NULL){
            if(temp->data == tobedel){
                old->next = temp->next;
            }
            old = old->next;
            temp = temp->next;
        }
    }
}