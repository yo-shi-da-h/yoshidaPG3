#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

typedef void (*PFunc)(int *);

void DispResult(int* s) {
	printf("%d秒待って実行されたよ\n", *s);
}

void setTimeout(PFunc p, int second) {

	Sleep(second * 1000);

	p(&second);
}

int main() {
	
	

	 int userChoice; 
    int dice;

    
    srand(time(0)); 

    dice = rand() % 6 + 1;  

    
    printf("サイコロの目を奇数か偶数かを当てる。\n");
    printf("1: 奇数, 2: 偶数\n");
    printf("選択肢を入力 (1または2): ");
    scanf_s("%d", &userChoice);

     printf("start\n");

	PFunc p;
	p = DispResult;
	setTimeout( p,3);

    
    printf("サイコロの目は: %d\n", dice);

   
    if (dice % 2 == 0) {
        
        if (userChoice == 2) {
            printf("正解\n");
        } else {
            printf("不正解\n");
        }
    } else {
        
        if (userChoice == 1) {
            printf("正解\n");
        } else {
            printf("不正解\n");
        }
    }
   

	return 0;
}