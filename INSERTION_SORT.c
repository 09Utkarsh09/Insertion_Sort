#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5],i,j,pos,min,temp;//target;
	
	printf("Enter 5 Elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
/*	
	for(i=1;i<5;i++)
	{
		target=a[i];
		j=i-1;
		while(j>=0 && target<=a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=target;
	}
		
*/

for(i=0;i<4;i++)
{
	pos=i;
	min=a[i];
	for(j=i+1;j<5;j++)
	{
		if(a[j]<min)
		{
			pos=j;
			min=a[pos];
		}
	}
	temp=a[i];
	a[i]=a[pos];
	a[pos]=temp;
}



printf("\nSorted Array is\n");

for(i=0;i<5;i++)
{
	printf("%d\t",a[i]);
}
}
