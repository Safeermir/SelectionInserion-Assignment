// Program to sort the strings in alphabetical order.
#include<iostream> 
#include<cstring> 
using namespace std; 
int main() { 
char arr[][20]={"Hello World","zeeshan","safeer","ragav","pwskills"};
int n=sizeof(arr)/sizeof(arr[0]); 
char temp[20];  
for(int i=0;i<n;i++){ 
 for(int j=0;j<n-1-i;j++){ 
 if(strcmp(arr[j],arr[j+1])>0){ 
 strcpy(temp,arr[j]); 
 strcpy(arr[j],arr[j+1]); 
 strcpy(arr[j+1],temp); 
 } 
 } 
 } 
 for(int i=0;i<n;i++){ 
 cout<<arr[i]<<endl; 
 } 
 return 0; 
} 
