////
//// Created by 杨诗宇 on 16/7/10.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int v[10000];
//
//int main(){
//    int n , m ,a,b;
//    cin>>n>>m;
//    for (int i = 0; i < n; ++i) {
//        cin>>v[i];
//    }
//    sort(v,v+n);
//    for (int j = 0; j < m; ++j) {
//        cin>>a>>b;
//        cout<<upper_bound(v,v+n,a)-lower_bound(v,v+n,b)<<endl;
////upperBound 得到的是一个地址    要想得到一个整数 必须用做差的方法
//    }
//
//
//    return 0;
//}