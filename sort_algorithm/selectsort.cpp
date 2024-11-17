#include<iostream>
using namespace std;
#include"basicFun.h"
//选择排序，时间复杂度O(n^2)
void selectSort(int* arr,int size){
    //i的位置将要和i后面的最小值交换
    for(int i=0;i<size-1;i++){
        int min=arr[i];
        int minnum=i;
        for(int j=i;j<size;j++){
            if(arr[j]<min){
                min=arr[j];
                minnum=j;
            }
        }
        if(minnum!=i){
            swap(arr[i],arr[minnum]);
        }
    }
}
int main(){
    int arr[10]={7,5,2,9,8,3,1,6,6,-1};
    //结果预期：-1 1 2 3 5 6 6 7 8 9
    selectSort(arr,10);
    print(arr,10);
}