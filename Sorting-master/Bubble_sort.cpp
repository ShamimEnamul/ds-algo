#include<stdio.h>
#include <iostream>
using namespace std;

void bubble_sort(int ara[], int n){
    bool flag;
    for(int i = 0; i < n; i++){
        flag = false;
        for(int j = i + 1; j < n; j++){
            if(ara[i] < ara[j]){
                swap(ara[i], ara[j]);
                flag = true;
            }
        }
        if(!flag) break;
    }
}

void print_array(int ara[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", ara[i]);
    }
    putchar('\n');
}

int main(){
    int ara[5] = {1, 4, 1, 2, 5};
    puts("Print array: ");
    print_array(ara, 5);
    puts("Print array: ");
    bubble_sort(ara, 5);
    print_array(ara, 5);
}
