#include <stdio.h>

// ���� ����-�����丮

int main(void) {
    //1�� : ����ڷκ��� ���� �Է�
    int score;
    char grade;

    printf("����: ");
    scanf("%d", &score); //������� 1��

    if(score >= 0 && score <=100) { // �ְ� score : 100�� ����
        //2�� : �����κ��� ���(A,B,C,..) �Ǵ�

        
        if(score <= 100 && score >= 91) {            //score : 100�� (91~100��)
            grade = 'A';
        } else if (score <= 90 && score >= 81) {     //score : 90�� (81~90��)
            grade = 'B';
        } else if (score <= 80 && score >= 71) {     //score : 80�� (71~80��)           
            grade = 'C';
        } else if (score <= 70 && score >= 61) {     //score : 70�� (61~70��)
            grade = 'D';
        } else if (score <= 60 && score >= 0) {      //score : 60�� (0~60��)
            grade = 'F';
        }
        //3�� : ������ ����� ���
         printf("�л��� ������ %d������ %c�����Դϴ�.", score, grade);
    } else {
        //���� : 0�� �̸� �Ǵ� 100�� �ʰ�
        printf("ERROR: 0~100�� ���̿� ���� �Է��ϼ���.");
    }
}