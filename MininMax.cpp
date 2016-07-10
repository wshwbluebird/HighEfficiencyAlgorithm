////
//// Created by 杨诗宇 on 16/7/10.
////
//
//#include <iostream>
//using namespace std;
//
//int v[100000];
//int n; //数字的总共个数
//int m;  //要分成多少组
//
//int Pmin(int x){
//    int sumofpart = 0;
//    int i  = 0;
//    int j = 1;
//    while(i<n){
//        sumofpart += v[i];
//        if(sumofpart<=x);
//        else{
//            sumofpart = v[i];
//            j++;
//        }
//        i++;
//    }
//    if(j<=m) return 1;
//    return 0;
//}
//
//
//
//int main(){
//    cin>>n>>m;
//    int sumofv = 0;
//    for (int i = 0; i < n; ++i) {
//        cin>>v[i];sumofv+=v[i];
//
//    }
//
//    int low = 0;  //表示 不行的 最大值
//    int upp = sumofv; //表示 行的最小值
//    while(low<upp-1){
//        int middle = low + (upp-low)/2;
//        if(!Pmin(middle)) low = middle;
//        else upp = middle;
//    }
//    cout<<upp<<endl;
//    return  0;
//}