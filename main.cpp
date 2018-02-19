#include <iostream>
using namespace std;

int raise(int n, int p)
{
 if ( p < 0 ) return -1;
 if (p ==0 ) return 1;
 else
    return  n * raise(n,p-1);

}

int main() {
    cout << "pls enter two numbers" << std::endl;
    int n, p;
    cin>>n;
    cin >>p;
    cout << n <<" raised to "<< p <<" is: " <<  raise(n,p);


    return 0;
}