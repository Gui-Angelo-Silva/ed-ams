#include <stdio.h>

int main(){
    int x, y, *px;
    y=100;
    px = &x;
    x = 200000000;
    printf("%d\n",x);
    printf("%d\n",*px);
    printf("Digite um valor para x: ");
    scanf("%d",&x);
    printf("%d\n",x);
    px = &y;
    printf("Digite um valor para x: ");
    scanf("%d",px); //scanf("%d",&*px);   
    printf("%d\n",*px);
    printf("%p\n",&x);
    printf("%p\n",px);
}