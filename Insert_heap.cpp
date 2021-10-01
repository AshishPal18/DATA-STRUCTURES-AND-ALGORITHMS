#include<iostream>
using namespace std;
void Insert(int A[],int n){
    int i=n,temp;
    temp = A[i];
    while(i>0 && temp>A[i/2]){
        A[i]=A[i/2];
        i = i/2;
    }
    A[i] = temp;
}
int main(){
    int Arr[]={10,20,30,25,5,40,35};
    for(int i=1;i<=6;i++){
        Insert(Arr,i);
    }
    for(int i=0;i<=6;i++)
        cout<<Arr[i]<<" ";
        cout<<endl;
        

    return 0;
}
