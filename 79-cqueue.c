#include <stdio.h>
#include <stdlib.h>

int queue[50];
int f = -1, r = -1, n;
void insertQ();
void deleteQ();
void displayQ();
void main()
{
	int ch;
	printf("Enter size of the queue: ");
	scanf("%d", &n);
	//queue[n];

	do
	{
		printf("\n\n1. Insert in queue\n");
		printf("2. Delete in queue\n");
		printf("3. Diplay\n");
		printf("4. Exit\n");
		printf("\n\tEnter your choice: ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			insertQ();
			break;
		case 2:
			deleteQ();
			break;
		case 3:
			displayQ();
			break;
		case 4:
			exit(1);
		default:
			printf("\n\tSomething went wrong!! Please Try Again :(\n\n");
		}

	} while (ch != 4);
}

void insertQ()
{
	int val;
	printf("Enter value to insert in queue: ");
	scanf("%d", &val);

	if ((f == 0 && r == n - 1) || (f == r + 1))
	{
		printf("\n\t\tQueue is Full\n\n");
	}

	else
	{
		if (f == -1 && r == -1)
		{
			f = 0;
			r = 0;
		}

		else if (f != 0 && r == n - 1)
		{
			r = 0;
		}
		else
		{
			r++;
		}
		queue[r] = val;
	}
}
void deleteQ()
{
	if (f == -1)
	{
		printf("\n\t\tQueue is Empty\n\n");
	}
	else
	{
		if (f == r)
		{
			f = r = -1;
		}
		else if (f == n - 1)
		{
			f = 0;
		}
		else
		{
			f = f + 1;
		}
	}
}
void displayQ()
{
	int i = f;

	/*if(f==-1){
		printf("\n\t\tQueue is Empty. Nothing to Display\n\n");	
	}
		
	if(f<=r){
		while(i<=r){
			printf("%d\t",queue[i++]);	
		}	
	}
	else{
		while(i <= n - 1)
	    		printf("%d\t", queue[i++]);

	 	i = 0;
	 	
		while(i <= r)
	    		printf("%d\t",queue[i++]);
      }*/

	if (f <= r)
	{
		for (i = f; i <= r; i++)
		{
			printf("%d\t", queue[i]);
		}
	}
	else
	{
		/*for(i=r;i<=f;i++){
			printf("%d\t", queue[i]);
		}
		for(i=f;i<=n-1;i++){
			printf("%d\t", queue[i]);
		}*/
		for (i = 0; i <= r; i++)
		{
			printf("%d\t", queue[i]);
		}
		for (i = f; i <= n - 1; i++)
		{
			printf("%d\t", queue[i]);
		}
	}
}