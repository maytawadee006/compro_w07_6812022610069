#include <stdio.h>

int main() {
    int age, vip;
    double amount;
    int discount = 0;

   
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &vip);

    printf("Enter purchase amount: ");
    scanf("%lf", &amount);

    
    if (vip == 5 || amount > 50000) {
        discount = 25;
    } else if (age > 60 || (vip == 3 || vip == 4)) {
        discount = 20;
    } else if ((age >= 30 && age <= 40) && amount > 2000) {
        discount = 15;
    } else if ((age >= 18 && age <= 25) && amount > 1000) {
        discount = 10;
    }

  
    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip, amount);


    if (discount > 0) {
        printf("Discount received: %d%%\n", discount);

    } else {
        printf("No discount applied\n");

    }

    printf("\nThank you for shopping with us!\n");

    return 0;
}


// #include <stdio.h>

// int main() {
//     int age, vip;//กำหนดตัวแปร อายุ และระดับ vip
//     double amount;//ตัวแปรเก็บจำนวนเงินซื้อสินค้า
//     int discount = 0;//ตัวแปรเก็บส่วนลด

//     // รับค่าอินพุต
//     printf("Enter age: ");//แสดงข้อความให้ผู้ใช้กรอกอายุ
//     scanf("%d", &age);//รับค่าอายุ

//     printf("Enter VIP level (1-5): ");//แสดงข้อความให้ผู้ใช้กรอกระดับ VIP
//     scanf("%d", &vip);//รับค่า VIP

//     printf("Enter purchase amount: ");//แสดงข้อความจำนวนเงินซื้อสินค้า
//     scanf("%lf", &amount);//รับยอดซื้อ

//     // ตรวจสอบส่วนลดตามเงื่อนไข
//     if (vip == 5 || amount > 50000) {//ถ้า vip == 5 ซื้อของมากกว่า 50000
//         discount = 25;//ได้รับส่วนลด 25%
//     } else if (age > 60 || (vip == 3 || vip == 4)) {//ถ้า อายุ มากกว่า 60 เป็น vip 3 , vip 4 
//         discount = 20;//ได้ส่วนลด 20%
//     } else if ((age >= 30 && age <= 40) && amount > 2000) {//ถ้า อายุ 30-40ปี ซื้อของ 2000 บาท
//         discount = 15;//ได้ส่วนลด 15%
//     } else if ((age >= 18 && age <= 25) && amount > 1000) {//ถ้าอายุ 18-25ปี ซื้อของ 1000 บาท
//         discount = 10;//ได้ส่วนลด 10%
//     }

//     // แสดงผลลัพธ์
//     printf("\n--- Customer Info ---\n");//แสดงผลลัพธ์
//     printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip, amount);//แสดงผลลัพธ์


//     if (discount > 0) { //ถ้าส่วนลดมากกว่า 0 
//         printf("Discount received: %d%%\n", discount);//แสดงผลลัพธ์

//     } else {//ถ้าไม่ได้รับส่วนลด
//         printf("No discount applied\n");//แสดงผลลัพธ์

//     }

//     printf("\nThank you for shopping with us!\n");//แสดงผลลัพธ์

//     return 0;//จบโปรแกรม
// }