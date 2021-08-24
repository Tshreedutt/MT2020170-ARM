#include <stdio.h>
int main() {
    int i = 0,j=0,temp=0;;
    int arr[20];
    for(i=0;i<20;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<20;i++)
    {
        for(j=1;j<20-i;j++)
        {
            if(arr[j-1]>arr[j])
            {
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<20;i++)
    printf("%d ",arr[i]);
    return 0;
}