#include <stdio.h>

int main(void)
{
    int a[10],n,i,j,temp,count=0,min;
    
    printf("Enter size of array:");
    scanf("%d",&n);
    
    printf("Enter array to sort:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            count++;
            if(a[j]<a[min])
                min=j;
        }
        if(i!=min)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    
    
    printf("Sorted Array is:\n");
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
	
	printf("\n OPERATION COUNT=%d\n",count);
	
	return 0;
}

