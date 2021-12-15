#include <stdio.h>

#include <string.h>

#include <math.h>

int nto(int a) { //0 1 4 6 8 9
    if (a < 2) return 0;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) return 0;
    }
    return 1;
}
int main() {
    int test;
    scanf("%d", & test);
    while (test--) {
        char s[505];
        scanf("%s", & s);
        int len = strlen(s);
        int check = 0;
        for (int i = 0; i <= len / 2; i++) {
            if (nto(s[i] - '0') == 1) {
                if (s[i] != s[len - 1 - i]) {
                    printf("NO\n");
                    check++;
                    break;
                } else {
                    check++;
                    printf("YES\n");
                    break;
                }
            }
        }
        if (check == 0 && len % 2 != 0) {
            if (nto(s[len % 2 + 1] - '0') == 0) {
                printf("NO\n");
                check++;
            }
        }
        if (check == 0)
            printf("YES\n");
    }
}


// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// int nTo(int a){
// 	if(a<2)return 0;
// 	for(int i=2;i<=sqrt(a);i++){
// 		if(a%i==0)return 0;
// 	}return 1;
// }
// int main(){
// 	int t;
// 	scanf("%d\n",&t);
// 	while(t--){
// 		char s[501];
// 		gets(s);
// 		int len=strlen(s);
// 		int check=0;
// 		for(int i=0;i<=len/2;i++){
// 			if(nTo(s[i]-'0')==1){
// 				if(s[i]!=s[len-1-i]){
// 					printf("NO\n");
// 					check++;
// 					break;
// 				}
// 			}else {check++;
// 				printf("NO\n");
// 				break;
// 			}
// 		}if(check==0&&len%2!=0){
// 			if(nTo(s[len%2+1]-'0')==0){
// 				printf("NO\n");
// 				check++;
// 			}
// 		}if(check==0)printf("YES\n");
// 	}
// }