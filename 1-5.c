#include <stdio.h>
int main(){
	int month, days;
	printf("달을 입력하시오:");
	scanf("%d", &month);
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		days == 31;
		printf("%d월의 일수는 %d입니다\n",month,days);
	}else if((month==2||month==4||month==6||month==9||month==11){
		days ==30;
		printf("%d월의 일수는 %d입니다\n",month,days);
	}else:{
		days == 28
		printf("%d월의 일수는 %d입니다\n",month,days);
	}
	
}
