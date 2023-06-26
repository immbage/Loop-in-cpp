#include <iostream>

using namespace std;
int data[10];
int n;

int main()
{
void input(){
    cout<<"Masukkan Jumlah Data = ";
    cin>>n;

    cout<<endl;

    for (int i=0;i<n;i++){
        cout<<"Masukkan Data Ke-"<<i+1<<" = ";
        cin>>data[i];
    }
    cout<<endl;
}

void show(){
    for (int i=0;i<n;i++){
        cout<<"["<<data[i]<<"]";
    }
    cout<<endl;
}

void swap (int a,int b){
    int t;
    t=data[b];
    data[b]=data[a];
    data[a]=t;
}
