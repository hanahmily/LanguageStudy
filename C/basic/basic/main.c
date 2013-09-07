//
//  main.c
//  basic
//
//  Created by gao hongtao on 13-9-7.
//  Copyright (c) 2013年 gao hongtao. All rights reserved.
//

#include <stdio.h>
void print(){
    printf("Hello World \n");
    /*
     windows 是/r/n。/r是打字指针回到第一位，/n是进纸，两个组合就是最原始的换行
     */
    printf("换行\n");//换行，这个只是liunix系统
    printf("换行\r");//这个还是换行，这是mac系统的特性。
    printf("换行\f");//这个也是换行
    printf("换行\v");//这个也是换行
    printf("倒立的?\e\a\b\n");//
    printf("制表符\t制表符\n");//
    //printf("\u\x");u是16进制表示形式，0x是16进制字符开头
    //printf("其他直接返回当前字符\w\y\i\o\p\s\d\g\h\j\k\l\z\c\m \n");
    
    printf("\\b \b 就是空格 %d\n",'\b'==' ');
}

int loopTemp(){
    float fahr, celsius;
    int lower,upper, step;
    celsius = lower = -11;
    upper = 100;
    step = 10;
    do {
        fahr = celsius*9/5 + 32;
        //类型之间是必须匹配，否则会有编译警告
        printf("f:%3.3f c:%3.0f \n",fahr ,celsius);
        celsius = celsius + step;
    } while (celsius <= upper);
    return 0;
}

void io(){
    int c;
    while ((c = getchar()) != EOF) {//EOF 为ctrol-d 
        putchar(c);
    }
}
/*
 * main函数的返回值应该是int，估计是unix的信号
 */
int main(int argc, const char * argv[])
{   loopTemp();
    return 1;
}