#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    //variable declaration
    int n;

    //get input value
    cout<<"Enter the Number :";
    cin>>n;

    cout<<"List of prime number below "<<n<<endl;

    //for loop block for find prime number
    for(int i=2;i<n;i++)
    for(int j=2;j*j<=i;j++)
    {
        if(i%j==0)
        break;
        else if (i+1>sqrt(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}