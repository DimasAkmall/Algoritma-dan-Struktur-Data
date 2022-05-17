#include <stdio.h>
#define MAX 3

typedef struct {
    int data[MAX];
    int head;
    int tail;
} Queue;

Queue antri;

int isEmtpy(){
    if (antri.tail == -1){
        return 1;
    } else {
        return 0;
    }
}

int isFull(){
    if (antri.tail == MAX - 1){
        return 1;
    } else {
        return 0;
    }
}

void Awal(){
    antri.head = antri.tail = -1;
}

void Masuk(int data){
    if (isEmtpy() == 1){
        antri.head = antri.tail = 0;
        antri.data[antri.tail] = data;
        printf("%d masuk\n", antri.data[antri.tail]);
    } else if (isFull() == 0){
        antri.tail++;
        antri.data[antri.tail] = data;
        printf("%d masuk \n", antri.data[antri.tail]);
    } 
}

int Keluar(){
    int d = antri.data[antri.head];
    for (int i = antri.head; i <= antri.tail-1; i++){
        antri.data[i] = antri.data[i+1];
    }
    antri.tail--;
    return d;
}

void Tampil(){
    if (isEmtpy() == 0){
        for (int i = antri.head; i <= antri.tail; i++){
            printf("%d ", antri.data[i]);
        }
        printf("\n");
    } else {
        printf("Antrian kosong!\n");
    }
}

void Hapus(){
    antri.head = antri.tail = -1;
    printf("data sudah dihapus\n");
}

int main(){

    int pilih, data;
    Awal();

    do{
        printf("\n");
        printf("1.EnQueue\n");
        printf("2.DeQueue\n");
        printf("3.Display\n");
        printf("4.Delete\n");
        printf("5.Exit\n");
        printf("Masukkan Pilihan: "); 
        scanf("%d", &pilih);

        switch(pilih){
            case 1:
                printf("Data: ");
                scanf("%d", &data);
                Masuk(data);
                break;
            case 2:
                printf("data yang keluar: %d\n", Keluar());
                break;
            case 3:
                Tampil();
                break;
            case 4:
                Hapus();
                break;
        }
    } while(pilih != 5);

    return 0;
}