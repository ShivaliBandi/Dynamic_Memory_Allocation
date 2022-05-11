#include<stdio.h>
#include<stdlib.h>
#define size 5

int main()
{
    int **pptr=NULL;
    pptr=(int **)malloc(size*sizeof(int *));
    
    int *inum1=(int *)malloc(1*sizeof(int));
    int *inum2=(int *)malloc(1*sizeof(int));
    int *inum3=(int *)malloc(1*sizeof(int));
    int *inum4=(int *)malloc(1*sizeof(int));
    int *inum5=(int *)malloc(1*sizeof(int));
    *inum1=10;
    *inum2=20;
    *inum3=30;
    *inum4=40;
    *inum5=50;
    pptr[0]=inum1;
    pptr[1]=inum2;
    pptr[2]=inum3;
    pptr[3]=inum4;
    pptr[4]=inum5;
    for(int icnt=0;icnt<size;icnt++)
    {
      //  printf("pptr[%d]->%d\n",icnt,*(*(pptr+icnt)));//10 20 30 40 50
        printf("pptr[%d]->%d\n",icnt,*pptr[icnt]);
    }
   
    for(int icnt=0;icnt<size;icnt++)
    {
        free(pptr[icnt]);
        pptr[icnt]=NULL;
    }
    free(pptr);
    }