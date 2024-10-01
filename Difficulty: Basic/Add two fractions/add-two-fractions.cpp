//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


void addFraction(int num1, int den1, int num2,
                 int den2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);

    }
}

// } Driver Code Ends


/*You are required to complete this function*/
int findgcd(int a,int b){
    if(b==0) return a;
    findgcd(b,a%b);
}
void addFraction(int num1, int den1, int num2,int den2)
{
    int d=den1*den2;
    int n=num1*den2+num2*den1;
    int num=findgcd(n,d);
    n/=num;
    d/=num;
    cout<<n<<"/"<<d<<endl;
//Your code here
 }