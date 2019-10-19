//#include <stdio.h>
#include<vector>
#include<iostream>
using namespace std;
int getMaxSum(vector<int> A, int n) {
    int dp0 = A[0], max = A[0];
    for(int i = 1; i < n; i++)
    {
        if(dp0 + A[i] > A[i])
            dp0 = dp0 + A[i];
        else
            dp0 = A[i];
        if(dp0 > max)
            max = dp0;
    }
    return max;
}
int getMaxSum(vector<int> v){
    int i,j;
    cout<< v.size()<<endl;
    int start=0,end=0,start0=0,end0=0;
    int dp0,dp;
    dp0=0;
    dp=v[0];
    for(i=1;i<v.size();i++){
        if(dp + v[i] > dp){
            dp += v[i];
            end=i;
        }else{
            start=++i;
            dp=v[i];
        }
        if(dp0<dp){
            start0=start;
            dp0=dp;
        }
    }
    cout<<start0<<","<<end<<":"<<dp0<<endl;
    return 0;
}
void view_vector_int(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(int argc, char* argv[]){
    int arr1[] = {1,2,-1,2,3,-6,1,-1};
    int arr2[] = {1,2,-1,2,3,-1,6,1};
    vector<int> ar1(arr1, arr1+sizeof(arr1)/sizeof(arr1[0]));
    vector<int> ar2(arr2, arr2+sizeof(arr2)/sizeof(arr2[0]));

//    cout<<"---------"<<endl<<getMaxSum(ar,5)<<endl;
    view_vector_int(ar1);
    getMaxSum(ar1);
    view_vector_int(ar2);
    getMaxSum(ar2);
}
