#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	int a,b,c;
	scanf("%d",&a);
	b=a%10;
	c=a%100;
	c/=10;
	a/=100;
	a=(a*100)+(10*b)+(c);
	printf("%d\n",a );
	return 0;
}
