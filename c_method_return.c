#include<stdio.h>

void printf_char(char ch,int count);

int main(voi){
    printf_char('*',3);

}

void printf_char(char ch,int count) {
    for(int i=0; i<count; i++){
        printf("%c",ch);
    }
    //�Լ��� ȣ���ϰ� ����Ǹ� �ٽ� ȣ���ߴ� ������ ���ư�
    //1.�Լ� ���� -> return���� ������ ����!
    //2.�Լ� ���� -> }�� ������ ����!(return ������ ���)
    return;
}
