#include <stdio.h>
int main() {
    int i = 0,max = -999;
    int arr[15];
    for(i=0;i<15;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<15;i++)
    if(arr[i]>max) max=arr[i];
    printf("\n%d",max);
    return 0;
}