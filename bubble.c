#include<stdio.h>
int main()
{
int a[20],i,j,temp,n;
printf("Enter no.of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
    for(i=0;i<n;i++)
    {
     for(j=0;j<n-1-i;j++)
      {
      if(a[j] < a[j+1])
        {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        }
      }
    }
printf("sorted elements are:");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
return 0;
}
