#include <stdio.h>

int main(void) {
    int level;
    printf("Enter membership level (1-4): ");
    if (scanf("%d", &level) != 1) {
        printf("Invalid membership level\n");
        return 0;
    }

    switch (level) {
        case 1:
            printf("Silver Member: 5%% discount\n");
            break;
        case 2:
            printf("Gold Member: 10%% discount + Reward points\n"); 
            break;
        case 3:
            printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            printf("Diamond Member: 15%% discount + Reward points + Birthday gift + VIP events\n"); 
            break;
        default:
            printf("Invalid membership level\n");
    }
    return 0;
}

// #include <stdio.h>

// int main(void) {
//     int level;//กำหนดตัวแปรระดับสมาชิก
//     printf("Enter membership level (1-4): ");// แสดงข้อความให้ผู้ใช้กรอกระดับสมาชิก
//     if (scanf("%d", &level) != 1) {
//         printf("Invalid membership level\n");// กรณีที่กรอกเลขนอกเหนือจาก1-4จะแสดงผลลัพธ์ Invalid membership level
//         return 0;//จบโปรแกรม
//     }

//     switch (level) {
//         case 1:
//             printf("Silver Member: 5%% discount\n"); // แสดงข้อความสิทธิประโยชน์ของสมาชิกตามระดับ
//             break;
//         case 2:
//             printf("Gold Member: 10%% discount + Reward points\n"); // แสดงข้อความสิทธิประโยชน์ของสมาชิกตามระดับ
//             break;
//         case 3:
//             printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n"); // แสดงข้อความสิทธิประโยชน์ของสมาชิกตามระดับ
//             break;
//         case 4:
//             printf("Diamond Member: 15%% discount + Reward points + Birthday gift + VIP events\n"); // แสดงข้อความสิทธิประโยชน์ของสมาชิกตามระดับ
//             break;
//         default:
//             printf("Invalid membership level\n");// กรณีที่กรอกเลขนอกเหนือจาก1-4จะแสดงผลลัพธ์ Invalid membership level
//     }
//     return 0;//จบโปรแกรม
// }