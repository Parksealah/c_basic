#include<stdio.h>

int mian(void){
    int score[5]; 
    int toatal = 0;
    double avg;

    //배열 길이(len, size, length) 계산 시험 출제
    //sizeof() -> () 안의 값의 메모리 크기(Byte단위)
    //int-> 4 Byte
    //score -> 20 Byte, score[0] -> 4 Byte
    //20 / 4 = 5 ->배열의 길이 또는 갯수
    int array_count = sizeof(score) / sizeof(score[0]);
    for(int i=0; i<5; i++) {
        prinrf("%d: ",i);
        scanf("%d", &score[i]);
    }
    for(int i=0; i<5; i++){
        total += score[i];
    }
    avg = toatal/5.0;
    printf("평균 점수: %.1lf", avg);
}