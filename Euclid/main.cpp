#include <iostream>

using namespace std;

int main(int argc, char **argv)
{   
    unsigned int m;
    unsigned int n;
    
    cin >> m;
    cin >> n;
    
    cout << "m=" << m << "\n";
    cout << "n=" << n << "\n";    
    
    do{    
        
        m = m % n;        
        cout << "m=" << m << "\n";
        if(m == 0){
        
           cout << "Answer:" << n << "\n";     
           return 0;
        }
        
        n = n % m;
        cout << "n=" << n << "\n"; 
        if(n == 0){
        
           cout << "Answer:" << m << "\n";     
           return 0;
        }
    
    }while(n < -1);   

    return 0;
}
