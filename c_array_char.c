#include<stdio.h>

int main (void) {
    char str[80] = "applejam";

    printf(" ���� ���ڿ�: %s \n", str);
    printf("���ڿ� �Է�: ");
    scanf("%s", str); //���ڿ� �迭�� scanf & �Ⱥ���
    printf("�Է��� ���ڿ�:%s\n", str);
        /**
     * ���ڿ��� �����ϴ� �迭
     *  -c���� ���ڿ��� ������ �� char[] �迭 ���
     *  ���ڿ�: "apple"-> char[]
     *  -char�迭�� �⺻ ���ڿ� ���� ���� 1�� �� ũ�� ����
     *   char [5] (X) -> char [6]  (0)
     *   apple\0 -> 6���� �ʿ�
     * 
     *  -�������� ���ڿ��� ���̶�� �ǹ̸� ������ ��(\0)���� ����
     *   char name[5]
     *  -\0 -> ���ڿ� �� ǥ��
     * 
     *  -char�迭�� ����� �ʱ�ȭ�ϸ� ���� �迭�� ��Ҵ� 0���� ä������ �ڵ����� ���ڿ� ����\0���� ����
    */
}