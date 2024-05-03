///week11-2.cpp 篩子法
///以前的寫法，要30萬*30萬=900億次
#include <stdio.h>
int table[20000] = {};
int main()
{
    int BOUND = 20000, ans = 0;
    for(int i=2;i<BOUND;i++){
        if(table[i]==0){
            ans++;
            for(int k=i*i; k<BOUND; k+=i){
                table[k] = -1;
            }
        }
    }
    printf("質數有: %d 個\n", ans);
}
