#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
       int val;
       struct node * next;
};
int main()
{
    int ch,c,flag=0;
    struct node *n,*head,*rear,*check,*prev;
    head=NULL;
    while(1)
    {
        printf("\n 1->insert 2->show 3->exit");
        scanf("%d",&ch);
    switch(ch)
    {
              case 1:
                   if(head==NULL)
                    {
                        n=(struct node *)malloc(sizeof(struct node));
                        printf("enter the element to insert ");
                        scanf("%d",&c);
                        rear=n;
                        n->val=c;
                        n->next=head;
                        head=n;
                    }
                   else
                   {
                    check=head;
                    printf("enter the element to insert");
                    scanf("%d",&c);
                    n=(struct node *)malloc(sizeof(struct node));
                    while(check!=NULL)
                    {
                         if(check->val>c)
                         {
                             if(check==head)
                              {
                                  n->val=c;
                                  n->next=head;
                                  head=n;
                                  break;
                              }
                              else
                              {
                                  n->val=c;
                                  n->next=prev->next;
                                  prev->next=n;
                                  break;
                              }
                         }
                         else
                         {
                             prev=check;
                             check=check->next;
                         }
                    }
                    if(check==NULL)
                    {
                         rear->next=n;
                         rear=n;
                         n->next=NULL;
                         n->val=c;
                    }
                   }
                   break;
              case 2:
                   check=head;
                   printf(" the elements are");
                   while(check!=NULL)
                    {
                         printf("\n%d",check->val);
                         check=check->next;
                    }
                   break;
              }
              if(ch==3) break;
    }
return 1;
}











