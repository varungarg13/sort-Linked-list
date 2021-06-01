#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int coeff;
	struct node *next;
}node;
node * getnode(int);
node * AddFirst(node *,int);
node * Sort(node *);
void Traverse(node *);
node * freeall(node *);
node * Reverse(node *);
int main()
{
	node *start=NULL;
	int item,ch;
	do{
		system("cls");
		printf("\n1. Add element\n2. sort\n3. exit\n4. traverse\n");
		printf("Enter the choice :\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:	printf("\nEnter the item you want to add :");
				scanf("%d",&item);
				start=AddFirst(start,item);
				break;
		case 2:
				start=Sort(start);
				Traverse(start);
				break;
		case 3: exit(0);
		break;
		case 4:Traverse(start);
		break;
	
		default:
			printf("\nInvalid input!");
		
}getch();
}while(ch!=3);
	
	return 0;	
}
node * getnode(int item){
	node *t=(node *)malloc(sizeof(node));
	t->coeff=item;
	return t;	
}
node * AddFirst(node *start,int item)
{
	node *ptr,*newnode;
	newnode=getnode(item);
	ptr=start;
	newnode->next=start;
	start=newnode;
	return start;
	
}
void Traverse(node *start)
{
	node *ptr;
	ptr=start;
	printf("\nThe list is: ");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->coeff);
		ptr=ptr->next;
	}
	printf("\n");	
}
node * Sort(node *start)
{
	node *p1,*p2;
	for(p1=start;p1->next!=NULL;p1=p1->next)
	{		
	for(p2=p1->next;p2!=NULL;p2=p2->next)
	{
		if(p1->coeff > p2->coeff)
		{
			int t;
     		t=p1->coeff;
     		p1->coeff=p2->coeff;
      		p2->coeff=t;
		}
	}
}
	return start;
}
node *freeall(node *start)
{
	node *ptr;
	ptr =start;
	while(start!=NULL)
	{
		ptr=start;
		start=start->next;
		free(ptr);
	}
	return start;
}
node * Reverse(node *start){
	node *p1,*p2,*p3;
	
	
}




















