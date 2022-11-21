#include<stdio.h>

//배열은 값을 여러개 담을 ->전체출력 -> 반복문(for)
int mian(void){
    int score[5]; //index: 0~4
    int toatal = 0;
    double avg;

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