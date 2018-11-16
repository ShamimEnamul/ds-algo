#include <iostream>
using namespace std;
void print_array(int ara[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", ara[i]);
    }
    putchar('\n');
}
void _merge(int *L, int *R, int A[], int lLength, int rLength){

    int i,j,k=0;
    while(i<lLength && j<rLength){
        if(L[i]<R[i]){
            A[k] = L[i];
            i++;k++;
        }
        else{
            A[k] = R[j];
            k++;j++;
        }
    }
    while(i<lLength){
        A[k] = L[i];
        k++;i++;
    }
    while(j<rLength){
        A[k] = R[j];
        k++;j++;
    }
}
void merge_sort(int A[], int n){
    cout<<"Ha ha ha "<<endl;
    print_array(A,n);
    int *L, *R;
    if(n<2)
        return;
    int Mid = n/2;
    L = (int*)malloc(Mid*sizeof(int));
	R = (int*)malloc((n- Mid)*sizeof(int));
    for(int i=0;i<Mid;i++){
        L[i] = A[i];
        //cout<<"LI"<<L[i]<<endl;
    }
    for(int i=Mid;i<n;i++){
        R[i-Mid] = A[i];
    }
    cout<<"L : "<<Mid<<" R : "<<n-Mid<<endl;
    merge_sort(L,Mid);
    merge_sort(R,n-Mid);
    _merge(L, R, A, Mid, n-Mid);
}



int main(){
    int ara[] = {5, 4, 3, 2, 1};
    puts("Print array: ");
    print_array(ara, 5);
    puts("Print array: ");
    merge_sort(ara, 5);
    print_array(ara, 5);
}

