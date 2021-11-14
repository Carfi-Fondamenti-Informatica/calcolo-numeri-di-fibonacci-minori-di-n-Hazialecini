#include <iostream>
using namespace std;

int main() {
   int a=1, b=1, c=1, l=0;
   cin>>l;
   if(l>=c){
      cout<<c<<endl;
      for(;c<=l;){
         cout<<c<<endl;
         c=b+a;
         b=a;
         a=c;
      }
   }
   return 0;
}
