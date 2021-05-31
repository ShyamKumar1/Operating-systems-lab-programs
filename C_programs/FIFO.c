#include<stdio.h>
#include<conio.h> 
void main()
{
int a[5],b[20],n,p=0,q=0,m=0,h,k,i,q1=1; char f='F';
clrscr();
printf("Enter the Number of Pages:"); scanf("%d",&n);
printf("Enter %d Page Numbers:",n); for(i=0;i<n;i++)
scanf("%d",&b[i]);
for(i=0;i<n;i++)
{if(p==0)
{
if(q>=3)
q=0;
a[q]=b[i];
q++;
if(q1<3)
{
q1=q;
}
}
printf("\n%d",b[i]);
printf("\t");
for(h=0;h<q1;h++)
printf("%d",a[h]);
if((p==0)&&(q<=3))
{
printf("-->%c",f);m++;
}
p=0;
for(k=0;k<q1;k++)
{
if(b[i+1]==a[k])
p=1;
}
}
printf("\nNo of faults:%d",m); getch();
}
/*
SAMPLE INPUT AND OUTPUT:
Input:
Enter the Number of Pages: 12 Enter 12 Page Numbers:
2 3 2 1 5 2 4 5 3 2 5 2
Output:
2 2-> F
323-> F
223
1231-> F
5531-> F
2521-> F
4524-> F
5524
3 324-> F
2 324
5 354-> F
2 352-> F
No of faults: 9
*/