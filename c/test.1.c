#include <stdio.h>
#include <time.h>

int main(void)
{
    // 获取当前时间
    time_t now = time(NULL);
    // 将时间转换为本地时间结构体
    struct tm *t = localtime(&now);

    // 打印欢迎横幅
    printf("***********************\n");
    printf("*  Welcome to C App   *\n");
    printf("***********************\n");
    printf("Hello, world!\n");
    // 以HH:MM:SS格式打印当前时间
    printf("Current time: %02d:%02d:%02d\n",
           t->tm_hour, t->tm_min, t->tm_sec);

    return 0;
}
