#include "api.h"



// 编译动态库 libapi.so
// 编译指令：gcc -fPIC -shared -o libapi.so api.c   
int FLAG_1=1;


void test(int vol)
{
    static int flag = 1;
    if(vol==1)
    {
        flag++;
    }

    printf("matao-test_1 flag=%d FLAG_1=%d\n",flag,FLAG_1);
}

void test_1(int vol)
{
<<<<<<< HEAD
    printf("matao-test api\n");
    matao();
=======
    if(vol==1)
    {
        FLAG_1++;
    }
    printf("matao-test_1 FLAG_1=%d\n",FLAG_1);
>>>>>>> 2451533ab5a0d6c09bac9ad3280975645bddb541
}