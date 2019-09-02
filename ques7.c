#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	int a,b,c;
	scanf("%d",&a);
	c=a%10;
	b=a%100;
	b/=10;
	printf("%d \n",b+c );
	return 0;
}
