#include<stdio.h>

int khonggiam(int n){
	int a, b;
    while (n >= 10)
    {
        a = n % 10;
        n /= 10;
        b = n % 10;
        if (a < b) return 0;
    }
    return 1;
}

int tim(int a[], int n, int x){
	for(int i = 0; i < n;i++){
		if(a[i] == x)
		return i;
	}
	return -1;
}

void sapxep(int a[], int b[], int n){
    int tmp;
	for(int i = 0; i < n-1;i++){
		for(int j =i+1; j < n;j++){
			if(b[i] < b[j]){
                     tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				    tmp = b[i];
					b[i] = b[j];
					b[j] = tmp;
			}
		}
	}
	for(int i = 0; i < n;i++){
		printf("%d %d\n", a[i], b[i]);
	}
}
int main(){
	int a[10000], b[10000] ={0}, n = 0, x;
	while(scanf("%d", &x) != -1){
		if(khonggiam(x) == 1){
			int t = tim(a,n,x);
			if(t == -1){
				a[n] = x;
				b[n] = 1;
				n++;
			}
            else b[t]++;
		}
	}
	sapxep(a,b,n);
}