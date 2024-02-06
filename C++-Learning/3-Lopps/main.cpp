        //first deal with loops

#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    while(x<=y){
        cout<<x<<"\n";
        x++;
    }

    return 0;
}


        // using counter with loops

#include <iostream>

using namespace std;

int main()
{
    int n;
    char c;
    cin>>n>>c;
    while(n--){
        cout<<c;
    }

    return 0;
}


      //printing ascending shape

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int temp;

    while(n--){

        temp = n;

        while(temp--){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}



          //avg to sum of even and odd number

#include <iostream>

using namespace std;

int main()
{
    int t; cin>>t;

    int temp = t;

    int sum_e = 0;
    int sum_o = 0;

    while(t){
        int n;
        cin>>n;
        if(t % 2 == 0)
            sum_o += n;
        else
            sum_e += n;

        t--;
    }

    cout<<sum_e/(temp/2)<<"\n";
    cout<<sum_o/(temp/2);

    return 0;
}



    //drawing top down shape

#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;

    int t = n;

    int space_l;

    int star_l = 2*n -1;

    while(n){
        space_l = n-1;

        int  temp = space_l*2;

        while(space_l--)
            cout<<" ";


        while(temp < star_l){
            cout<<"*";
            temp++;
        }
        cout<<"\n";
        n--;
    }

    int temp = t;

    while(t){

        space_l = t;

        while(space_l < temp){
            cout<<" ";
            space_l++;
        }

        star_l = 2*t -1;

        while(star_l--)
            cout<<"*";

        cout<<"\n";
        t--;
    }

    return 0;
}

        //using counter : if X%8  or x%3,4

#include <iostream>

using namespace std;

int main()
{
    int n;   cin>>n;

    int x = 0;

    while(x <= n){
        if(x % 8 == 0)
            cout<<x<<" ";

        else if(x%3 == 0 && x%4 == 0)
            cout<<x<<" ";
        x++;
    }

    return 0;
}



        //multiples of 3 with no division above 4

#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;
    int x = 3;

    while(n){
        if(x%4 != 0){
            cout<<x<<" ";
            n--;
        }
        x+= 3;
    }

    return 0;
}


        //

#include <iostream>

using namespace std;

int main()
{
    int t; cin>>t;

    while(t--){

        int n; cin>>n;

        int input;

        int res = 100000000;

        while(n--){
            cin>>input;
            if(res > input)
                res = input;
        }
        cout<<res<<" ";
    }
    return 0;
}


        //if input == all shapes of letters n , o

#include <iostream>

using namespace std;

int main()
{
    int n;  cin>>n;

    string res = "";

    while(n--){
        string input;   cin>>input;

        if(input == "NO" || input == "no" || input == "No" || input == "nO" ||
           input == "on" || input == "ON" || input == "On" || input == "oN"){
            res += input;
            res += " ";
           }

    }
    cout<<res;

    return 0;
}



      //reverse a number

#include <iostream>

using namespace std;

int main()
{
    int n;  cin>>n;

    int ten_p = 10;

    int res = 0;

    while(n){

        res *= ten_p;

        res += n % 10;

        n = n / 10;

    }

    cout<<res<<" "<<res*3;

    return 0;
}



        //multiplying table

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cin>>num1>>num2;

    int t1 = 1;

    while(t1 <= num1){

        int t2 = 1;

        while(t2 <= num2){
            cout<<t1<<" * "<<t2<<" = "<<t1*t2<<"\n";
            t2++;
        }

        t1++;
    }

    return 0;
}


        //

#include <iostream>

using namespace std;

int main()
{
    int t;  cin>>t;

    while(t){

        int n;  cin>>n;

        int temp = 0;

        int res = 0;

        while(temp < n){

            int c = temp;

            int multi; cin>>multi;

            int test = multi;

            while(c--){
                multi *= test;
            }

            res += multi;
            temp++;
        }

        cout<<res;
        t--;
    }

    return 0;
}


        //fibonacci

#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;

    int num1 = 0;
    int num2 = 1;

    if(n == 1){
        cout<<num1;
        return 0;
    }

    cout<<num1<<" "<<num2<<" ";

    for(int i = 0 ; i < n-2 ; i++){

        int num3 = num1 + num2;
        cout<<num3<<" ";
        num1 = num2;
        num2 = num3;
    }

    return 0;
}


        //playing with experssion

#include <iostream>

using namespace std;

int main(){

   int sum {0};

   for(int x = 50 ; x <= 300 ; x++){

        for(int y = 70 ; y <= 400 ; y++){

            if(x < y && (x+y)%7 == 0)
                sum++;
        }
   }
   cout<<sum;
}


    //number of numbers less than 200 and their sum  = 200;

#include <iostream>

using namespace std;

int main(){

   int sum {0};

   int l;

   for(int i = 1 ; i <= 200 ; i++){
    for(int j = 1 ; j <= 200 ; j++){
        for(int k = 1 ; k <= 200 ; k++){
            l = (i+j) - k;
            if(l >= 1 && l <=200 )
                sum++;
        }
    }
   }

   cout<<sum;
}

