#include <iostream>

using namespace std;


int main() {
    
    int N=0;
    cin>>N;
    int* array1 = new int[N];
    
    for(int i=0;i<N;i++){
        cin>>array1[i];
    }
    
    for (int j = N- 1; j >= 0; j--) {
    cout << array1[j] << " ";
    }

 
  return 0;
}
