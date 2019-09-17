#include <stdio.h>
int main(){
    int a,b,c,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d",&b);
        c=((b*63)+7492)*5;
        c=c-498;
        c=((c/10)%10);
        if(c<0)
            printf("%d\n",(c*(-1)));
        else
            printf("%d\n",c);
    }
    return 0;
}
