////
//// Created by 杨诗宇 on 16/7/9.
////
//
//#include <iostream>
//using namespace std;
//
//void qsort_me(int *A , int x ,int y){
//    if(y-x<=1) {
//        return ;
//    }
//    cout<<'x'<<endl;
//    int key = A[x];
//    int front = x ;
//    int rear = y-1;
//
//    while(front<rear){
//        while(front<rear&&A[rear]>=key)   rear--;
//
//        A[front] = A[rear];
//        while(front<rear&&A[front]<=key)   front++;
//
//        A[rear] = A[front];
//    }
//    A[front] = key;
//    //确定中间位置的 数字 然后排序 它前后的块
//    qsort_me(A,x,front);
//    qsort_me(A,front+1,y);
//    return;
//
//}
//
//int main(){
//    int a[4]={4, 2, 3, 1};
//    int n=4;
//    //cin>>n;
////    for (int i = 0; i < n ; ++i) {
////        cin>>a[i];
////    }
//    qsort_me(a,0,n);
//    cout<<"finish sort"<<endl;
//    for (int j = 0; j < n ; ++j) {
//        cout<<a[j]<<" ";
//    }
//
//
//    return 0;
//}