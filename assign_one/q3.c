#include <stdio.h>
int main() {
    int i = 0,count = 0;
    int arr[20];
    for(i=0;i<20;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<20;i++)
    if(!(arr[i]%2)) count++;
    printf("\n%d",count);
    return 0;
}