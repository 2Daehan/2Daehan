#include <stdio.h>

int main(){
	int x,y;
	char xy;
	
	printf("result\n\n");
	printf("input x xy y == ?\n");
	scanf("%d %c %d",&x, &xy, &y);
	
	if(xy== '*'){
		printf("%d * %d = %d\n", x, y, x*y);
	}else if(xy=='/'){
		printf("%d / %d = %d\n", x, y, x/y);
	}else if(xy=='+'){
		printf("%d + %d = %d\n", x, y, x+y);
	}
	else
		printf("%d - %d = %d\n",x,y,x-y);
}
