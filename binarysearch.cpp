#include <iostream>
using namespace std;
int main(){
    int n=10,start=0,end=9,mid,key=10;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i<=5;i++){
        mid = (start+end)/2;

        if(arr[mid]==key){
            cout<<"key is find"<<arr[mid];
            break;

        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }
}