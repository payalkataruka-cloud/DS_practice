#include<stdio.h>
#define MAX 10
void main()
{
    int a[MAX][MAX],triplet[MAX][3],i,j,r,c,k=1;
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
    triplet[0][2]=k;
    printf("The Triplet form of sparse matrix\n");
    printf("row\tcolumn\tnon-zero\n");
    for(i=1;i<k;i++)
    {  
        for(j=0;j<3;j++)
        {  
            printf("%d\t",triplet[i][j]);
        }
        printf("\n");
    }
}
