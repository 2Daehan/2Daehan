#include <stdio.h>

int main(){
    int num;

    printf("���ڸ� �Է����ּ���:");
    scanf("%d", &num);
    
   switch(num>>31){
   	case -1:
   		printf("�Է��Ͻ� ���ڴ� �����Դϴ�");
   	default:
   		printf("�Է��Ͻ� ���ڴ� ����Դϴ�");
   }
    
    
}

