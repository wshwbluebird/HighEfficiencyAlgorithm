////
//// Created by 杨诗宇 on 16/7/9.
////
////归并排序
////先将数组对半分  分别递归排序  最后合并nlogn
//#include <iostream>
//using namespace std;
//
//void merge_sort(int *A , int x ,int y, int *T){
//     if(y-x>1){
//         int m = x + (y-x)/2;
//         int p  =x , q = m , i  = x;  //等到要合并的时候  用到的三个数组的下下标
//         merge_sort(A,x,m,T);  //分治求解
//         merge_sort(A,m,y,T);
//         while(p<m||q<y){
//             if (q>=y  ||  A[p]<A[q]) T[i++] = A[p++];
//             else T[i++] = A[q++];
//         }
//         for (i = x; i<y; ++i) {
//             A[i] = T[i];
//         }
//     }
//}
//
//int main(){
//    int a[] = {3,4,5,6,2,3,5,6,2};
//    int length = sizeof(a)/ sizeof(a[0]);
//    int t[length];
//    merge_sort(a,0,length,t);
//    for (int i = 0; i <length ; ++i) {
//        cout<<a[i]<< " ";
//    }
//
//    return 0;
//}
