#include<iostream>
using namespace std;
void swap(int&a,int&b){
    int tem;
    tem=a;
    a=b;
    b=tem;
}
void print(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}