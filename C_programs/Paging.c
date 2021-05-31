
#include<stdio.h>
#include<conio.h>
main()
{
int np,ps,i; int *sa; clrscr();
printf("enter how many pages\n"); scanf("%d",&np);
printf("enter the page size \n"); scanf("%d",&ps); sa=(int*)malloc(2*np); for(i=0;i<np;i++)
{
sa[i]=(int)malloc(ps);
printf("page%d\t address %u\n",i+1,sa[i]);
}
getch();
}

/*
SAMPLE INPUT AND OUTPUT:
Input:
Enter how many pages: 5
Enter the page size: 4
Output:
Page1 Address: 1894
Page2 Address: 1902
Page3 Address: 1910
Page4 Address: 1918
Page5 Address: 1926
*/