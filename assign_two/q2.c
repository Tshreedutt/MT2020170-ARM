#include <stdio.h>
#include <string.h>  
    int Stack[100];   //creating stack using array of size 100
    int top = 99;
    
    void push(int n){
        if(top==-1) 
            printf("stack is full\n");
        else{
            Stack[top] = n;
            top--;
        }
    }
    void pop(){
        if(top==99) printf("stack is empty\n");
        else{
            top++;
            printf("deleted %d \n",Stack[top]);
        }
    }
    void prints(){
        int i = top+1;
        printf("\n");
        if(i < 100) printf("%d    <-- Top\n",Stack[i++]);
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
