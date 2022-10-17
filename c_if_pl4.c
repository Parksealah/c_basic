#include <stdio.h>
#include <string.h>

/**
 * BMI ����
 * 1.�Է�: ����� -> ����, ������
 * 2.����ȯ-> cm(M)
 * 3.BML���
 * 4.����:BML�� ���� ��� �ο�
 * 5.���
*/

int main(void){
    //1.�Է�
    int height; //����(cm)
    int weihgt; //������(kg)

    printf("����(cm) �Է�: ");
    scanf("%d", &height);
    printf("ü��(kg) �Է�: ");
    scanf("%d", &weihgt);
    //printf ("%d, %d", height, weihgt);

    //2. ��ȯ (���� cm->m)
    // ��: 183cm -> 1.8m
    //       1.83 = 183.0 / 100
    double height_m = (double) height / 100;
    printf("%.2lf", height_m);

    //3. ���
    // BMI���� = ������(kg) / (����(m) * ����(m))
    double bmi_value = weihgt / (height_m * height_m);

    //4.����
    //18.5 �̸� : ��ü��
    //18.5 ~23�̸� : ����
    //23~26�̸� : ��ü��
    //26~30 �̸� : ��
    //30 �̻� : ����

    //bmi-degree �������� ���ڿ��� ����
    //c-> ���ڿ�: char[]�迭
    // ���ڿ� �迭 = ���� ������ ! -> strcpy()�Լ��� ���ؼ� ���Է�

    char bmi_degree[20];

    if(bmi_value <18.5) {
        strcpy(bmi_degree, "��ü��");
    }else if (bmi_value >= 18.5 && bmi_value < 23) {
        strcpy(bmi_degree, "����");
    } else if(bmi_value >=23 && bmi_value < 26) {
        strcpy(bmi_degree, "��ü��");
    } else if (bmi_value >= 26 && bmi_value < 30) {
        strcpy(bmi_degree, "��"); 
    } else if (bmi_value >= 30) {
        strcy(bmi_degree,"����");
    }
    
    //5.���
    printf("���� %dcm, ������ %dkg ���� \n", height, weihgt);
    printf("����� BMI������ %.2lf�� %s�Դϴ�.",bmi_value, bmi_degree);

}