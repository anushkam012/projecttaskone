//write programs, such that each pattern should print on the basis of given input 'n' when n = count of alphabets.
#include<iostream> 
using namespace std; 
 
int main(){ 
 
  int n; 
    cin>>n; 
    int i=1; 
    while (i<=n){ 
        char a=64+i; 
        int j=1; 
         
        while (j<=i){ 
            cout<<a; 
            j=j+1; 
        } 
        cout<<endl; 
        i=i+1; 
    } 
}
