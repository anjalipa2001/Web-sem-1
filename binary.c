#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
};
struct node *root=NULL,*ptr=NULL,*new=NULL,*ptr1=NULL;

void insert();
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
void search(struct node *ptr);
void main()
{
   int opt;
   do
    {
       printf("\n enter your choice:\n1.insert \n2.inorder \n3.preorder \n4.postorder \n 5.search \n6.exit");
       scanf("%d",&opt);
       switch(opt)
	{
          case 1: insert();
		  break;
	  case 2: inorder(root);
		  break;
	  case 3: preorder(root);
		  break;
	  case 4: postorder(root);
		  break;
          case 5: search(root);
		  break;
	  case 6: exit(0);
                  break;
          default : printf("Invalid");	
	}
    }
   while(opt!=6);
}

void insert()
{
    int key;
    new=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the data to be inserted:");
    scanf("%d",&key);
    if(new==NULL)
	{
	  printf("insufficient memory");
	}
    else
	{
	  new->prev=NULL;
	  new->next=NULL;
          new->data=key;
	  if(root==NULL)
	     {
                root=new;          
             }
	  else{
          ptr=root;
	  while(ptr!=NULL)
          {
	  if(key==ptr->data)
	    {
		printf("item present in the tree");
		break;
	    } 
	  else if(key>ptr->data)
		{
                  ptr1=ptr;
		  ptr=ptr->next;		
		}
	       else
		{
			ptr1=ptr;
			ptr=ptr->prev;
		}
	  }
      
     if(ptr==NULL)
	{
          if(key>ptr1->data)
		ptr1->next=new;
	  else
		ptr1->prev=new;
	}
	}
}    
}

void inorder(struct node *ptr)
{
  if(ptr!=NULL)
    {
    inorder(ptr->prev);
    printf("%d",ptr->data);
    inorder(ptr->next);
    }
}

void preorder(struct node *ptr)
{
  if(ptr!=NULL)
    {
     printf("%d",ptr->data);
     preorder(ptr->prev);
     preorder(ptr->next);
    }
}

void postorder(struct node *ptr)
{
  if(ptr!=NULL)
    {
     postorder(ptr->prev);
     postorder(ptr->next);
     printf("%d",ptr->data);
    }
}
void search(struct node *ptr)
{
     int data,flag=0;
     if(ptr==NULL)
          printf("\n Empty tree");
       else
       {
          printf("Enter the element to find :");
          scanf("%d",&data);
          while(ptr!=NULL)
          {
           if(data==ptr->data)
              {
               printf("\n Element found");
               ptr=NULL;
               flag=1;
              }
       
           else if(data>ptr->data)
              ptr=ptr->next;
           else
              ptr=ptr->prev;
        }
   if(flag==0)
printf("\n Element not found");
}      
}


