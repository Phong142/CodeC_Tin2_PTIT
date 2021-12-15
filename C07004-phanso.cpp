#include<stdio.h>
#include<math.h>

typedef struct phanso{
	int a;
	int b;
}ps;

int UCLN(int a, int b){
	while(a != b){
		if(a > b) a -= b;
		else b -= a;
	} return a;
}

ps toigian(ps d){
	ps c;
	c.a = d.a/UCLN(d.a,d.b);
	c.b = d.b/UCLN(d.a,d.b);
	return c;
}

ps tong(ps n, ps m){
	ps c;
	c.a = n.a + m.a;
	c.b = n.b;
	c = toigian(c);
	return c;
}
ps thuong(ps n, ps m){
	ps c;
	c.a = n.a*m.b;
	c.b = n.b*m.a;
	c = toigian(c);
	return c;
}
int main(){
	int t;
	scanf("%d", &t);
	int h = t;
	for(int i = 1;i <= t;i++){
		ps ps1, ps2, t, n;
		scanf("%d %d %d %d", &ps1.a, &ps1.b, &ps2.a, &ps2.b);
		printf("Case #%d:\n", i);
		ps p1 = toigian(ps1);
		ps p2 = toigian(ps2);
		int c = p1.b;
		p1.a = (p1.a*p2.b)/UCLN(p1.b,p2.b);
		p1.b = (p1.b*p2.b)/UCLN(p1.b,p2.b);
		p2.a = (p2.a*c)/UCLN(c,p2.b);
		p2.b = (c*p2.b)/UCLN(c,p2.b);
	//	printf("Case #%d:\n", h-t);
		printf("%d/%d %d/%d\n", p1.a, p1.b, p2.a, p2.b);
		n = tong(p1,p2); printf("%d/%d\n", n.a, n.b);
		t = thuong(p1,p2); printf("%d/%d\n", t.a, t.b);
	}
}