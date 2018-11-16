#include <iostream>
using namespace std;
void print_array(int ara[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", ara[i]);
    }
    putchar('\n');
}
void insert_sort(int A[], int n){
    int Key,j, tmp;
    for(int i=1;i<n;i++){
        Key = A[i];
        j = i - 1;
        while(A[j]>Key && j>=0){
            swap(A[j], A[j+1]);
            j--;
        }
    }
}



int main(){
    int ara[] = {5, 4, 3, 2, 1};
    puts("Print array: ");
    print_array(ara, 5);
    puts("Print array: ");
    insert_sort(ara, 5);
    print_array(ara, 5);
}

