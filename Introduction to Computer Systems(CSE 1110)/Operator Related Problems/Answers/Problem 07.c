#include <stdio.h>

int main(){
    int intNum, int_num;
    scanf("%d",&intNum);
    float floatNum, float_num;
    scanf("%f",&float_num);

    printf("Assignment:%f assigned to a int produces  %d\n",float_num, int_num=float_num);
    printf("Assignment:%d assigned to an float produces %f\n",intNum, floatNum=intNum);

    float cast_to_float = (float) intNum;
    int cast_to_int  = (int) float_num;
    printf("Type Casting: (float) %d produces %f\n", intNum, cast_to_float);
    printf("Type Casting: (int) %f produces %d\n", float_num, -cast_to_int );

    return 0;
}
