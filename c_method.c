#include <stdio.h>

/**
 * 함수(method)
 * -()붙어있으면 함수
 * -printf(), scanf(), sizof() 함수!
 * -특별한 목적의 작업을 수행하기위해 독립적으로 설계된 코드
 * -기능을 수행하는 코드 단위
 * -반복적인 작업을 피하기 위해 사용
 * -반복적인 작업 -> 함수 생성 -> 필요할 때마다 호출해서 사용
 * -계산기 -> 덧셈 () , 뺄셈(), 곱셈 (), 나눗셈() : 기능
 * 
 * c언어 함수 사용방법
 * 1.함수 정의: 함수를 코드로 구현
 * 2.함수 호출: 구현 된 함수를 사용하기 위해 호출 (함수명으로 호출)
 * 3.함수 선언: 컴파일러에게 함수 정보를 전달
 *   순서: 정의 -> 선언 -> 호출
 * 
 * 함수의 종류
 * 1.내장함수(built - in) : c언어 걸치 내장 함수
 * 2.외장함수(Library) : 다른 개발자가 만즐어 놓은 함수
 * 3.사용자의 정의함수 : 직접 만듬
 * 
 * 규칙
 * 1. 함수명: 변수 선언 규칙을 따라서 작성
 * 2.반황형(return) : 함수가 기능을 수행항 후에 호출한 곳으로 돌려줄 값의 자료형
 * 3.매개변수(parameters) : 함수가 처리할 데이터를 저장하는 변수(,)로 구분지어서 여러개의 선언 가능
 * 
*/

//3)함수 선언 : 컴파일러 에세 알려주는
int sum(int x, int y);
int main (void) {//main 함수 (methosd)
    int a = 5, b = 10;
    int result;

    //2) 함수 호출 : 함수를 사용하기위해 호출
    result = sum(a, b);
    printf ("result: %d", result);

} 

//1) 함수 정의 : 함수 코드 구현
int sum(int x, int y) {
    int temp;
    temp = x + y;
    return temp; //함수 종료 후 반환값

}

            

