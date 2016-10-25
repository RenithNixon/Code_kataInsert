#include<stdio.h>
#include<conio.h>
void main()
{
int n,arr[25],pos,ele,i;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\nEnter the positition:");
scanf("%d",&pos);
printf("Enter the element:");
scanf("%d",&ele);
for(i=n-1;i>=pos-1;i--)
{
arr[i+1]=arr[i];
}
arr[pos-1]=ele;
for(i=0;i<=n;i++)
{
printf("\n%d",arr[i]);
}
getch();
}
