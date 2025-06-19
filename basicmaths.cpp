#include<iostream>
using namespace std;
int main(){ //Problem 1----- to count the tola number of digits in a number like 7789 should give 4
    int n;
    cin>> n;
    int c=0;
    while (n>0){
        int l=n%10;
        n=n/10;
        c=c+1;

    }
    cout << "The total numebr of digits are:"<< c;
    
        return 0;
}

// PROBLEM 2----------

// Reversing a number like 7789 to 9877 and 10400 to 401 instead of 00401

// My method code 1 with 00401
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    while(n>0){
        int a=n%10;
        n=n/10;
        cout<< a;
    }
    return 0;
    
}


// Strivers Method code 2 
// with reverse as 401 not 00401

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int re=0;
    while(n>0){
        int l=n%10;
        re=(10*re)+l;
        n=n/10;
    }
    cout<< re;
    return 0;
}



// PROBLEM 3--------------Palindrome check of a given numeber
// logic--- revrse krke compair krle number se ...lmaoooo

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int d=n;
    int re=0;
    while(n>0){
        int l=n%10;
        re=(re*10)+l;
        n=n/10;
    }
    if(d==re) cout<< "Yes it is a Plaindrone numebr";
    else cout<< "Nope";
        
   
    return 0;

}

    // PROBLEM 4 gretaest devisionr
    // My METHOD..........


    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cin>> n;
        for(int i=1;i<=n;i++)
    {
        if(n%i==0) cout<< i << endl;
    }    
    return 0;
    }

