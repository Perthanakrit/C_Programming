#include <stdio.h>

// กำหนดค่าคงที่ PI มีค่า 22.0/7
int main()
{
    float preGrade = 1.75; // เกรดเฉลี่ยเทอมที่แล้ว
    int preCredit = 21;    //
    int credit = 18;
    float requiredGrade = 2.00; // ต้องเกรดเฉลี่ยสะสม

    float thisTerm = ((requiredGrade * (preCredit + credit)) - (preGrade * preCredit)) / credit;

    printf("The GPA this semester should be %.2f", thisTerm);

    return 0;
}