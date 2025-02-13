#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 50

void show1D(int a[], int n);
void fill1D(int a[], int n);
void sort1D(int a[], int n);

int main(){
    srand(time(0));
    int a[MAX];
    fill1D(a, 20);
    show1D(a,20);
    printf("\n\n");
    sort1D(a,20);
    show1D(a,20);



    return 0;
}

void show1D(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);    
    }


}
void fill1D(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        a[i]=rand()%100;

    }


}

void sort1D(int a[],int n){
    int i,j,count=0;
    int b;
    for(j=0;j<n;j++){
        count =0;
        for(i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                count++;
            }else{
                b = a[i];
                a[i] = a[i+1];
                a[i+1] = b;

            }
        }
        if(count==(n-1)){
            break;
        }
    }

}
/*
void sort1D(int a[], int n) {
    int i, j, temp;
    int swapped;

    for (j = 0; j < n - 1; j++) {
        swapped = 0;
        for (i = 0; i < n - 1 - j; i++) {  // Reduce comparisons per pass
            if (a[i] > a[i + 1]) {  // Corrected condition for ascending order
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break; // If no swaps, the array is sorted
    }
}
*/