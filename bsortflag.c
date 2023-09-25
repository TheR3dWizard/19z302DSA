#include <stdio.h>
#include <stdlib.h>
#include "utilities.h"
#include <time.h>

void bsort(int* l,int n){
    printf("\n");
    //printf("size is %d",size);
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            if(l[j] > l[j+1]){
                swap(l,j,j+1);
            }
        }
    }
}

void bsortf(int* l,int n){
    printf("\n");
    int check = 1;
    int i = 0;
    double sum = 0.0;
    for(i;i<n;i++){
        if(check){
            check = 0;
            for(int j = i;j<n-1;j++){
                sum+= 1;
                if(l[j] > l[j+1]){
                    swap(l,j,j+1);
                    
                    check = 1;
            }
            //sum+= j;
        }
        }else{
            break;
        }
    }
    printf("no of times inner loop was called = %Lf\n",sum);
}

int main(){
    //defining the array
    FILE* fa = fopen("ascsorted.txt","r");
    FILE* fd = fopen("descsorted.txt","r");
    FILE* fr = fopen("random.txt","r");
    FILE* fn = fopen("nearlysorted.txt","r");


    int* la = (int*)malloc(100000*sizeof(int));
    for(int i = 0;i<100000;i++){
        fscanf(fa,"%d ",la+i);
    }
    int* ld = (int*)malloc(100000*sizeof(int));
    for(int i = 0;i<100000;i++){
        fscanf(fd,"%d ",ld+i);
    }
    int* lr = (int*)malloc(100000*sizeof(int));
    for(int i = 0;i<100000;i++){
        fscanf(fr,"%d ",lr+i);
    }
    int* ln = (int*)malloc(100000*sizeof(int));
    for(int i = 0;i<100000;i++){
        fscanf(fn,"%d ",ln+i);
    }
    
    
}   

