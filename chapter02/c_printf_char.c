#include <stdio.h>

/**
 * vs code 단축기
 * shift + Alt + N : C 실행
 * shift + Alt + 방향키 위 아래 : Line 복사
 * Alt + 방향키 위아래 : line 이동
 * ctrl + x : line 삭제
 * ctrl + space : 자동완성
*/

//  ' ' : 문자 ( chatacter ) 'A' 'B' '!'
//  " " : 문자열 (string) "A" "ABC" "A!"

// 문자 ('')를 사용하는 경우
//   + 키보드 제어를 할 때 사용
int main(void)
{
    /* code */
    printf("%c\n", 'A');
    printf("%c\n", "A");
    printf("%c은 %s입니다.\n", '1','first');
    return 0;
}