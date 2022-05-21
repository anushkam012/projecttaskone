//Program for printing all prime numbers.
//NOTE-Prime number is a number that is greater than 1 and divided by 1 or itself. In other words, prime numbers can't be divided by other numbers than itself or 1. For example 2, 3, 5, 7, 11, 13, 17, 19, 23.... are the prime numbers.

#include<iostream>
using namespace std;
   
int main(){
   
    int N, i, j, isPrime, n;
 
    cin >> N;   
    for(i = 2; i <= N; i++){
        isPrime = 0;
       
        for(j = 2; j <= i/2; j++){
            
             if(i % j == 0){
                 isPrime = 1;
                 break;
             }
        }
           
        if(isPrime==0 && N!= 1)
            cout << i << ""<<endl;
    }
 
   return 0;
}