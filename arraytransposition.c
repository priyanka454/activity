#include<stdio.h>
void main(){
int i,j;
int arr[][3]={{1,2,8},{3,4,6}};
for(i=0;i<2;i++){
for(j=0;j<3;j++)
  printf("%d ",arr[i][j]);
  printf("\n");
}

printf("after rearranging\n");
for(i=0;i<3;i++){
for(j=0;j<2;j++)
  printf("%d ",arr[j][i]);
  printf("\n");
}}
