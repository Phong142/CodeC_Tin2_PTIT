#include<stdio.h>
#include<string.h>

struct tu{
    char nd[500];
    int soLan;
};
struct tu ds[1000];

int n = 0;
int check(char s[]){
    for(int i = 0; i < n;i++){
        if(strcmp(s, ds[i].nd) == 0) return i;
    }
    return -1;
}
int thuanNghich(char s[]){
    for(int i = 0; i <strlen(s)/2;i++){
        if(s[i] != s[strlen(s)-i-1]) return 0;
    }
    return 1;
}

int main(){
    char s[500];
    while(scanf("%s", &s) != -1){
        int t = check(s);
        if(t == -1){
            strcpy(ds[n].nd, s);
            ds[n].soLan = 1;
            n++;
        }
        else ds[t].soLan++;
    }
        int m = 0; 
        for(int i = 0; i < n;i++) if(strlen(ds[i].nd) > m && thuanNghich(ds[i].nd)) m = strlen(ds[i].nd);
        for(int i = 0; i < n;i++) 
        if(strlen(ds[i].nd) == m && thuanNghich(ds[i].nd)) printf("%s %d\n", ds[i].nd, ds[i].soLan);
    
}