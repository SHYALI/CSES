https://codeforces.com/blog/entry/95490


#include <bits/stdc++.h>
using namespace std;

// converting the no. into its binary representation  
string getBinary(int x){
    bitset<8> b(x);   // bitset is the data structure that stores , this data structure has 8 bits 
    return b.to_string(); // it will explicitly give the sting equivalent of whatever value is storing 
}

int main(){
    cout<<getBinary(15)<<"\n";
    return 0;
}

//------------------------------------------------------------------------------------------------------------------


#include <bits/stdc++.h>
using namespace std;

// preforming bits operations   
string getBinary(int x){
    bitset<8> b(x);   
    return b.to_string();  
}

int main(){
    int a = 27;
    int b = 46;
    int c = a&b;   // similarly we can do  OR operation ( | )  and XOR operation ( ^ )
    cout<<getBinary(a)<<"\n";
    cout<<getBinary(b)<<"\n";
    cout<<getBinary(c)<<"\n";
    return 0;
}

//--------------------------------------------------------------------------------------------------------------------


#include <bits/stdc++.h>
using namespace std;

// preforming bits operations -- left shift    
string getBinary(int x){
    bitset<8> b(x);   
    return b.to_string();  
}

int main(){
    int a = 27;
    int i;
    cin>>i;
    int c = a<<i  //   2^x + 2^i   -- left shift a ---> ith times 
    cout<<getBinary(c)<<"\n";
    return 0;
}

//-----------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

// preforming bits operations  --> right operation   
string getBinary(int x){
    bitset<8> b(x);   
    return b.to_string();  
}

int main(){
    int a = 27;
    int i;
    cin>>i;
    int c = a<<b;   // 2^x / 2^i right shift x ith times 
    cout<<getBinary(a)<<"\n";
    cout<<getBinary(b)<<"\n";
    cout<<getBinary(c)<<"\n";
    return 0;
}

