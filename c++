
#include <iostream>
using namespace std;

int main() {
    string nama[4];
    int nilai[4];
    int nilai1[4];
    int i;
    float r;
     for(i=0;i<4;i++){
         cout<<"Masukkan Nama "<<endl;
         cin>>nama[i];
        cout<<"Masukkan Nilai ke 1 "<<endl;
         cin>>nilai[i];
        cout<<"Masukkan Milai ke 2 "<<endl;
         cin>>nilai1[i];
     }
    for(i=0;i<4;i++){
        cout<<"Nama Anda"<<endl;
        cout<<nama[i]<<endl;
        cout<<"Nilai"<<endl;
        cout<<nilai[i]<<endl;
        cout<<"rata-rata nilai"<<endl;
        r=(nilai[i]+nilai1[i])/2;
        cout<<r<<endl;
    }
    return 0;
}
    
