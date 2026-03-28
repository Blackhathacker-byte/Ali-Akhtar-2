#include<iostream>
using namespace std;
bool isAlreadyEntered(int arr[], int size, int n){
    for(int i = 0 ;i<size;i++){
        if (arr[i]==n){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[100];
    int count = 0;
    cout<<"Enter "<<n<<" numbers, one per line: "<<endl;
    for(int i=0 ; i<n ; i++)
    {
       int currentinput;
       cin>>currentinput;
       if(isAlreadyEntered(arr,count,currentinput)){
        cout<<"Already entered: "<<currentinput<<endl;
       }else{
        arr[count]=currentinput;
        count++;
       }
        }
        cout <<"Unique numbers entered: ";
        for (int i=0 ; i<count ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
    }


