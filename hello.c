#include <stdio.h>
#include func.c
  
int main(){
    int ret;
    ret = soma(2, 3);
    printf("O resultado é: %d", ret);
    return 0;
}