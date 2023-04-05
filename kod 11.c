#include <stdio.h>
#include <stdlib.h>


int cogunlukbul(int arr[], int n) {
    int cogunluk = arr[0];
    int sayac = 1;
    int i;
    for (i=1; i < n; i++) {
        if (arr[i] == cogunluk) {
            sayac++;
        } else {
            sayac--;
            if (sayac == 0) {
                cogunluk = arr[i];
                sayac = 1;
            }
        }
    }
    return cogunluk;
}

int main() {
    int arr[] = {1, 2, 3, 2, 2, 2, 5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int cogunluk = cogunlukbul(arr, n);
    printf("Cogunluk element: %d\n", cogunluk);
    
    
    return 0;
}



