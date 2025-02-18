#include<iostream>
using namespace std;
double mySqrt(int x) {
        int s=0;
        int e=x;
        int ans=-1;
        long long int mid=s+(e-s)/2;
        while(s<=e){
            long long int prod=mid*mid;
            if(prod==x){
                return mid;
            }
            if(prod>x){
                e=mid-1;
            }
            
            else{
                ans=mid;
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        double sqrtAns=(double)ans;

        // upto what precision
        int precision;
        cout<<"enter the precision upto which we have to print:"<<endl;
        cin>>precision;
        double factor=1;
        double finalAns=sqrtAns;
        for(int i=0;i<precision;i++){
            factor=factor/10.0;
            for(int n=0;n<9;n++){
                double NoAdd=factor*n;
                double num=sqrtAns+NoAdd;
                if(num*num<x){
                    finalAns=sqrtAns+NoAdd;

                }
                else{
                    break;
                }
            }
            sqrtAns=finalAns;
        }
        return finalAns;
        
    }
    double BSsqrt(int n){
        double s=0;
        double e=n;
        double mid;
        double ans=0;
        while((e-s)>=0.001){
            mid=s+(e-s)/2;
            double sqrt=mid*mid;
            if(sqrt<=n){
                ans=mid;
                s=mid;
            }
            else{
                e=mid;
            }
        }
        return ans;
    }
int main(){
   double ans= BSsqrt(54);
   cout<<ans<<endl;
   double ans2= mySqrt(54);
   cout<<ans2<<endl;

    

}