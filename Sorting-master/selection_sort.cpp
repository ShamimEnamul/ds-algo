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
        int Min = A[i], idx;
        for(int j=i + 1;j<n;j++){
            if(A[j]<Min){
                Min = A[j];
                idx = j;
            }
        }
        if(A[i] != Min){
            swap(A[i], A[idx]);
        }
    }
}

int main(){
    int ara[] = {5, 4, 3, 2, 1};
    puts("Print array: ");
    print_array(ara, 5);
    puts("Print array: ");
    selection_sort(ara, 5);
    print_array(ara, 5);
}

