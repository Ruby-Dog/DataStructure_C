/*
以陣列實現堆疊的步驟

如果想要設計一個容量為N的堆疊，內容物是帶有小數點的數字。
以C程式語言實作
Step 1. 宣告一個double型別的1維陣列，其維度最大值為N-1通常陣列名稱就取名為stack。
double   stack[N] ;
Step 2. 編寫一個函式，實現push動作；
Step 3. 編寫一個函式，實現pop動作；
Step 4. 編寫一個函式，實現topItem動作；
Step 5. 編寫一個函式，實現isFull動作；
Step 6. 編寫一個函式，實現isEmpty動作；
*/


#include <stdio.h>  //For printf()
#include <stdlin.h> //For using random number
#include <time.h>   //For seed of srand()



int push(int n, double stack[] , double item , int *top));
int push(int n, double stack[] , double item , int *top);
int topItem(int n,double stack[], double double *item ,int top);
int isFull(int n,int top);
int isEmpty(int top);

int main()
{
    int N=4; //堆疊大小為4
    

    return 0;
}

//n為最大儲存資料量

int push(int n, double stack[] , double item , int *top){
    if(isFull(n,*top)){
        return 1 ;  //stack Full
    }else{
        *top = *top +1;
        stack[*top]=item;
        return 0 ;  //Job finish
    }    
    
}

int pop(int n,double stack[],double *item ,int *top){
    if(isEmpty(*top)){
        return 1;  //Stack Empty
    }else{
        *item=stack[*top];
        *top = *top -1;
        return 0 ; //Job finish
    }
}


int topItem(int n,double stack[], double double *item ,int top){
    if(isEmpty(top)){
        return 1;   //Stack Empty
    }else{
        *item = Stack[top];
        return 0 ;  //Job finish
    }
}


int isFull(int n,int top){
    if(top>=n-1)  //(n<=top+1)
        return 1;  //ture
    else
        return 0;  //false 
    
    
}

int isEmpty(int top){
    if(top<0)  //(top<=-1)
        return 1;  //ture
    else
        return 0;  //false 
    
}
