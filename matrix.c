#include<stdio.h>
int main()
{
 int a[20][20],b[20][20],c[20][20];
 int i,j,k,m,n,p,q;
 printf("enter the matrix 1 rows cols:");
 scanf("%d%d",&m,&n);
 printf("enter the matrix 2 rows cols:");
 scanf("%d%d",&p,&q);
 for(i=0;i<p;i++)
 {
  for(j=0;j<q;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<m;i++) 
 { 
  for(j=0;j<n;j++) 
  { 
   scanf("%d",&b[m][n]);
  }
 }
 if(n!=p)
 {
  printf("matrix multiplication not posible");
 }
 else 
  {
   for(i=0;i<n;i++)
   { 
    for(j=0;j<p;j++)
    { 
     c[i][j]=0;
     for(k=0;k<n;k++)
     { 
      c[i][j]=c[i][j]+a[i][k]*b[k][j];
     }
    }
   }
  printf("product of matrix 1 and 2");
  for(i=0;i<m;i++)
  {
   for(j=0;j<q;j++)
   { 
    printf("%d\t",c[i][j]);
   }
  }
 }
 return 0;
}
  
 
