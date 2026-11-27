#include<stdio.h>
struct product
{
int id;
char name[20];
float price;
}
int main()
{
 
 stuct product p[5];
int i,search;
for(i=0;i<5;i++)
{
printf("e");
 stuct product p[5];
int i,search;
for(i=0;i<5;i++)
{
printf("enter id,name,price:")
scanf("%d %s %f",&p[i].id,p[i]name,&p[i].price);
}
printf("enter product id to search:");
scanf("%d".&search);
for(i=0;i<5;i++)
{
 if(p[i].id==search)
 {
   printf("name: %S price: %.2f/n,p[i].name,p[i].price");
   return 0;
 }
}
 printf("product not found\n");
 return 0;
}
