#include <stdio.h>

int main() {
    int age;//ประกาศตัวแปร age เป็นจำนวนเต็ม
    int level;//ประกาศตัวแปร level เป็นจำนวนเต็ม
    int amount;//ประกาศตัวแปร amount เป็นจำนวนเต็ม
    float discount = 0;//ประกาศตัวแปร discount เป็นจำนวนจริง และกำหนดค่าเริ่มต้นเป็น 0

    printf("Enter your age:\n");//ปริ้น Enter your age:
    scanf("%d", &age);//ปรับค่าตัวแปร age จากผู้ใช้

    printf("Enter level (1-5):\n");//ปริ้น Enter level (1-5):
    scanf("%d", &level);//ปรับค่าตัวแปร level จากผู้ใช้

    printf("Enter amount:\n");//ปริ้น Enter amount:
    scanf("%d", &amount);//ปรับค่าตัวแปร amount จากผู้ใช้
   
    switch (level) {//กำหนดเงื่อนไข switch โดยใช้ตัวแปร level
        case 3:
        case 4:
            discount = 20;{//หากระดับvipตั้งแต่3-4 กำหนดค่า discount เป็น 20
        }
        break;
        case 5:
            discount = 25;{//หากระดับvipเท่ากับ5 กำหนดค่า discount เป็น 25
        }
        break;
    
    default:
        if (age > 60 || amount > 50000){//หากอายุมากกว่า60หรือยอดซื้อมากกว่า50000 discount เป็น 25
           discount = 25;
        
        }else if ((age >=18 || age<=25) && (amount>1000)){//หากอายุอยู่ระหว่าง18-25และยอดซื้อมากกว่า1000 discount เป็น10
            discount = 10;

        }else if ((age >=30 || age<=40) && (amount>2000)){//หากอายุอยู่ระหว่าง30-40และยอดซื้อมากกว่า2000 discount เป็น15
            discount = 15;
        }
        break;
    }

    printf("\n--- Customer Info ---\n");//ปริ้น --- Customer Info ---
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, level, (float)amount);//ปริ้นข้อมูลลูกค้า

        if (amount > 0) {//หากยอดซื้อมากกว่า0
    printf("Discount received: %.0f%%\n", discount);//ปริ้นส่วนลดที่ได้รับ
    } else {
    printf("No discount applied\n");//ปริ้น ไม่มีส่วนลด
    }



        printf("Thank you for shopping with us!\n");//ปริ้น Thank you for shopping with us!
          return 0;
    }


    
    






    


   

