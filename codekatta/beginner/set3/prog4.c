#include<stdio.h>
void main()
{
	int i,j,n,temp;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[i])
		{
		
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);

}
