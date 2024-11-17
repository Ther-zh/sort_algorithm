#include<iostream>
#include"basicFun.h"
using namespace std;
//以下排序算法默认从小到大排序

//冒泡排序，时间复杂度O(n^2)
void bubbleSort(int* arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    int arr[10]={7,5,2,9,8,3,1,6,6,-1};
    //结果预期：-1 1 2 3 5 6 6 7 8 9
    bubbleSort(arr,10);
    print(arr,10);
}