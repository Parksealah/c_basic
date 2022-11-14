#include<stdio.h>
/**
 * 재귀함수와 반복문의 차이
 * -재귀함수는 코드를 반복적으로 실행하는거 갘지만
 * 실제로는 새로운 람수를 실핸하는 것과 동일
 * -재귀함수는 최초호출한 곳이 아닌 이전에 호출했던 곳으로 돌아감
 * main()-> fruit(1) -> fruit(2) -> fruit(3)
 *       <- fruie(1) <- fruit(2) <- return를 만나면 
*/
void fruit()int count;
int main (void){
    fruit(1);
}
void fruit(int count) {
    printf("apple\n");
    if(count==3) return;
    fruit(count+1);
    printf("jam\n");
}