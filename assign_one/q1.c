#include <stdio.h>
int main() {
    int a1,a2,a3;
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1>a2 && a1>a3) printf("\n%d",a1);
    else if(a2>a3 && a2>a1) printf("\n%d",a2);
         else printf("\n%d",a3);
    return 0;
}
