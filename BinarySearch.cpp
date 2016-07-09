////
//// Created by 杨诗宇 on 16/7/9.
////
//
//#include <iostream>
//using namespace std;
//
//int bsearch_me(int *A, int x ,int y,int v){
//    while(x<y) {
//        int m = x + (y - x) / 2;
//        if (v == A[m]) return m;
//        if (v > A[m]) { x = m + 1; }
//        else y = m;
//    }
//    return -1;
//}
//
//int main(){
//    int a[10] = {34,5,45,46,49,24,2,4,24,76};
//     cout<<bsearch_me(a,0,9,76)<<endl;
//    cout<<bsearch_me(a,0,10,76)<<endl;
//
//
//
//    return 0;
//}