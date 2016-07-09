////
//// Created by 杨诗宇 on 16/7/9.
////
//
//#include <iostream>
//using namespace std;
//
//int cnt = 0 ;   //calculate how many pairs of index reverse number
//void merge_index_find(int *A, int x ,int y , int *T){
//    if(y-x>1){
//        int m = (y-x)/2  +x ; //middle
//        int p =x ,q  = m , i = x;  //how to change
//
//        merge_index_find(A,x,m,T);
//        merge_index_find(A,m,y,T);
//         while(p<m||q<y) {
//             //cout<<"poimt"<<endl;
//
//             if (q >= y || (p<m &&  A[p] <= A[q])) T[i++] = A[p++];//注意条件   这个一定要记住
//             else {
//                 T[i++] = A[q++];
//                 cnt += (m - p);
//                 cout<<cnt<<endl;
//             }
//         }
//             for (int j = x; j < y; ++j) {
//                 A[j] = T[j];
//             }
//
//
//
//
//    }
//}
//
//int main(){
//
//    int a[5] = {3,2,1,4,5};
//    int b[5];
//    merge_index_find(a,0,5,b);
//    cout<<cnt<<endl;
//
//
//    return 0;
//}