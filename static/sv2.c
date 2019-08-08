#include <stdio.h>

int global1;

int global2 = 4;

int static file1 = 5;

void test1()
{
    printf("sv2 simple function test1 called.\n");
}

static void test2()
{
    printf("sv2 static function test2 called.\n");
}

extern void test3()
{
    printf("sv2 extern function test3 called.\n");
}

//static extern void test4() 编译时错误 error: cannot combine with previous 'static' declaration specifier
//{
//    printf("sv2 static & extern function test4 called.\n");
//}