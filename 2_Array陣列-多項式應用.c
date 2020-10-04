#include <stdio.h>
#include <stdlib.h>
#define EPSILONS 0.004


/*多項式的運算*/

//polynomial 多項式

void showPoly(double poly[]);
void addPolys(double poly1[],double poly2[],double poly3[]);
void subPolys(double poly1[],double poly2[],double poly3[]);
void mutiPolys(double poly1[],double poly2[],double poly4[]);

double max_doble_value(double a,double b);

int main(void) {
    // 5x^4 + 4x^3 - 2x^2 + 7
    double poly1[]={ 4.0 , 5.0 ,4.0 , 2.0 ,0.0 , 7,0 } ;
    // 3x^5 + 2x^4 + 4x^1 +2  
    double poly2[]={ 5.0 , 3.0 ,2.0 , 0.0 ,0.0 , 4,0 , 2.0 } ;

    //For evaluation poly
    // n + 2
    double poly3[7]; //For addition and substraction     (5+2)
    double poly4[11]; //For multipilation    ((4+5)+2)

    //show polynomial
    printf("polynomial 1:\n");
    showPoly(poly1);
    printf("polynomial 2:\n");
    showPoly(poly2);

//     //Doing addition of polynomial 1 and polynomial 2
//     addPolys(poly1,poly2,poly3);
//     //show result;
//     printf("poly1 + poly2 = \n");
//     showPoly(poly3);


//     //Doing substraction of polynomial 1 and polynomial 2
//     subPolys(poly1,poly2,poly3);
//     //show result;
//     printf("poly1 - poly2 = \n");
//     showPoly(poly3);

//     //Doing multipilation of polynomial 1 and polynomial 2
//     subPolys(poly1,poly2,poly4);
//     //show result;
//     printf("poly1 * poly2 = \n");
//     showPoly(poly4);

    return 0;
}

//------------------------------

/* show polynomial */
void showPoly(double poly[]){
    int max_power = 0;
    int n = 0;
    max_power = poly[0];  //最高次方 = 陣列的第一個值

    //只處理到次方大於1的項次 因為x^1 的1 跟 x^0 的次方不要印出來
    for(n = max_power ; n>1 ; n--){  
          //若值在 -0.004~0.004 附近  視為 0 (太小了)
          if(poly[max_power-n+1]>EPSILONS || poly[max_power-n+1]< -EPSILONS){ 
              printf("%+.2fx^%d",poly[max_power-n+1],n);
              //%+.2f
              //如果数字是正数，即输出+号
              //如果数字是负数，即先输出-号再输出绝对值
          }
    }

    //顯示x^1的係數
    //此時n=1
    if(poly[max_power-n+1]>EPSILONS || poly[max_power-n+1]< -EPSILONS){
          printf("%+.2fx ",poly[max_power-n+1]);
    }

    n--; //n=0 表x第零項係數 x^0

    //顯示x^0的係數
    //此時n=0
    if(poly[max_power-n+1]>EPSILONS || poly[max_power-n+1]< -EPSILONS){
          printf("%+.2f",poly[max_power-n+1]);
    }

    printf("\n");
}
