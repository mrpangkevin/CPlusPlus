#include<iostream>
#include<vector>
using namespace std;

void viewvec(){
    vector<int> vint;
    int i;
    for(i=0;i<10;i++){
        vint.push_back(i);
    }
    for(i=0;i<10;i++){
        cout<<vint[i]<<",";
    }
    cout<<endl;
}

int main(int argc, char* argv[]){

    viewvec();
}

