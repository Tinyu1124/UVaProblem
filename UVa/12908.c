#include<stdio.h>
int main(){
    int num = 0; /* 題目給的頁數*/
    
    while(1){
        int sum = 0;    
        int page = 0;
        scanf("%d", &num);
        if(num == 0) break;
        for(int i = 1; i <= num + 1, sum <= num; i++){
            sum +=  i;  
            if(sum > num){      
                page = sum - num;   
                printf("%d %d\n",page,i);
            }
            
        }
    }
}
