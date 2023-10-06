#include <stdio.h>

int main(){
    int num;

    printf("숫자를 입력해주세요:");
    scanf("%d", &num);
    
   switch(num>>31){
   	case -1:
   		printf("입력하신 숫자는 음수입니다");
   	default:
   		printf("입력하신 숫자는 양수입니다");
   }
    printf("hi");
    
}

