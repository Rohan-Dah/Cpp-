#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int prev;
    cin>>prev;
    bool isDec=true;  //
    int count=2;
    int current;
    while(count<=n){
        
        cin>>current;
        if(current==prev){  // Checking the number if same number is thgeor print false
            cout<<"false";
            return 0;
        }
        count++;
       if(current<prev){  // 
            if(isDec==false){ // checking the number for false condition
                cout<<"false";
                return 0;
            }
        }else{
            if(isDec==true){ // if it is decreasing then also true
                isDec=false;
            }
           
        }
        prev=current;
        
}
    cout<<"true";
}