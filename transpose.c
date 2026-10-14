#include<stdio.h>
#define MAX 10
void main()
{
    int a[MAX][MAX],triplet[MAX+1][3],i,j,r,c,k=1,nzero,transpose[MAX+1][3];
    printf("enter row and col:");
    scanf("%d %d",&r,&c);
    printf("enter matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
	triplet[0][0]=r;
    triplet[0][1]=c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                triplet[k][0]=i;
                triplet[k][1]=j;
                triplet[k][2]=a[i][j];
                k++;
            }
        }
    }
    nzero=k-1;
    triplet[0][2]=nzero;
    printf("The Triplet form of sparse matrix\n");
    printf("row\tcolumn\tnon-zero\n");
    for(i=0;i<k;i++)
    {  
        for(j=0;j<3;j++)
        {  
            printf("%d\t",triplet[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of sparse matrix\n");
    printf("row\tcolumn\tnon-zero\n");
    k=1;
    transpose[0][0]=c;
    transpose[0][1]=r;
    transpose[0][2]=nzero;
    for(j=0;j<c;j++)
	{
		for(i=1;i<=nzero;i++)
		{
			if(triplet[i][1]==j)
			{
				transpose[k][0]=triplet[i][1];
			    transpose[k][1]=triplet[i][0];
			    transpose[k][2]=triplet[i][2];
			    k++;
			}
		}
	}
    for(i=0;i<k;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
}
