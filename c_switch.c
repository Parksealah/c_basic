#include<stdio.h>

//���
//1. if~elso if~elso
//2.switch ~ case ~ default
/**
 * �������� �Ǽ� �� ���ǿ� �ش��ϴ� �ϳ��� ��� ����
 * 
 * -��Ģ
 * 1) ���ǽ��� �����ĸ� �ÿ�
 * 2) �⺻������ case�� break���� ���� (������ �ƴ�)
 * 3) break�� ���� ��� break������ ������ ��� case ����
 * 4) default�� ���ǿ� �ش��ϴ� case�� ���� ��� ����
 * 5) default�� �������� (if�� �� elso�� ���)
 * 6) default�� ���� ��ġ�ص� ���������, ��κ� �� �ϴ�
 * 7) if������ switch���� ���� �ӵ� ����
*/

int main (void){
    int rank = 2, m = 0 ;

    switch (rank) {
        case 1:
            m = 300;
            break;
        case 2:
            m = 200;
            break;
        case 3:
            m = 100;
            break;
        default:
            m = 10;
            break;
    }
   
}