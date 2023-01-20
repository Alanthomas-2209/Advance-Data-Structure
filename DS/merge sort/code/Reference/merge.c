
#include<stdio.h>
void merge(int arr[],int first,int mid,int last){
    int size1 = mid-first+1;
    int size2 = last-mid;

    int L[size1];
    int R[size2];

    for(int i=0;i<size1;i++){
        L[i] = arr[first+i];
    }
    for(int j=0;j<=size2;j++){
        R[j] = arr[mid+j+1];
    }


    int i = 0;
    int j = 0;
    int k=first;

    while(i<size1 && j<size2){
        if(L[i]<R[j]){
            arr[k]=L[i];
            i++;
            k++;
        }
        else{
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    while(i<size1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j<size2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int first,int last){
    if(first<last){
        // int mid = (first+last)/2;

        int mid = (last-first)/2+first;
        mergeSort(arr,first,mid);
        mergeSort(arr,mid+1,last);
        
        merge(arr,first,mid,last);
    }
}

int main(){
    int arr[]={4,5,6,3,2,8};
    int size = 6;
    mergeSort(arr,0,size-1);
    for(int i=0;i<6;i++){
        printf("%d",arr[i]);
    }
}