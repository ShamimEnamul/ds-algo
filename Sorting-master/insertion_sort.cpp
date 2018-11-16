#include <iostream>
using namespace std;

void insert_sort(int ara[], int n){

    for(int i = 1; i < n; i++){
        int loc = i;
        while(ara[loc] < ara[loc - 1] && loc > 0){
            swap(ara[loc], ara[loc - 1]);
            loc--;
        }
    }
}

void print_array(int ara[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", ara[i]);
    }
    putchar('\n');
}

int main(){
    int ara[5] = {5, 4, 3, 2, 1};
    puts("Print array: ");
    print_array(ara, 5);
    puts("Print array: ");
    insert_sort(ara, 5);
    print_array(ara, 5);
}

