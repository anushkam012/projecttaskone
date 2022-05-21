//Program for printing reverse pattern.
//Print the following pattern for the given N number of rows.

//Input format :Integer N (Total no. of rows)
//Output format :Pattern in N lines
//Constraints:0 <= N <= 50

#include<iostream> 
using namespace std; 
int main(){
    int n; 
    cin>>n; 
    int i=1; 
    while (i<=n)
    { 
        int j=1; 
        int k=i; 
        while (j<=i)
        { 
            cout<<k; 
            j=j+1; 
            k=k-1; 
            } 
            cout<<endl; 
            i=i+1; 
            } 
            }


