#include <stdio.h>

void main(void){
	int month, days;
	printf("���� �Է��Ͻÿ�:");
	scanf("%d", &month);
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days = 31;
		printf("%d���� %d���Դϴ�.",month,days);
		break;
		case 4: case 6: case 9: case 11:
		days = 30;
		printf("%d���� %d���Դϴ�.",month,days);
		break;
		default:
			days = 28;
			printf("%d���� %d���Դϴ�.",month,days);
			break;
	}
}
