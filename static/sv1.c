#include <stdio.h>

static int a;

int static b = 1;

int test1234;

void test_local()
{
    static int c;
    c++;
    printf("now c = %d\n", c);
}

void test1();

int main()
{
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // c+=1; 编译出错,无法访问 c
    for (int i = 0; i < 10; ++i) {
        test_local();
    }
    extern int global1, global2, file1;
    printf("global1: %d\n", global1);
    printf("global2: %d\n", global2);
    //printf("file1: %d]n",file1); // 链接失败
    test1();
    // test2();  Undefined symbols  编译失败
    test3();// 未声明 会有告警

}