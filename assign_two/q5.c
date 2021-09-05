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
    if(rear == 100) return 1;
    return 0;
}
int IsEmpty(){
    if(front == rear) return 1;
    return 0;
}
void Enqueue(int n){
    if(IsFull()) printf("\nQueue is full");
    else queue[++rear] = n;
}
void Dequeue(){
    if(IsEmpty()) printf("\nQueue is empty");
    else printf("\nRemoved %d",queue[++front]); 
}
void printq(){
    int i = front;
    printf("\nFront --> ");
    while(i<rear){
        printf("%d ",queue[++i]);
    }
}
/*  Example input :
        5            //Number of operations to perform
        enq 1
        deq
        enq 3
        enq 5
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
