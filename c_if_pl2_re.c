#include <stdio.h>

// 학점 계산기-리팩토리

int main(void) {
    //1번 : 사용자로부터 점수 입력
    int score;
    char grade;

    printf("점수: ");
    scanf("%d", &score); //여기까지 1번

    if(score >= 0 && score <=100) { // 최고 score : 100점 지정
        //2번 : 점수로부터 등급(A,B,C,..) 판단

        
        if(score <= 100 && score >= 91) {            //score : 100점 (91~100점)
            grade = 'A';
        } else if (score <= 90 && score >= 81) {     //score : 90점 (81~90점)
            grade = 'B';
        } else if (score <= 80 && score >= 71) {     //score : 80점 (71~80점)           
            grade = 'C';
        } else if (score <= 70 && score >= 61) {     //score : 70점 (61~70점)
            grade = 'D';
        } else if (score <= 60 && score >= 0) {      //score : 60점 (0~60점)
            grade = 'F';
        }
        //3번 : 점수와 등급을 출력
         printf("학생의 점수는 %d점으로 %c학점입니다.", score, grade);
    } else {
        //점수 : 0점 미만 또는 100점 초과
        printf("ERROR: 0~100점 사이에 값을 입력하세요.");
    }
}