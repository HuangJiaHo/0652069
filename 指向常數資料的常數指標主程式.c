#include <stdio.h>
#include <stdlib.h>
void BubbleSort(const int* const ,int* ,const int const );

int main()
{
   int NumBer[10]={56,38,43,2,16,65,81,98,10,73};
    int a=0;
    
    
    printf("排序前:");
    
     for( a = 0; a < 10; a++ ) {
        printf("%3d", NumBer[a]);
    }
   
    BubbleSort(NumBer,NumBer,10);
   
    printf("\n\n排序後:");
    for( a = 0; a < 10; a++ ) {
        printf("%3d", NumBer[a]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}
