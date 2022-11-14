#include<stdio.h>

void printf_char(char ch,int count);

int main(voi){
    printf_char('*',3);

}

void printf_char(char ch,int count) {
    for(int i=0; i<count; i++){
        printf("%c",ch);
    }
    //함수를 호출하고 종료되면 다시 호출했던 곳으로 돌아감
    //1.함수 종료 -> return문을 만나면 종료!
    //2.함수 종료 -> }를 만나면 종료!(return 생략된 경우)
    return;
}
