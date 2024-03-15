///week04-3.cpp 比較for迴圈,倒著數
#include <stdio.h>
int main()
{
    for(int i=1; i<=9; i++){
        printf("i是%d", i);
  }
  printf("\n"); ///跳行
  for (int i=9; i>=1; i--){
    printf("i是%d",i);
  }
}
