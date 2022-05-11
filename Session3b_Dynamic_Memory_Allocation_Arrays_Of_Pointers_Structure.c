#include<stdio.h>
#include<stdlib.h>
#define size 5
typedef struct node
{
  int x,y,z;
}NODE;
int main()
{
 NODE *ptr[size];
  for (int icnt = 0; icnt < size; icnt++)
    ptr[icnt]=(NODE *)malloc(size * sizeof(NODE));
  for(int icnt=0;icnt<size;icnt++)
  {
    ptr[icnt]->x=icnt+1;
    ptr[icnt]->y=icnt+2;
    ptr[icnt]->z=icnt+3;
  }
  
  for(int icnt=0;icnt<size;icnt++)
    printf("ptr[%d]->x=%d\tptr[%d]->y=%d\tptr[%d]->z=%d\n",icnt,ptr[icnt]->x,icnt,ptr[icnt]->y,icnt,ptr[icnt]->z);
  for(int icnt=0;icnt<size;icnt++)
    free(ptr[icnt]);
  return 0;
}