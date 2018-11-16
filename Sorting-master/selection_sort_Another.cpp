#include <iostream>
using namespace std;

void print_array(int ara[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", ara[i]);
    }
    putchar('\n');
}

void selection_sort(int A[], int n){

    //int id
    for(int i=0;i<n;i++){

        int Min = A[i], idx, j;
        j = i;
        while(j < n){

            if(A[j]<Min){
                Min = A[j];
                idx = j;
            }
            j++;
        }
        if(A[i] != Min){
            swap(A[i], A[idx]);
        }
    }
}

int main(){
    int ara[] = {0, 4, -27, 200, 1, -10, 0};
    puts("Print array: ");
    print_array(ara, 7);
    puts("Print array: ");
    selection_sort(ara, 7);
    print_array(ara, 7);
}


