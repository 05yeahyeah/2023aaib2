// week15-3.c 寫到一半
int equalSubstring(char* s, char* t, int maxCost) {
    int ans = 0;

    int N = strlen(s); // 知道字串長度
    for(int i=0; i<N; i++) { //  字串的迴圈
        printf("%c %c\n", s[i], t[i] ); // 字串的陣列
    }
    return ans;
}