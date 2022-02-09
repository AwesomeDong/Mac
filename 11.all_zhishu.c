/****************************************************    *******“
  > File Name: 11.all_zhishu.c
  > Author: zyd
  > Mail: 3201702119@aufe.edu.cn
  > Created Time: 一  1/17 10:32:00 2022
    > Modified Time:一  1/17 10:52:50 2022
 ****************************************************    ***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/stat.h>

// 输出小于等于输入的数的所有质数

int main(){
    int digit, divisor, num;
    scanf("%d", &digit);    
    if (digit % 2 == 0){
        digit += 1;
		//printf("%d\n", digit);
    }
    printf("2\n");
    for (num = 3; num <= digit; num += 2){
        for (divisor = 3; divisor < num; divisor += 2){
            if (num % divisor == 0){
                break;
            }
        }
        if (divisor == num){
            printf("%d\n", num);
        }
    }
    return 0;
}

