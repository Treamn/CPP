#include <iostream>
using namespace std;

int main(){
    int a[55];
    for(int i = 0; i < 55; i++){
        int b;
        cin>>b;
        if(b < 0 || b > 55){
            continue;
        }else if(b == 0){
            break;
        }else{
            a[i] = b;
        }
    }

    for(int i = 0; i < 55; i++){
        if(a[i] != 0){
            cout<<a[i]<<endl;
        }else{
            break;
        }
    }
    
    

}