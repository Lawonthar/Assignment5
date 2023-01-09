//
// Created by msi on 1/1/2023.
//
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int min(int first, int second){

    if (second>first){
        return first;
    } else{
        return second;
    }
}

int jumpSearch(int arr[],int size,int key){

    int step = size/2;

    int previous=0;

    while (arr[min(step,size)-1] < key){

        previous = step;
        step= step + size/2;
        if (previous>= size){
            return -1;
        }

    }
    if(arr[step-1]==key){

        int index=step-1;

        return index;
    }
    int previous1= 0;
    int step1 = previous;
    while(arr[min(step1,step)-1] < key){
        previous1 = step1;
        step1 = step1 + size/4;
        if(previous1>=step){
            return -1;
        }

    }
    if(arr[step1-1]==key){
        int index= step1-1;
        return index;
    }

    for (int j=previous1; j < step; j++){

        if (arr[j]== key){

            return j;
        }

    }
    return -1;


}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,100,101,102,106,199};

    int size = sizeof (arr)/ sizeof(arr[0]);

    int toFind=7;

    int indexNumber= jumpSearch(arr,size,toFind);

    if (indexNumber!= -1){

        printf("We found\n");
        printf("found at index %d : data %d",indexNumber,arr[indexNumber]);
    } else{

        printf("Not found\n");
    }




    return 0;
}