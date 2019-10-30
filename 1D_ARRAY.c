#include<stdio.h>
int main() {
  int maxlen=10,j;                 //#defin MAX_SIZE 10
  int arr[10];               //int arr[MAX_SIZE]
print("")
  srand(time(NULL));
  for(int i=0;i<maxlen;i++)
    arr[i]=rand()%100;

  int sum=0;
  for(int i=0;i<maxlen;i++)
  {
    printf("%d\n",arr[i]);
    sum+=arr[i];
  }
  printf("Sum of array elements is %d\n",sum);

  return 0;
}
