#include <iostream>

using namespace std;
// Satisfied ,Pomaa Sali//
int main()
{
    int s,p,a,sum=0;


    cout <<" Enter the number you want"<<endl;
    cin >>s;
    cout<< "This are your Prime Numbers"<<endl;
    for(p=1;p<s;p++){
        for(a=2;a<p;a++){
            if(p%a==0){
                break;
            }
        }
        if(p==a){
            sum=sum+p;
            cout <<p<<endl;
        }
    }
    cout <<"This the sum of all Prime Numbers between 1 and "<<s<< "="<<sum;





    return 0;
}
