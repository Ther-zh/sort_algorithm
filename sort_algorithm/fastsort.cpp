#include<iostream>
#include"basicFun.h" 
//快速排序时间复杂度O(nlogn)(直观理解：每次划分大致认为规模减半（最坏情况变为1和n-1规模不变就是n^2）,而每次划分的处理大致为n次，所以时间复杂度就是nlogn)
//选定一个标准点，将小于其放左，大于其放右（就相当于把此标准点 "归位")
//同样，数组不好 "插入",只能想办法交换得到
//i与j之间的内容就是待交换的位置
void fastSort(int* arr,int size){
    if(size<=1){
        return;
    }
    int standard=arr[0];
    int i=0,j=size-1;
    while(i!=j){
        //标准在i处,就检查j处
        if(arr[i]==standard){
            //如果j不符合,把不符合的交给i，标准给j，而此时不符合的值和标准的相对位置就对了，i处就是符合的了，i++来缩小包围圈
            if(arr[j]<standard){
                swap(arr[i],arr[j]);
                i++;
            }
            //j>standard,j已经归位，j--缩小包围圈
            else{
                j--;
            }
        }
        //标准在j处，就检查i处，同理
        else{
            if(arr[i]>standard){
                swap(arr[i],arr[j]);
                j--;
            }
            else{
                i++;
            }
        }
    }
    //此时i就是标准的就对俩数组快排
    //此时理解fastsort前一个参数表示待排序的首元素的指针，后一个参数表示这个首元素后（包括这个元素）有多少个数待排序
    fastSort(arr,i);//从开始到i-1位置有i个元素
    fastSort(arr+i+1,size-i-1);//从i+1位置到结尾有size-(i+1)个（包括i在内的元素有i+1个）                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
}

int main(){
    int arr[10]={7,5,2,9,8,3,1,6,6,-1};
    //结果预期：-1 1 2 3 5 6 6 7 8 9
    fastSort(arr,10);
    print(arr,10);
}