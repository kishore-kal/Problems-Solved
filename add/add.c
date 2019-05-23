//ADDING 2 NUMBERS IN LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
  struct ListNode *next;
  int val;
};
int main()
{
  //printf("Hello World");
  struct ListNode *first=NULL,*second=NULL;
  //*head= NULL;
  insert(&first,9);
  insert(&first,1);
  insert(&first,2);
  insert(&first,3);
  
  insert(&second,1);
  insert(&second,1);
  insert(&second,1);

  display(first);
  display(second);
  
  printf("\nSum of numbers");
  add(first,second);
  
  return 0;
}
add(struct ListNode *a,struct ListNode *b){
    int carry=0,sum,A,B;
    struct ListNode *c;
    c = NULL;
    while(a!=NULL || b!=NULL){
    //    while(1){
        if(a!=NULL)
        A = a->val;
        else A = 0;
        if(b!=NULL)
        B = b->val;
        else B = 0;
        sum = (int)(A + B + carry);
        carry = sum/10;
        insert(&c,sum%10);
        if(a!=NULL)
        a = a->next;
        if(b!=NULL)
        b = b->next;
        printf("1");
        //if(a==NULL && b==NULL) break;
    }
    if(carry==1){
        insert(&c,1);
    }
    display(c);

}
insert(struct ListNode **q, int val)
{
  struct ListNode *temp,*r;
  temp = *q;
  if (temp == NULL)
    {
      temp=(struct ListNode *) malloc (sizeof (struct ListNode));
      temp->val = val;
      temp->next = NULL;
      *q=temp;
    }
    else{
        r = (struct ListNode *)malloc(sizeof(struct ListNode));
        
        while(temp->next !=NULL){
            temp = temp->next;
        }
        r ->val = val;
        temp->next = r;
        r->next = NULL;
    }

}
display(struct ListNode *p){
    printf("\n");
    while(p != NULL){
        printf("%d->",p->val);
        p = p->next;
    }
    printf("NULL");
}

