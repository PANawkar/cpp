#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot= arr[s];

    int count=0; // to count at which postion pivot element is
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    // place pivot at right position
    int pivotIndex=s+count;
    swap(arr[pivotIndex], arr[s]);

    // left and right part ko sambal lo

    int i=s ; int j=e;

    //imp

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;


}
void quickSort(int arr[], int s, int e){

    //base case
    if(s>=e){
        return ;
    }

    // partition karenge
    int p=partition(arr, s,e); 

    //left part sort karenge
    quickSort(arr,s,p-1);

    //right part sort karenge
    quickSort(arr,p+1,e);
}
 
int main(){
int arr[8]={6, 6, -6, -2, -4, -6, 2, -6};
int n=8;

int s=0;
int e= n-1;
quickSort(arr,0, n-1);

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
