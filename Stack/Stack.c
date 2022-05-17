#include <stdio.h>
#include <string.h>
#include <conio.h>
#define MAX_STACK 3

typedef struct{
    int top;
    char data[3][3];
}STACK;

STACK tumpuk;

void inisialisasi(){
    tumpuk.top = -1; // -1 = full
}

int isFull(){
    if (tumpuk.top == MAX_STACK - 1){
        return 1;
    } else {
        return 0;
    }
}

int isEmpty(){
    if (tumpuk.top == -1){
        return 1;
    } else {
        return 0;
    }
}

void push(char d[3]){
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top], d);
}

void pop(){
    printf(" data yang diambil: %s\n", tumpuk.data[tumpuk.top]);
    tumpuk.top--;
}

void display(){
    for (int i = tumpuk.top; i >= 0; i--){
        printf("data: %s\n", tumpuk.data[i]);
    }
}

void reset(){
    tumpuk.top = -1;
}

int main(){
    int pilihan;
    inisialisasi();
    char dt[3];

    do{
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Reset\n");
        printf("5. Exit\n");
        printf("Pilihan anda: "); 
        scanf("%d", &pilihan);

        switch (pilihan){
            case 1: 
                if (isFull() != 1){
                    printf("Data yang akan dimasukkan: ");
                    scanf("%s", dt);
                    push(dt);
                } else {
                    printf("array stack sudah penuh\n");
                }
                break;
            case 2:
                if (isEmpty() != 1){
                    pop();
                } else {
                    printf("data masih kosong\n");
                }
                break;
            case 3:
                if (isEmpty() != 1){
                    display();
                } else {
                    printf("data kosong\n");
                }
                break;
            case 4:
                reset();
                printf("data sudah kosong\n");
                break;
        }

    } while (pilihan != 5);
    printf("keluar dari program!!\n");
    getch();

    return 0;
}