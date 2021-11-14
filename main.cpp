#include <iostream>
using namespace std;

int main() {
   int a=1, b=1, c=1, n=0;
   cin>>n;
   if(n>=c){
      cout<<c<<endl;
      for(;c<=n;){
         cout<<c<<endl;
         c=b+a;
         b=a;
         a=c;
      }
   }
   return 0;
}
