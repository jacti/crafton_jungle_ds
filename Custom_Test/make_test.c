#include <stdio.h>
#define TESTCOUNT 10000

int main(){
    for(int i=0; i <TESTCOUNT ; i++){
        printf("1\n%d\n", i);
    }
    printf("2\n0\n");
}