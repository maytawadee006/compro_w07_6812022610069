#include<stdio.h>

int main(){
    int level;
    printf("Enter level (1-4):");
    scanf("%d",&level);

    if(level<=0){
        printf("The level below 1 is not allowed");
        return 0;
    }else if (level>4){
       printf("The level above 4 is not allowed");
    }else 
    switch(level){
        case 1:printf("Beginner\n");
               break;
        case 2:printf("Intermediate\n");
               break;
        case 3:printf("Advanced\n");
               break;
        case 4:printf("Expert\n");
               break;
        default:printf("Invalid level\n");
     }
   
    return 0;
}

// #include<stdio.h>

// int main(){
//     int level;//กำหนดตัวแปร level
//     printf("Enter level (1-4):");//แสดงข้อความให้ผู้ใช้กรอก level 
//     scanf("%d",&level);//รับค่า level

//     if(level<=0){//ถ้าเลขที่ใส่ใน level ต่ำกว่าหรือเท่ากับ 0
//         printf("The level below 1 is not allowed");//แสดงผลลัพธ์
//         return 0;//จบโปรแกรม
//     }else if (level>4){//ถ้า level มากกว่า 4 
//        printf("The level above 4 is not allowed");//แสดงผลลัพธ์
//     }else //ถ้าไม่เข้า 2 เงื่อนไขตัวเลขจะอยู่ในช่วง 1-4 เข้าสู่คำสั่ง switch case
//     switch(level){//เป็นคำสั่งเลือก level
//         case 1:printf("Beginner\n");// level 1 แสดงผลลัพธ์ Beginner
//                break;
//         case 2:printf("Intermediate\n");// level 2 แสดงผลลัพธ์ Intermediate
//                break;
//         case 3:printf("Advanced\n");// level 3 แสดงผลลัพธ์ Advanced
//                break;
//         case 4:printf("Expert\n");// level 4 แสดงผลลัพธ์ Expert
//                break;
//         default:printf("Invalid level\n");//กรณีที่เกิดผลลัพธ์ที่ไม่คาดฝัน
//      }
   
//     return 0;//จบโปรแกรม
// }