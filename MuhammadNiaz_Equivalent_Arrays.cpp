#include <iostream>
using namespace std;
int main(){
    cout << boolalpha; 
   int a1[5] = {1, 2, 3, 4, 5};
   int a2[5] = {3, 4, 5, 1, 2};
   cout << equivalent(a1, a2, 5) << endl; 
   
   int b1[3] = {1, 2, 3};
   int b2[3] = {2, 3, 3};
   cout << equivalent(b1, b2, 3) << endl; 
   
   int c1[4] = {2, 3, 4, 1};
   int c2[4] = {1, 4, 3, 2};
   cout << equivalent(c1, c2, 4) << endl; 
   
   int d1[4] = {3, 2, 3, 1};
   int d2[4] = {3, 1, 3, 2};
   cout << equivalent(d1, d2, 4) << endl; 
   
   int e1[5] = {1, 1, 1, 1, 2};
   int e2[5] = {1, 1, 1, 2, 1};
   cout << equivalent(e1, e2, 5) << endl; 
}
bool equivalent(int a[], int b[], int n) {
   int offset;
   for(int i = 0; i < n; i++){
       if(a[0] == b[i]){
           offset = i;
           for(int j = 0; j < n; j++){
               if (a[j] != b[j + offset % n])
               break;
               if ( j == n - 1)
               return true;
           }
       }
   }
   return false;
}