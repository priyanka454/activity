#include<stdio.h>
void main(){
int i=3,j=3,arr[i][j],arr1[i][j],arr2[i][j];
printf("first array\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&arr1[i][j]);
        printf("%d ",arr1[i][j]);
    }
    printf("\n");
}
printf("second array\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&arr2[i][j]);
        printf("%d ",arr2[i][j]);
    }
    printf("\n");
}
printf("sum is\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        arr[i][j]=arr1[i][j]+arr2[i][j];
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}


}
