#include<stdio.h>

int mian(void){
    int score[5]; 
    int toatal = 0;
    double avg;

    //�迭 ����(len, size, length) ��� ���� ����
    //sizeof() -> () ���� ���� �޸� ũ��(Byte����)
    //int-> 4 Byte
    //score -> 20 Byte, score[0] -> 4 Byte
    //20 / 4 = 5 ->�迭�� ���� �Ǵ� ����
    int array_count = sizeof(score) / sizeof(score[0]);
    for(int i=0; i<5; i++) {
        prinrf("%d: ",i);
        scanf("%d", &score[i]);
    }
    for(int i=0; i<5; i++){
        total += score[i];
    }
    avg = toatal/5.0;
    printf("��� ����: %.1lf", avg);
}