
    #include <iostream>
    using namespace std;

    long int bigmod(int a,int b,int m)
    {
        if(b==0) return 1;
        if(b%2==0)
        {
            long int x=mod(a,b/2,m);
            return (x*x)%m;
        }  return ((long int)a%m * mod(a,b-1,m))%m;
    }
    int main(){
        long int a,b,m;
        //(a/b)%m
            cout<<((a%m)*(bigmod(b,m-2,m))%m)<<endl;
    }
