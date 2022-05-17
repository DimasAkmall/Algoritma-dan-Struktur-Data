#include <stdio.h>

int data[];
int size;

void tukar(int a, int b){
    int tmp = data[a];
    data[a] = data[b];
    data[b] = tmp;
}

void Bubble_sort(int array[],int size){
    for(int i = 1; i < size; i++){
        for(int j = size-1; j >= i; j--){
            if(array[j] < array[j-1]){
                tukar(j,j-1);
            }
        }
    }
}

void cetak_array(int array[], int size){
    for (int i = 0; i < size; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){

    printf("jumlah data : ");
    scanf("%d", &size);
    data[size];
    printf("masukkan data :\n");
    for ( int i = 0; i < size; i++){
        printf("%d. ", i+1);
        scanf("%d", &data[i]);
    }

    Bubble_sort(data, size);
    printf("Data anda dalam ascending : \n");
    cetak_array(data, size);

    return 0;
}