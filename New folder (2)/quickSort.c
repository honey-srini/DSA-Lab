#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

void main(){
    int arr[6] = {20,10,90,80,40,30};
    for (int i = 0; i < 6; i++)
    {
        printf("%d--",arr[i]);
    }
    printf("\n");
    quick_sort(arr,1,6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d--",arr[i]);
    }
    printf("\n");
}