#include<iostream>
using namespace std;
class Fraction{
    int n,d;
public:
    Fraction(int a=0,int b=1){
        n=a;
        d=b;
    }
    Fraction simplify(){
        if(d<0){
            n=-n;
            d=-d;
        }
        int a=n,b=d;
        while(b!=0){
            int temp=b;
            b=a%b; 
            a=temp;
        }
        n/=a;
        d/=a;
        return *this;
    }
    Fraction add(Fraction f){
        if(f.valid() && d!=0){
            cout<<"Addition: ";
            if(d==f.d) return Fraction(n+f.n,d).simplify();
            return Fraction(n*f.d+f.n*d,d*f.d).simplify();
        }else{
            cout<<"Invalid Number Addition can not be perform  "<<"\n";
            return Fraction();
        } 
    }
    Fraction sub(Fraction f){
        if(f.valid()&& d!=0){
            cout<<"Subtraction: ";
            if(d==f.d) return Fraction(n-f.n,d).simplify();
            return Fraction(n*f.d-f.n*d,d*f.d).simplify();
        }else{
            cout<<"Invalid Number Subtraction can not be perform"<<"\n";
            return Fraction();
        }
    }
    Fraction mul(Fraction f){
        if(f.valid()&& d!=0){
            cout<<"Multiplication: ";
            return Fraction(n*f.n,d*f.d).simplify();
        }else{
            cout<<"Invalid Number Multiplication can not be perform"<<"\n";
            return Fraction();
        }
    }
    Fraction div(Fraction f){
        if(f.valid()&& d!=0){
            cout<<"Division: ";
            return Fraction(n*f.d,d*f.n).simplify();
        }else{
            cout<<"Invalid Number Division can not be perform"<<"\n";
            return Fraction();
        }
    }
    void input(){
        cout<<"Enter numerator: ";
        cin>>n;
        cout<<"Enter denominator: ";
        cin>>d;
    }
    bool valid(){
        return d!=0;
    }
    void display(){
        if(d==1) cout<<n<<endl;
        else cout<<n<<"/"<<d<<endl;
    }
};
int main(){
    Fraction f1,f2;
    cout<<"-- First Number --"<<"\n";
    f1.input();
    cout<<"-- Second Number --"<<"\n";
    f2.input();
    Fraction a=f1.add(f2);
    a.display();
    Fraction s=f1.sub(f2);
    s.display();
    Fraction m=f1.mul(f2);
    m.display();
    Fraction d=f1.div(f2);
    d.display();
    return 0;
}
