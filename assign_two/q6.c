/*
Enqueue: Add an element to the end of the queue
Dequeue: Remove an element from the front of the queue
IsEmpty: Check if the queue is empty
IsFull: Check if the queue is full
*/
#include <stdio.h>
#include <string.h>
int queue[100];             //creatin queue using array of size 100
int front = -1;
int rear = -1;              //initialized front and rear as -1
int IsFull(){
    if((front == 0 && rear == 99) || (rear == (front-1)%(99))) return 1;
    return 0;
}
int IsEmpty(){
    if(front == -1) return 1;
    return 0;
}
void Enqueue(int n){
    if (IsFull())   printf("\nQueue is Full");
    else if (front == -1)
    {   front = rear = 0;
        queue[rear] = n;
    }
    else if (rear == 99 && front != 0)
    {   rear = 0;
        queue[rear] = n;
    }
     else
    {   rear++;
        queue[rear] = n;
    }
}
void Dequeue(){
    if(IsEmpty()) printf("\nQueue is empty");
    printf("\nRemoved %d",queue[front]);
    queue[front] = -1;
    if (front == rear)
    {   front = -1;
        rear = -1;
    }
    else if(front == 99) front = 0;
    else front++;
}
void printq(){
    int i;
    if(IsEmpty()) printf("\nQueue is empty");
    printf("\nFront --> ");
    if (rear >= front)
    {       for(i = front;i<= rear; i++)
            printf("%d ",queue[i]);
    }
    else{
        for(i = front;i <100;i++) printf("%d ", queue[i]);
        for(i= 0;i <= rear;i++) printf("%d ", queue[i]);
    }
}
/*  Example input :
        6            //Number of operations to perform
        enq 1
        deq
        enq 3
        enq 5
        deq
        print
*/ 
int main() {
    int n;           //number of operations to perform
    int i;
    int temp;
    char str[7];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",str);
        if(strcmp(str,"deq") == 0) Dequeue();
        else if(strcmp(str,"enq") == 0) {
           scanf("%d",&temp);
           Enqueue(temp);
        }
        else if(strcmp(str,"print") == 0) printq();
            else printf("\nwrong choice!!\n");
        

    }
    
return 0;
}
