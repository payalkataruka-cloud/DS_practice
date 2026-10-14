#include<stdio.h>
#define MAX 10
void main()
{
	int a[MAX][3],b[MAX][3],c[MAX][3];
	int i,j,nzero,r1,r2,c1,c2,n1,n2,k=1;
	printf("enter row and column for A:\n");
	scanf("%d %d",&r1,&c1);
	printf("enter the no. of non zero element:");
	scanf("%d",&n1);
	printf("enter row and column for B:\n");
	scanf("%d %d",&r2,&c2);
	printf("enter the no. of non zero element:");
	scanf("%d",&n2);
	a[0][0]=r1;
	a[0][1]=c1;
	a[0][2]=n1;
	printf("enter elements of A:\n");
	for(i=1;i<=n1;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	b[0][0]=r2;
	b[0][1]=c2;
	b[0][2]=n2;
	printf("enter elements of B:\n");
	for(i=1;i<=n2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("matrix A:\n");
	printf("row\tcolumn\tnon-zero\n");
	for(i=0;i<=n1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("matrix b:\n");
	printf("row\tcolumn\tnon-zero\n");
	for(i=0;i<=n2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	if(r1==r2 && c1==c2)
	{
		c[0][0]=r1;
		c[0][1]=c1;
		c[0][2]="";
		for(i=1;i<=n1;i++)
		{
			for(j=0;j<2;j++)
			{
				if(a[i][j]==b[i][j])
				{
					c[k][0]=i;
					c[k][1]=j;
					c[k][2]=a[k][2]+b[k][2];
				}
			}
		}
	}
	
}