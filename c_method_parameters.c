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
//�Լ� -> (�Ű�����), return
//�Լ� ->   x,return

//int get_num(void);


//mian () �Լ����� �Լ��� ����Ǹ�, �Լ����� ���� �� �ʿ� ����
//void : �ش簪�� ������� ���� ���
int get_num(void) {
    inr num;
    printf("number: ");
    scanf("%d", &num);
    return num;
}
int main (void) {
    printf("�� : %d", get_num());
}
