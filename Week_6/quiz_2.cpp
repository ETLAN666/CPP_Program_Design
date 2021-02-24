#include <iostream> 

using namespace std; 
   
   int area(int &x); 
   
   
   int main()  
   
   {  
   
       int n =10;  
   
       area(n);  
   
       cout<<n<<endl;  
   
   }  
   
   
   int area(int  &x)  
   
   {  
   
       return  x *= x;  
   
   }  
