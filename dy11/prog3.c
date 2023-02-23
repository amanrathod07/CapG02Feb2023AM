
#include<stdio.h>
#include<string.h>

int main(){

char dname[20];
char sname[20];

memset(dname,'\0',20);
memset(sname,'\0',20);

printf("\nenter sname:");
scanf("%s",sname);

printf("\nenter dname:");
scanf("%s",dname);

printf("\nsname: %s\ndname: %s\n",sname,dname);

printf("\n\n");

return 0; 

}

