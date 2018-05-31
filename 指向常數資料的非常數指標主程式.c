#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int*const ,int const);

int main()
{
    int NumBer[10]={54,66,43,2,13,6,89,9,10,27};
    int a=0;
    
    
    printf("排序前:");
    
     for(a = 0; a < 10; a++ ) {
        printf("%3d", NumBer[a]);
    }
   
    BubbleSort(NumBer,10);
   
    printf("\n\n排序後:");
    for(a = 0; a < 10; a++ ) {
        printf("%3d", NumBer[a]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}
