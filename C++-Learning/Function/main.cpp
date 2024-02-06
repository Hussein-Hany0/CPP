
            //How to find max of 6 numbers
#include <iostream>

using namespace std;

int calc_max(int x ,int y){
    if(x>y)
        return x;
    return y;
}

int main(){

    int x1 , x2 , x3 , x4 , x5 , x6;
    cin>>x1>>x2>>x3>>x4>>x5>>x6;

    cout<<calc_max(calc_max(calc_max(calc_max(calc_max(x1,x2),x3),x4),x5),x6);

    return 0;
}

        //reverse string

#include <iostream>

using namespace std;

string rev_str(const string& str){

    string temp = "";

    for(int i = str.size() -1 ; i >= 0 ; i--)
        temp +=str[i];

    return temp;
}

int main(){

    string name; cin>>name;

    string rev = rev_str(name);

    cout<<rev;
}


    //simple calculator

#include <iostream>

using namespace std;

double sum(double x , double y){
    return x+y;
}

double multi(double x , double y){
    return x*y;
}

double minu(double x , double y){
    return x-y;
}

double divide(double x , double y){
    if(y == 0)
        return 0;
    return x/y;
}

int menu(){

    int c;

    cout<<"  1-Add two numbers.\n";
    cout<<"  2-Subtract two numbers.\n";
    cout<<"  3-Multiply two numbers.\n";
    cout<<"  4-Divide two numbers.\n";
    cout<<"  5-End the program.\n\n";

    cout<<"  Choice : "; cin>>c;

    if(c >= 1 && c <= 5)
        return c;

    cout<<"  Invalid choice.\n";
    menu();
}

double read(double& x , double& y , int& c){

    if(c == 1)
        cout<<"  Sum : "<<sum(x,y);
    else if(c == 2)
        cout<<"  Subtract : "<<minu(x,y);
    else if(c == 3)
        cout<<"  Multiply : "<<multi(x,y);
    else if(c == 4)
        cout<<"  Divide : "<<divide(x,y);
    else
        return 0.0;
}

int main(){

    int counter = 0;

    char repeat;

    while(repeat != 'n'){

        system("cls");

        int c = menu();

        if(c == 5)
            break;

        double x,y;

        cout<<"  Enter x : "; cin>>x;
        cout<<"  Enter y : "; cin>>y;

        read(x,y,c);
        counter++;

        cout<<"\n  Another transaction ? y/n : "; cin>>repeat;
    }

    cout<<"\n  Number of transactions : "<<counter;
    return 0;
}



        //is palindrome array

#include <iostream>

using namespace std;

bool check_palindrome(int arr[] , int len){

    bool p = true;

    for(int i = 0 , j = len -1 ; i < j; i++,j--){
        if(arr[i] != arr[j]){
            p = false;
            break;
        }

    }
}

int main(){
    int n ; cin>>n; int arr[n];

    for(int i = 0  ; i < n ; i++)
        cin>>arr[n];

    if(check_palindrome(arr,n))
        cout<<"YES";
    else
        cout<<"NO";

}



        //set powers

#include <iostream>

using namespace std;

void set_powers(int arr2[] , int len = 5,int m = 2){

    arr2[0] = 1;

    for(int i = 1 ; i < len ; i++)
        arr2[i] = arr2[i-1] * m;
}


int main(){

    int n; cin>>n; int arr1[n];

    int m;  cout<<"Enter power : "; cin>>m;

    set_powers(arr1,n,m);

    for(int i = 0 ; i < n ; i++)
        cout<<arr1[i]<<" ";

    return 0;
}


        //find nth prime

#include <iostream>

using namespace std;

bool is_prime(int num){
    for(int i = 2 ; i< num ; i++)
        if(num % i == 0)
            return false;

    return true;
}

int nth_prime(int n){


    int i = 2;

    while(n){

        if(is_prime(i))
            n--;
        i++;
       }
    return i-1;
}



int main(){

    int n; cin>>n;

    cout<<nth_prime(n);

    return 0;
}

        //replace substring

#include <iostream>
using namespace std;


bool is_matched(string text , string pattern , int pos){
    for(int i = pos , j = 0 ; j < pattern.size() ; i++ , j++){
        if(text[i] != pattern[j])
            return false;
    }
    return true;
}

string replace_str(string text,string pattern,string to){

    string temp = "";

    for(int i = 0 ; i < text.size(); i++){
        if(text[i] == pattern[0]){
            if(is_matched(text,pattern,i)){
                temp += to;
                i += pattern.size() ;
            }
        }
        temp += text[i];
    }
    return temp;
}


int main(){

    string text; cin>>text;

    string pattern , to;

    cin>>pattern>>to;

    text = replace_str(text ,pattern , to );

    cout<<text;

    return 0;
}
