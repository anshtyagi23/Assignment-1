#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	int a,b;
	scanf("%d",&a);
	b=a%10;
	a/=100;
	a=(a*10)+(b);
	printf("%d\n",a );
	return 0;
}
