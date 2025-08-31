#include <stdio.h>

int main() {
    int level; //ประกาศตัวแปร level เป็นจำนวนเต็ม
    printf("Enter level (1-4): ");
    scanf("%d", &level); //ปรับค่าตัวแปร level จากผู้ใช้

    switch (level) {
        case 1: 
            printf("Beginner\n");//ปริ้น Beginner
            break;//ออกจากเงื่อนไข

        case 2: 
            printf("Intermediate\n");//ปริ้น Intermediate
            break;//ออกจากเงื่อนไข

        case 3: 
            printf("Advanced\n"); //ปริ้น Advanced
            break;//ออกจากเงื่อนไข

        case 4: 
            printf("Expert\n"); //ปริ้น Expert
            break;//ออกจากเงื่อนไข

        default: //ถ้าไม่เข้าเงื่อนไขข้างบน
            if(level<1)//ถ้า level น้อยกว่า 1
            printf("The level below 1 is not allowed\n");// ปริ้น The level below 1 is not allowed

            else if(level>4)//ถ้า level มากกว่า 4
            printf("The level above 4 is not allowed\n");// ปริ้น The level above 4 is not allowed
            
            break;//ออกจากเงื่อนไข
    }

    return 0;//จบโปรแกรม
}
