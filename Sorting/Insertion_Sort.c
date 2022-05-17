#include <stdio.h>

void Insertion_sort(int array[],int size){
    int tmp;
    for(int i = 1; i < size; i++){
        tmp = array[i];
        int j = i-1;
        while(array[j] > tmp && j >= 0){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = tmp;
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

    Insertion_sort(data, size);
    printf("Data anda dalam ascending : \n");
    cetak_array(data, size);

    return 0;
}