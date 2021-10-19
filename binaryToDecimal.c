#include<stdio.h>
int chdecimal(int n){
    int x=1;
    int deci=0;
    while(n>0){
        int last=n%10;
        deci+= last*x;
        x*=2;
        n=n/10;
    }
    return deci;
}
void main(){
    int n;
    printf("Enter your binary input:-\n");
    scanf("%d",&n);
    int res=chdecimal(n);
    printf("Decimal number is:-\n%d",res);
}
