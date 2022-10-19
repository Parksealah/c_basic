#include <stdio.h>

/**
 * if�� (���) �⺻ ����
 * 
 * if(����){
 *   ���๮
 * } else if(����) {
 *   ���๮
 * } else {
 *   ���๮
 * }
 * 
 * ���� ���
 * 1. if() �ܵ�
 * 2. if() ~ else
 * 3. if() ~ else if()
 * 4. if() ~ else if() ~ else
 * 
 * *if ���� �ݵ�� if�� ����
 * *else if()�� else�� �ʼ��ƴ�
 * *if�� else 1���� ��� ����
 * *else if() ������ ��� ����
 * *if������ ü������ ����� ��� ������ ���� �� (true)�� �� �ϳ��� �����ϰ� ��������
 * 
 * #���ǹ� 1�� (chain) - ���߿� �ϳ��� ���� (��)
 * if( �����̸� ){
 *    ��� (����);
 * } else {
 *    ��� (����);
 * } 
 * 
 * #���ǹ� 2�� (���� ���� ����) - ���ڿ��� ���̾ (����) ����
 * if(�����̸�) {
 *    ���(����);
 * }
 * 
 * if(�����̸�) {
 *    ���(����);
 * }
*/

int main(void){

    int a = 20;
    int b = 0;

    //������ ����
    // �� (if) ���Ϲ� �ȿ� �ִ� �ڵ� ����
    // ���� (False) �������� �Ѿ (���� ���ö�����)
    if(a > 10) {
        printf("a�� 10���� Ŀ��!");
    }
}