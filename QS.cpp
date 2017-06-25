#include <stdio.h>


void main()
{
    int a[50],n,i;
    printf("How many elements?");
    scanf_s("%d",&n);
    printf("\nEnter array elements:");
    
    for(i=0;i<n;i++)
        scanf_s("%d",&a[i]);
        
    quicksort(a,0,(n-1));
    printf("\nArray after sorting:");
    
    for(i=0;i<n;i++)
        printf("%d ",a[i]);      
}
 
void quicksort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=particion(a,l,u);
        quicksort(a,l,(j-1));
        quicksort(a,(j+1),u);
    }
}
 
int particion(int a[],int l,int u)
{
    int pivote,i,j,temp;
    pivote=a[l];
    i=l;
    j=u+1;
    
    do
    {
        do i++;    
        while((a[i] < pivote) && (i<=u));
        
        do j--;
        while(pivote < a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
	while(i<j);
    
    a[l]=a[j];
    a[j]=pivote;
    
    return(j);
}