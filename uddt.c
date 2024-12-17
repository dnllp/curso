#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client{
    char name[50];
    char Id[10];
    float Credit;
    char Address[100];
};
int main(int argc, char const *argv[]){
    struct client cliente1={0};
    strcpy(cliente1.name,"Daniel Lopez");
    strcpy(cliente1.Id,"0001");
    cliente1.Credit=1000000;
    strcpy(cliente1.Address,"Cd. Mante");

    printf("El cliente %s con id %s con domicilio %s tiene un credito de %f \n",cliente1.name,cliente1.Id,cliente1.Address,cliente1.Credit);
    return 0;
}

