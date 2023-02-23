
#include<stdio.h>
#include<string.h>



void count(char str[50])
{
int n,f[50],c=0,i,j;
n=strlen(str);

for(i=0; i<n; i++)
{


if(str[i]>='A'&& str[i]<='Z')     



  str[i]=str[i]+32;    

}
for(i=0; i<n; i++)
{
c=1;
if(str[i])
{
for(j=j+1; j<n; j++)
{
if(str[i]==str[j])
{
c++;
str[j]='\0';
}
}
printf("the frequency if %c is %d\n",str[i],c);
}
}
}


int main(){
char str[50];



printf("\nenter the string: ");   
gets(str);
count(str);
}










































