#include <iostream>
using namespace std;
void pattern(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< num <<  " ";
            num +=1;

        }
        cout<< endl;
    }
}
//Pattern 13
void pattern2(int n){
    for(int i=n;i!=0;i--){
        for(char ch='A';ch<='A'+i;ch++){
            cout<< ch<< " ";
        }
        cout<< endl;
    }
}
//Pattern14
void pattern3(int n){
    for(int i=0;i<n;i++){
        char ch ='A'+ i;
        for(int j=0;j<=i;j++){
            cout<< ch;
        }
        cout<< endl;

    }
    
}
void pattern18(int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = i ; j >= 0 ; j--){
			cout<<char(65 + n - j - 1);}
		cout<<endl;
	}
}



int main(){
    int n;
    cin>> n;
    pattern18(n);
    return 0;
}