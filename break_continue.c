#include<stdio.h>

/**
 * break & continue ��
 *  - �ݺ������� �ַ� ���
 *  -break : ��� �ݺ����� ���� ������
 *         -> ���ķ� �ݺ��� ���� X
 *  - continue : ��� ���� �ݺ����� �Ѿ�� (ex �Ʒ��� �Լ����� ¦���� continue�� ���� ���� X)
 *          ->���ķ� �ݺ��� ���� o
*/
int main(void){
    for(int i=1; i<=10; i++){
        if(i % 2 == 0){
            continue;
        }
        if(i == 7){
            break;
        }
        printf ("%d\n", i);
    }

}