/// week09-1.cpp
#include <stdio.h>
int myAdd(int a, int b){ ///�禡�w�q
return a+b; ///�i�Ө�ӼơA�X�h�@�Ӽ�
}
void myPrint(int a){ ///�禡�w�q
    for(int i=1;i<=a;i++) printf("*");
    printf("\n");
}
int main()
{
    int ans = myAdd(3,4); ///�禡�I�s
    printf("Hello ans: %d\n", ans);
    myPrint(ans); ///�禡�I�s
}