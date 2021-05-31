#include<stdio.h>
#include<conio.h>
void main()
{
int m=0,m1=0,m2=0,p,count=0,i; clrscr();
printf("enter the memory capacity:"); scanf("%d",&m);
printf("enter the no of processes:"); scanf("%d",&p);
for(i=0;i<p;i++)
{
printf("\nenter memory req for process%d: ",i+1); scanf("%d",&m1);
count=count+m1;
if(m1<=m)
{
if(count==m)
printf("there is no further memory remaining:");
printf("the memory allocated for process%d is: %d ",i+1,m);m2=m-m1;
printf("\nremaining memory is: %d",m2); m=m2;
}
else
{
printf("memory is not allocated for process%d",i+1);
}
printf("\nexternal fragmentation for this process is:%d",m2);
}
getch();
}

/*
Sample Input and Output
Input:
Enter the memory capacity: 80
Enter no of processes: 2
Enter memory req for process1: 23
Output:
The memory allocated for process1 is: 80
Remaining memory is: 57
External fragmentation for this process is: 57
Enter memory req for process2: 52
The memory allocated for process2 is: 57
Remaining memory is: 5
External fragmentation for this process is: 5*/