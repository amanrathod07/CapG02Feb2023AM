
#include<stdio.h>

int main(){

int a=10;
int b=30;
int c=20;

int res=0;

res=(a>b)?((a>c)?a:c):((b>c)?b:c);

printf("\nresult=%d",res);

return 0;

}
