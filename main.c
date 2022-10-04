#include"beep.h"

long hz,t;//定义全局变量

int main(){
    system("mode con cp select=65001");
    printf("输入声音频率;声音时间(';'分隔)");
    scanf("%d;%d",&hz,&t);//输入声音频率;声音时长

    beep(hz,t);//输出音频函数

    return 0;
}