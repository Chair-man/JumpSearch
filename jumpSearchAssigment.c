
#include <stdio.h>
#include<stdlib.h>
int min(int firstNum,int secondNum){
    if(firstNum>secondNum){
        return secondNum;
    }else{
        return firstNum;
    }
}
int jumpSearch(int myArr[],int size,int key){
    
    int step=4;
    int previous=0;
    while(myArr[min(step,size)-1]<key){
        if(myArr[step]==key){
            return step;
        }
        previous=step;
        step+=3;
        if(previous>size){
            return -1;
        }
    }
    int length=(previous+step)/2;
    if(myArr[length]==key){
       // printf("%d",length);
        return length;
    }else if(myArr[length]<key){
        previous=length;
        
    }else{
        step=length;
    }
    for(int i=previous;i<step;i++){
        if(myArr[i]==key){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int toFind=0;
    int indexNo=jumpSearch(arr,size,toFind);
    if(indexNo!=-1){
    printf("Found at index No=%d : value=%d",indexNo,arr[indexNo]);
        
    }
    else{
        printf("Not Found a Value");}
    

    return 0;
}



