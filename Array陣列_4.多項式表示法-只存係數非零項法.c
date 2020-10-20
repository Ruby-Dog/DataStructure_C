#include <stdio.h>
#include<conio.h>

/* P(x) = 2x^7+3x^4+3 
   採用 只存係數非零項法 */
   
void showPoly(int poly[]);   
int main()
{
    
    int poly_1[]={3,2,7,3,4,3,0};  
    
    showPoly(poly_1);

    return 0;
}

void showPoly(int poly[]){
    
    int not_zero_num=poly[0];
    int i;
    int coefficient , power ;
    printf( " p(x) = ");
    for(i=0;i<not_zero_num;i++){
        coefficient = poly[i*2+1];
        power=poly[i*2+2];
       
        int poly_size = sizeof(poly)/sizeof(poly[0]);
        /*
        sizeof可以直接取得整數變數或整數陣列所佔的記憶體空間。
        因此，我們可以直接以整數陣列所佔的記憶體空間 除以 整數陣列中的一個註標所佔的記憶體空間 
        來求得該整數陣列的長度。
        */
        if( power == 0){
                
            if(i==0){
                printf("%d",coefficient);
            }else{
                printf("+%d",coefficient);
            }
    
        }else{
            
            if(i==0){
                printf("%dx^%d",coefficient,power);
            }else{
                printf("+%dx^%d",coefficient,power);
            }
        }       
    }
    
    
    
};
