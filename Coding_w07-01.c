#include <stdio.h>

int main() {
    float score; //กำหนกตแปร score 

    printf("Enter your score: ");
    scanf("%f", &score);

    if (score >= 50) {  //ถ้า score มากกว่าหรือเท่ากับ 50
        score = score + (score * 0.05); //บวกคะแนน 5%
    }
    printf("Final score: %.2f\n", score); //ปริ้นคะแนนสุดท้าย

    printf("End of evaluation\n"); //ปริ้นข้อความจบการประเมินผล

    return 0;//จบโปรแกรม
}

