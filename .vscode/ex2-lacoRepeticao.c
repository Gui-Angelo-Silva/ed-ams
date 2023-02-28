#include <stdio.h>
#define N 1001

int main(){
    int zeroADez=1, num=1;
    /*
    while(num<N){
        printf("\n------------ WHILE - Tabuada do %d -----------\n",num);
        zeroADez=1;
        while(zeroADez<11){
            printf("%d * %d = %d\n",num, zeroADez, num*zeroADez);
            zeroADez++;
        }
        num++;
    }
    num=1;
    do{
        printf("\n------------ DO WHILE - Tabuada do %d -----------\n",num);
        zeroADez=1;
        do{
            printf("%d * %d = %d\n",num, zeroADez, num*zeroADez);
            zeroADez++;
        }while(zeroADez<11);
        num++;
    }while(num<N);

    for(num=1; num<N; num++){
        printf("\n------------ FOR - Tabuada do %d -----------\n",num);
        for(zeroADez=1; zeroADez<11; zeroADez++){
            printf("%d * %d = %d\n",num, zeroADez, num*zeroADez);
        }
    }
*/
    //TOP!!!
    zeroADez=1; num=1;
    while(num <3){
        printf("%d * %d = %d\n",zeroADez, num, zeroADez*num);
        zeroADez++;
        if(zeroADez==11){
            zeroADez=1;
            num++;
        }
    }

}