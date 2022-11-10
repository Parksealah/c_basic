#include<stdio.h>

/**
 * int mian(){
 * printf("%d",sum(5,10));
 * }
 *     |          (return)
 *    \ /            / \
 * (parameters)       |
 * int sum(int X, int Y){
 *  return X+y;
 * }
 * 
 * 
 * 
*/
//함수 -> (매개변수), return
//함수 ->   x,return

//int get_num(void);


//mian () 함수위에 함수가 선언되면, 함수선언 따로 할 필요 없음
//void : 해당값을 사용하지 않을 경우
int get_num(void) {
    inr num;
    printf("number: ");
    scanf("%d", &num);
    return num;
}
int main (void) {
    printf("값 : %d", get_num());
}
