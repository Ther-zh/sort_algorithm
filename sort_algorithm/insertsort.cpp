#include<iostream>
#include"basicFun.h"
//插入排序，复杂度O(n^2)
//由于数组实现"插入"操作不方便，so核心在于怎么插入
//代码实现用i标志有序部分与无序部分边界，每次记录下边界右边一位后把它覆盖掉，作为"缓冲区",直到找到要插入的位置把它插进去
void insertSort(int* arr,int size){
    //只有一个数据的0位置是有序的,i位置是有序数列后的待插入数
    for(int i=1;i<size;i++){
        //存档待插入数
        int record=arr[i];
        //从有序序列中查找
        for(int j=i-1;j>=0;j--){
            //找到第一个比record小的，把record插它后面
            if(arr[j]<record){
                arr[j+1]=record;
                break;
            }
            else{
                //否则将这个位置的值挪到"缓冲区"，目的为了找到后可以直接把record移到这里
                arr[j+1]=arr[j];
                if(j==0){
                    arr[j]=record;
                }
            }
        }
    }
}
int main(){
    int arr[10]={7,5,2,9,8,3,1,6,6,-1};
    //结果预期：-1 1 2 3 5 6 6 7 8 9
    insertSort(arr,10);
    print(arr,10);
}