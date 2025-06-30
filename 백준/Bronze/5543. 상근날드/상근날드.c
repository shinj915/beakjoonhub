/*
상근날드에서 가장 잘 팔리는 메뉴는 세트 메뉴이다. 
주문할 때, 자신이 원하는 햄버거와 음료를 하나씩 골라 세트로 구매하면
가격의 합계에서 50원을 뺀 가격이 세트 메뉴의 가격이 된다.
햄버거는 총 3종류 상덕버거, 중덕버거, 하덕버거가 있고, 음료는 콜라와 사이다 두 종류가 있다.
햄버거와 음료의 가격이 주어졌을 때, 가장 싼 세트 메뉴의 가격을 출력하는 프로그램을 작성하시오.
*/

#include <stdio.h>

int main() {
    int ham[3], min_ham;
    int drk[2], min_drk;
    for(int i=0;i<3;i++){
        scanf("%d", &ham[i]);
    }
    for(int i=0;i<2;i++) {
        scanf("%d", &drk[i]);
    }
    min_ham=ham[0];
    min_drk=drk[0];
    for(int i=0;i<3;i++){
        if(ham[i]<min_ham)
            min_ham = ham[i];
    }
    for(int i=0;i<2;i++) {
        if(drk[i]<min_drk)
            min_drk = drk[i];
    }
    printf("%d", min_ham+min_drk-50);
}