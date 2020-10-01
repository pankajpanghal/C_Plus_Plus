// C Program to execute operations of Queue...

#include <stdio.h>
#include<windows.h>
#include<stdlib.h>

#define MAX 50

void enqueue();
void dequeue();
void display();
int queue_array[MAX];

int rear = - 1;
int front = - 1;
int main()
{
    printf("...This program execute operations of Queue...\n\tWith max size of 50 ele");
    int choice;
    while (1)
    {   sleep(2);
        system("cls");
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
                printf("Thanks for using the program.");
            exit(1);
            getch();
            default:
            printf("Wrong choice \n");
        }
    }
}

void enqueue()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
        printf("Element successfully inserted.");
    }
}

void dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
        printf("\nElement successfully deleted from queue.");
    }
}

void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}
