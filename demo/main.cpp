#include <iostream>
using namespace std;

int fac(int n){
    static int f = 1; //静态变量
//   int f = 1;    //动态变量
   f = f * n;
   return(f) ;
}
int main(){
   int i;
   for(i=1; i<=5; i++) {
       cout<<fac(i) << '\n' ;
   }
}
