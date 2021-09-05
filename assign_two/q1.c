#include <stdio.h>
#include <string.h>  
    int Stack[100];   //creating stack using array of size 100
    int top = 100;
    
    void push(int n){
        if(top==0) 
            printf("stack is full\n");
        else{
            top--;
            Stack[top] = n;
        }
    }
    void pop(){
        if(top==100) printf("stack is empty\n");
        else{
            printf("deleted %d \n",Stack[top]);
            top++;
        }
    }
    void prints(){
        int i = top;
        printf("\n");
        if(top < 100) printf("%d    <-- Top\n",Stack[i++]);
        while(i<100) printf("%d\n",Stack[i++]);
    }

/*  Example input :
        5            //Number of operations to perform
        push 1
        pop
        push 3
        push 5
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
        if(strcmp(str,"pop") == 0) pop();
        else if(strcmp(str,"push") == 0) {
           scanf("%d",&temp);
           push(temp);
        }
        else if(strcmp(str,"print") == 0) prints();
            else printf("wrong choice!!\n");
        

    }
    
return 0;
}
