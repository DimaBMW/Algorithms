//Bubble sort
#include<iostream>
using namespace std;

void Selection_Sort(int array[],const int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]>array[j]){swap(array[i], array[j]);}
        }
    }
    for(int i=0;i<size;i++){cout<<array[i]<<endl;}
}
int main(){
    setlocale(LC_ALL,"rus");
    const int size=12;
    int array[size]={2,4,5,6,9,12,67,45,89,33,11,987};
    Selection_Sort(array,size);
    return 0;
}
