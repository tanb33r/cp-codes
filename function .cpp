#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int fibo(int i) {
    if(i==1) return 0;
    if(i==2) return 1;
   return fibo(i-1)+fibo(i-2);
}

int main() {
  int n = 5;
  cout<<fibo(9)<<"\n";

}
