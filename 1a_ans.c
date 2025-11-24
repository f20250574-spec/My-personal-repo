#include<stdio.h>  
void  main() {    
    int x=100; 
    void change(int num);     
    printf("Before function call x=%d \n", x);    
    change(x);/*passing value in function   */ 
    printf("After function call x=%d \n", x);    
}    
void change(int num) {    
    printf("Before adding value inside function num=%d \n",num);    
    num=num+100;    
    printf("After adding value inside function num=%d \n", num);    
}    

