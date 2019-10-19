#include<iostream>
#include<vector>
using namespace std;

int maxSubMatrix(vector<vector<int> > mat, int n) {
    // write code here

    if (n == 0) return 0;
    vector<vector<int> > matA = mat;//坐标点下方连续1的个数
    vector<vector<int> > matB = mat;//坐标点右方连续1的个数
    vector<vector<int> > matAA = mat;//坐标点下方连续0的个数
    vector<vector<int> > matBB = mat;//坐标点右方连续0的个数
    int i, j;
    int len = 0;
    int wide;
    for (i = n - 1; i >= 0; --i){
        for (j = n - 1; j >= 0; --j){
            if (mat[i][j] == 0){
                matA[i][j] = 0;
                matB[i][j] = 0;
                if (i == n - 1){
                    matAA[i][j] = 1;
                }
                else{
                    matAA[i][j] = matAA[i + 1][j] + 1;
                }
                if (j == n - 1){
                    matBB[i][j] = 1;
                }
                else{
                    matBB[i][j] = matBB[i][j + 1] + 1;
                }
            }
            else {
                if (i == n - 1){
                    matA[i][j] = 1;
                }
                else{
                    matA[i][j] = matA[i + 1][j] + 1;
                }
                if (j == n - 1){
                    matB[i][j] = 1;
                }
                else{
                    matB[i][j] = matB[i][j + 1] + 1;
                }
                matAA[i][j] = 0;
                matBB[i][j] = 0;
            }
        }
    }
    for (i = 0; i<n; i++){
        for (j = 0; j<n; j++){
            if (mat[i][j] == 0){
                wide = min(matAA[i][j], matBB[i][j]);
                while (wide>0){
                    if (matAA[i][j + wide - 1] >= wide && matBB[i + wide - 1][j] >= wide){
                        len = len<wide ? wide : len;
                    }
                    wide--;
                }
            }
            else{
                wide = min(matA[i][j], matB[i][j]);
                while (wide>0){
                    if (matA[i][j + wide - 1] >= wide && matB[i + wide - 1][j] >= wide){
                        len = len<wide ? wide : len;
                    }
                    wide--;
                }
            }
        }
    }
    return len;
}

int main()
{
    vector<vector<int> > n;
//    vector<int> v;
//    int m;
//    int temp;
//    while (cin >> m)
//    {
//        v.clear();
//        for (int i = 0; i<m; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                cin >> temp;
//                v.push_back(temp);
//            }
//            n.push_back(v);
//        }
//        cout<<maxSubMatrix(n, m)<<endl;
//    }
    int a1[] = {1,1,1,0,1,0};
    int a2[] = {1,0,1,0,1,0};
    int a3[] = {1,1,1,0,1,0};
    int a4[] = {1,0,0,0,1,0};
    int a5[] = {1,0,1,0,1,0};
    int a6[] = {1,0,1,0,1,0};
    vector<int>v1 (a1, a1+sizeof(a1)/sizeof(a1[0]));
    vector<int>v2 (a1, a2+sizeof(a2)/sizeof(a2[0]));
    vector<int>v3 (a1, a3+sizeof(a3)/sizeof(a3[0]));
    vector<int>v4 (a1, a4+sizeof(a4)/sizeof(a4[0]));
    vector<int>v5 (a1, a5+sizeof(a5)/sizeof(a5[0]));
    vector<int>v6 (a1, a6+sizeof(a6)/sizeof(a6[0]));
    n.push_back(v1);
    n.push_back(v2);
    n.push_back(v3);
    n.push_back(v4);
    n.push_back(v5);
    n.push_back(v6);
    cout<<maxSubMatrix(n, sizeof(a1)/sizeof(a1[0]))<<endl;

    return 0;
}
