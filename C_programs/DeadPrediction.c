//Prediction Deadlock
#include<stdio.h>
#include<conio.h>
void main()
{
	int found,flag,l,p[4][5],tp,e[4][5],i,j,k=1,m[5],r[5],a[5],temp[5],sum=0,tr;
	printf("Enter Total number of Process:");
	scanf("%d",&tp);
	printf("Enter Total number of Resources:");
	scanf("%d",&tr);
	printf("Enter claim Matrix");
    for(i=0;i<tp;i++)
    {
    	for(j=0;j<tr;j++)
    	{
    		scanf("%d",&e[i][j]);
		}
	}
	/*printf("Enter Allocation Matrix");
    for(i=0;i<tp;i++)
    {
    	for(j=0;j<tr;j++)
    	{
    		scanf("%d",&p[i][j]);
		}
	}*/
    printf("Enter the Resource Vectors");
    for(i=0;i<tr;i++)
    {
    	scanf("%d",&r[i]);
    }  
	printf("Enter Avaialability Matrix"); 
	for(i=0;i<tr;i++)
    {
	   scanf("%d",&r[i]);
	   temp[i]=a[i];
    }
	for(i=0;i<tp;i++)
    {
    	sum=0;
    	for(j=0;j<tr;j++)
    	{
    		sum+=p[i][j];
		}
		if(sum==0)
		{
			m[k]=i;
			k++;
		}
	}
	for(i=0;i<tp;i++)
    {
    	for(l=1;l<tr;l++)
    	   if(i!=m[l])
    	   {
    	   	flag=1;
    	   	for(j=1;j<5;j++)
    	       if(e[i][j]>temp[j])
                {
                	flag=0;
                	break;
			    }    	   	    	
		    }
		    if(flag==1)
		    {
		    	m[k]=i;
		        k++;
		    	for(j=1;j<=tr;j++)
		    	{
		    		temp[j]+=p[i][j];
				}
			}
   }
			printf("\n deadlock causing process are");
			for(j=1;j<=tp;j++)
			{
				found=0;
				for(i=1;i<k;i++)
				{
					if(j==m[i])
					  found=1;
				}
				if(found==0)
				  printf("%d",j);
			 }
    
	
}
