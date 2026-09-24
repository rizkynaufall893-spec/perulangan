#include <iostream>
using namespace std;

int main() {
    string nama[4]={"milo","Joko","asep","ganjar"};
    int nilai[4]={65,78,90,85};
    int i;
    for(i=0;i<4;i++){
        cout<<"_____________"<<endl;
        cout<<"Nama anda: "<<endl;
        cout<<nama[i]<<endl;
        cout<<"Nialai Anda: "<<endl;
        cout<<nilai[i]<<endl;
    }
    return 0;
}
    
