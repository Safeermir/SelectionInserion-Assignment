#include <iostream>
#include<algorithm>
using namespace std;
void insertionSort(int arr[], int n){ // Insertion sort  taking arguments array and size of array
 for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){   // Sorts the array in increasing order
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

}
int main() {
int arr[5]={5,4,3,2,1};
int N=5;
insertionSort(arr,N);
int a=0,b=0; // two variables for digits 

 for (int i=0;i<N;i++) {
        if (i%2==0) {
            a=a*10+arr[i];  // Add digit to number 'a'
        } else {
            b=b*10+arr[i];  // Add digit to number 'b'
        }
    }

    cout<<"Sum is: "<<(a+b)<<endl;

    return 0;
}

