

#include<stdio.h>
#include<string.h>


int main(){

char sname[20]="bhima";
char dname[20]={'\0'};

memset(dname,'0',10);
strcpy(dname,sname);

printf("\ndname=%s",dname);
printf("\n\n");

return 0;

}
