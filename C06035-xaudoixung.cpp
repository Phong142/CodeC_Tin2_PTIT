// #include <stdio.h>
// #include <string.h>

// int sdx (char a[]){
// 	int count = 0;
// 	int len = strlen(a);
// 	if (len==1) return 1;
// 	else {
// 		for (int i=0; i<len/2; i++){
// 			if (a[i] != a[len-1-i])
// 				count++;
// 			if (count > 1) return 0;
// 		}
// 	}
// 	if (count == 1) return 1;
// 	else if (count ==0 && len%2==1) return 1;
// 	else return 0;
// }

// int main (){
// 	int t;
// 	scanf ("%d\n", &t);
// 	while (t--){
// 		char s[30];
// 		gets(s);
// 		if (sdx(s) == 1) printf ("YES\n");
// 		else printf ("NO\n");
// 	}
// 	return 0;
// }

#include <stdio.h>
#include <string.h>

int dx(char s[]){
    int dem=0;
    int len=strlen(s);
    if(len==1) return 1;
    else{
        for(int i=0; i<len/2; i++){
            if(s[i]!=s[len-i-1])
                dem++;
            if(dem>1) return 0;
        }
    }
    if(dem==1) return 1;
    else if(dem==0 && len%2==1) return 1;
    else return 0;
}
int main(){
    int test;
    scanf("%d\n", &test);
    while(test--){
        char s[1001];
        gets(s);
        if(dx(s)==1) printf("YES\n");
        else printf("NO\n");
    }
}