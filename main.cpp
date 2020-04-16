#include "sorting.h"

int sorted[10];

int main(){
    int i=0;
    int data[10];


    for(i=0; i<10; i++){
        cin >>data[i];
    }

    merge_sort(data, 0, 9);

    for(i=0; i<10; i++){
        cout <<data[i]<<endl ;
    }






    return 0;
}