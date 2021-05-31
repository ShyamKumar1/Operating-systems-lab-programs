//frames
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i,s[10],m,a[10],n,ch,total;
	char p[10];
	printf("Enter total no of process:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the process name %d::",i);
		scanf("%s",&p[i]);
		printf("Enter the size of each process %d::",i);
		scanf("%d)",&s[i]);
	}
printf("Enter total  no of frames:");
scanf("%d",&m);
while(1)
{
printf("\n-------MENU-------\n 1.Fixed Allocation\n2.Proportional Allocation\n3.Exit\n");
printf("Enter ur choice:");
scanf("%d",&ch);
switch(ch)
{
	case 1:printf("\nfixed Allocation::");
        	for(i=0;i<n;i++)
         	{
	     	a[i]=m/n;
		    printf("\nAllocation of frames to process %c is %d",p[i],a[i]);
	        }
	        break;
	case 2:printf("\nProportional Allocation");
	       for(i=0;i<n;i++)
	      {
	     	total+=s[i];
		    a[i]=(s[i]/total)*m;
		    printf("\nAllocation of frames for process %c is %d ",p[i],a[i]);
	     }
	     break;
    case 3:exit(1);
}
}
getch();

}
