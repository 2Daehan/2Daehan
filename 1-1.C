#include <stdio.h>

int main(){
    int num;

    printf("숫자를 입력해주세요:");
    scanf("%d", &num);
    
    if(num<0){
        printf("입력하신 숫자는 음수 입니다");
    }
    else
        printf("입력하신 숫자는 양수입니다.");
    
    
}

