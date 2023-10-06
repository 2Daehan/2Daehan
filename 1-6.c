#include <stdio.h>

void main(void){
	int month, days;
	printf("달을 입력하시오:");
	scanf("%d", &month);
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days = 31;
		printf("%d월은 %d일입니다.",month,days);
		break;
		case 4: case 6: case 9: case 11:
		days = 30;
		printf("%d월은 %d일입니다.",month,days);
		break;
		default:
			days = 28;
			printf("%d월은 %d일입니다.",month,days);
			break;
	}
}
