#include <stdio.h>
#include <stdlib.h>

 int main(){
    int i, j;
    int *p;
    p = &i; // p = i
    *p = 5; // p = 5
    j = i; // j = i

    // p = i = j = 5
    printf("%d %d %d", i, j, *p); 
    return 0;
}

// operator assignment
/* int main(){

    int nilai[3], *penunjuk;
    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;

    penunjuk = &nilai[0];
    printf("nilai %d ada di alamat memori %p \n", *penunjuk, penunjuk);
    printf("nilai %d ada di alamat memori %p \n", *(penunjuk+1), penunjuk+1);
    printf("nilai %d ada di alamat memori %p \n", *(penunjuk+2), penunjuk+2);

    return 0;
}*/

/*  int main(){
    int *p, a = 25, b;
    p = &a; 
    b = *p;

    printf("Nilai a = %d di alamat memori %p \n", a, p);
    printf("Nilai b = %d di alamat memori %p \n", b, p);
    printf("Nilai *p = %d di alamat memori %p \n", *p, p);
    return 0;
}*/

/*int main(){

    int i, j; 
    int *p;
    printf(" %d %d \n", p, &i);

    p = &i;

    printf(" %d %d \n", p, &i);
    return 0;
} */

/* int main(){
    int *p;
    printf("%d", *p);
}*/

/*void tukar(int *i, int *j){
    int t;
    t = *i;
    *i = *j;
    *j = t;
}

int main(){
    int a = 5, b = 10;
    printf("%d %d \n", a, b);
    tukar(&a,&b);
    printf("%d %d \n", a, b);
}*/

/* int main(){
    int *p;
    p = (int *) malloc (sizeof(int));
    *p = 10;

    printf("%d\n", p);
    printf("%d\n", *p);
    free(p); // melepas memori <stdlib.h>
}*/