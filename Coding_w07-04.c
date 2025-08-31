#include <stdio.h>

int main() {
    int level;///ประกาศตัวแปร level เป็นจำนวนเต็ม
    printf("Enter level (1-4): ");
    scanf("%d", &level);//ปรับค่าตัวแปร level จากผู้ใช้

    switch (level) {

        case 1: //ถ้า level เท่ากับ 1
        printf("Silver →5%% discount\n");//ปริ้น Silver →5% discount
        break;//ออกจากเงื่อนไข

        case 2: //ถ้า level เท่ากับ 2
        printf("Gold →10%% discount+ Reward points\n");//ปริ้น Gold →10% discount+ Reward points
        break;//ออกจากเงื่อนไข

        case 3: //ถ้า level เท่ากับ 3
        printf("15%% discount + Reward points + Birthday gift\n"); //ปริ้น 15% discount + Reward points + Birthday gift
        break;//ออกจากเงื่อนไข

        case 4: //ถ้า level เท่ากับ 4
        printf("ได้ทุกอย่าง + VIP events\n"); //ปริ้น ได้ทุกอย่าง + VIP events
        break;//ออกจากเงื่อนไข

        default://ถ้าไม่เข้าเงื่อนไขข้างบน
        printf("Invalid Please Tryagain\n");// ปริ้น Invalid Please Tryagain
        break;//ออกจากเงื่อนไข
    }

    return 0;//จบโปรแกรม
}