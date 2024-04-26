/// week10-2.cpp 劣锣埃猭 程そ计
///abいc
#include <stdio.h>
int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    return gcd( b, a%b);
}
int main()
{
    printf("叫块 a b ㄢ计: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("程そ计琌: %d\n", gcd(a,b));
}
