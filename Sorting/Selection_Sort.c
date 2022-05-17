#include <stdio.h>

void tukar(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void Selection_sort(int array[],int size){
    for (int step = 0; step < size-1; step++){
        int min_index = step;
        for (int i = step+1; i < size;i++){
            if (array[i] < array[min_index]){
                min_index = i;
            }
        }
        tukar(&array[min_index], &array[step]);
    }
}

void cetak_array(int array[], int size){
    for (int i = 0; i < size; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){

    int size;
    printf("jumlah data : ");
    scanf("%d", &size);
    int data[size];
    printf("masukkan data :\n");
    for ( int i = 0; i < size; i++){
        printf("%d. ", i+1);
        scanf("%d", &data[i]);
    }

    Selection_sort(data, size);
    printf("Data anda dalam ascending : \n");
    cetak_array(data, size);

    return 0;
}