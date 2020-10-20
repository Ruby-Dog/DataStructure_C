#include <stdio.h>
#include <stdlib.h>

void showPoly(int poly[]);

int main()
{
    // P(x) = x^4+2x+2
    //採用 只存係數法
    int poly1[]={4,1,0,0,2,2};
    showPoly(poly1);
    
    return 0;
}

void showPoly(int poly[]){
    
    
    int max_power=poly[0];
    int nowItemPower = 0 ; //現在要做執行的該項次方數
    int coefficient_nowItemPower;  //現在正在執行中的該項之係數
    printf("P(x)= ");
    if(max_power!=0){
        printf("%d^%d",poly[1],max_power);
    }else{
        printf("%d",poly[1]);   //若x最大項次方為0時,x^0的係數會在poly[1]
    }
    
    for(nowItemPower = max_power-1 ; nowItemPower>=0 ; nowItemPower--){
        int coefficient_nowItemPower = poly[max_power-nowItemPower+1]; 
        //第一次->poly[2]  第一次->poly[3] 第三次->poly[3]... 
        //因為poly[1]剛剛已經執行過了,所以從poly[2]開始
        
        if(coefficient_nowItemPower==0){
            continue;
            /*continue的作用與break類似，主要使用於迴圈，所不同的是break會結束區塊的執行
            而continue只會結束接下來區塊中的陳述句，並跳回迴圈區塊的開頭繼續下一個迴圈，
            而不是離開迴圈*/
        }else if(nowItemPower!=0){
            printf("+%dX^%d",coefficient_nowItemPower,nowItemPower);
        }else{
            printf("+%d",coefficient_nowItemPower);
        }
        
    }
    printf("\n");
    
}

