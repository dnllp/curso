//1.- crear pointer para saber que hay en front y rear
//2.- colocar estos valores en -1 al inicializar
//3.- incrementar en 1 el valor de rear cuando agreguemos un elemento
//4.- retornar el valor de front al quitar un elemento e incrementar en 1 el valor de front al usar dequeue
//5.- antes de agregar un elemento revisar si hay espacio
//6.- antes de remover un elemento revisamor que existan elementos
//7.- asegurarnos de que al remover todos los elementos resetar nuestro front y rear a -1
//    y agregar el valor de 0 a front al hacer nuestro primer enqueue
#include <stdio.h>
#define SIZE 5 
int items[SIZE];
int rear =-1,front=-1;
void enQueue(int value){
    if(rear == SIZE-1)
    printf("El Queue esta lleno\n");
    else {
        if(front == -1)
        front = 0;
    rear=rear+1;
    items[rear] = value;
    printf("Se insertó el valor %d,\n",value);
    }
}
void deQueue(){
    if(front == -1)
        printf("No hay elementos\n");
    else{
        printf("Se eliminó el valor %d\n",items[front]);
        front++;
        if (front > rear){
            front=rear=-1;
        }

    }
}
int main(int argc, char const *argv[])
{
   deQueue();
   enQueue(10);
   enQueue(10);
   enQueue(10);
   enQueue(10);
   enQueue(10);
   enQueue(10);
    return 0;
}

    
