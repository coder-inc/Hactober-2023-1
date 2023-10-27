//Program to create a max-heap and insert elements into it
#include<bits/stdc++.h>
using namespace std ;

class heap{
public:
  int arr[100] ;
  int size ;
  heap(){
    arr[0]=-1 ;
    size=0 ;
  }

  void insert(int val){ // Function to insert an element in a max heap and put it to its correct position
    size=size+1 ;
    int idx = size ;
    arr[idx] = val ;
    while(idx>1){
      int par = idx/2 ;
      if(arr[par]<arr[idx]){
        swap(arr[par],arr[idx]) ;
        idx=par ;
      }
      else{
        return ;
      }
    }
  }
  
  void print(){ // Function to print the max-heap array
      for(int i=1;i<=size;i++){
          cout<<arr[i]<<" " ;
      }
    cout<<endl ;
  }
};

int main(){
  // Array representation of Max-Heap
    // 50
    // / \
    // 55 53
    // / \
    // 52 54
    heap h ;
    h.insert(50) ;
    h.insert(55) ;
    h.insert(53) ;
    h.insert(52) ;
    h.insert(54) ;
    // Final Heap will be:
    // 55
    // / \
    // 54 53
    // / \
    // 50 52 
    h.print() ;
    return 0;
}
