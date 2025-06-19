#include <stdio.h>
int test(){
    return -1;
}
int test2(){
    test();
}
int main()
{
    printf("%d", test2());
}