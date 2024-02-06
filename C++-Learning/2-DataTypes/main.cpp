
        //declare some data type;

#include <iostream>

using namespace std;

int main()
{
    double x,y;
    cin>>x>>y;
    cout<<x<<" + "<<y<<" = "<<x+y<<endl;
    cout<<x<<" * "<<y<<" = "<<x*y<<endl;
    cout<<x<<" / "<<y<<" = "<<x/y<<endl;
    cout<<x<<" - "<<y<<" = "<<x-y<<endl;
    return 0;
}



             //first deal with string and some experssions

#include <iostream>

using namespace std;

int main()
{
    string id1,name1;
    int grade1;

    string id2,name2;
    int grade2;

    cout<<"  What is student 1 name : "; cin>>name1;
    cout<<"  His id : "; cin>>id1;
    cout<<"  His math exam grade : ";  cin>>grade1;

    cout<<"  What is student 2 name : "; cin>>name2;
    cout<<"  His id : "; cin>>id2;
    cout<<"  His math exam grade : ";  cin>>grade2;

    cout<<"\n  Students grades in math\n\n";

    cout<<"  "<<name1<<" (with id "<<id1<<" ) got grade : "<<grade1;
    cout<<"\n  "<<name2<<" (with id "<<id2<<" ) got grade : "<<grade2;
    cout<<"\n  average grade is : "<<(grade1+grade2)/2;

    return 0;
}



             //summation of group of variables

#include <iostream>

using namespace std;

int main()
{
    int x1,x2,x3,x4,x5,x6,x7,x8;

    cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7>>x8;

    cout<<x1+x3+x5+x7<<" "<<x2+x4+x6+x8;
    return 0;
}





       //sum from 1 to n

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    cout<<"sum from 1 to "<<x<<" : "<<x*(x+1)/2;
    return 0;
}




       //swap

#include <iostream>

using namespace std;

int main()
{
    int x , y , z;
    cin>>x>>y;

    z = x;
    x = y ;
    y = z;

    cout<<x<<" "<<y;
    return 0;
}





       //n : number , b : boys , g : girls , t : teacher

#include <iostream>

using namespace std;

int main()
{
    int nb , ng , nt;

    cin>>nb>>ng>>nt;

    bool c = nb > 25;
    cout<<c<<"\n";

    c = ng <= 30;
    cout<<c<<"\n";

    c = nb>20 && nt>2 || ng>30 && nt>4;
    cout<<c<<"\n";

    c = nb<60 || ng < 70;
    cout<<c<<"\n";

    c = !(nb >=  60) || !(ng >= 70);
    cout<<c<<"\n";

    c = (nb + 10) == ng;
    cout<<c<<"\n";

    c = (nb - ng > 10) || nt>5;
    cout<<c<<"\n";

    c = ((nb+10) > ng) || ((ng+15) > nb);
    cout<<c<<"\n";

    return 0;
}




      //average of group of variables

#include <iostream>

using namespace std;

int main()
{
    double x1,x2,x3,x4,x5;

    cin>>x1>>x2>>x3>>x4>>x5;

    cout<<((x1+x2+x3+x4+x5) / 5)<<"\n";

    cout<<((x1+x2+x3) / (x4+x5))<<"\n";

    cout<<(((x1+x2+x3) /3 ) / ((x4+x5) / 2))<<"\n";

    return 0;
}






          //printing the fraction part

#include <iostream>

using namespace std;

int main()
{
    int x ,y ;

    cin>>x>>y;

    cout<<((double)x/y)  - (x/y);

    return 0;
}




       //calculate module without %

#include <iostream>

using namespace std;

int main()
{
    int x ,y ;

    cin>>x>>y;

    cout<<(((double)x/y) - x/y) * y;

    return 0;
}




        //check even using three ways

#include <iostream>

using namespace std;

int main()
{
    int x;

    cin>>x;

    bool c1 = x%2;

    bool c2 = (x/2 == (double)x/2);

    bool c3 = (((x%10)%2) == 0);

    cout<<!c1<<" "<<c2<<" "<<c3;

    return 0;
}


        //calculate sum of digit to num of three digits

#include <iostream>

using namespace std;

int main()
{
    int x;

    cin>>x;

    int sum = 0;

    sum += x%10;

    x /= 10;

    sum += x%10;

    x /= 10;

    sum+= x%100;

    cout<<sum;

    return 0;
}



       //calculate num of y,m,d from days only

#include <iostream>

using namespace std;

int main()
{
    int days;

    cin>>days;

    cout<<"  Years : "<<days/365;

    days = days % 365;

    cout<<"  Months : "<<days/30;

    days = days % 30;

    cout<<"  Days : "<<days;

    return 0;
}



      //play with experssions

#include <iostream>

using namespace std;

int main()
{
    int x,y;

    cin>>x>>y;

    if(x%2 != 0 && y%2 !=0)
        cout<<x*y;
    else if(x%2 == 0 && y%2 ==0)
        cout<<x/y;
    else if(x%2 != 0 && y%2==0)
        cout<<x+y;
    else
        cout<<x-y;

    return 0;
}



      // sorting three numbers

#include <iostream>

using namespace std;

int main()
{
    int x,y,z;

    cin>>x>>y>>z;

    if(x>y){
        if(x>z){
            if(y>z)
                cout<<z<<" "<<y<<" "<<x;
            else
                cout<<y<<" "<<z<<" "<<x;
        }
        else
            cout<<y<<" "<<x<<" "<<z;
    }
    else{
        if(y>z){
            if(z>x)
                cout<<x<<" "<<z<<" "<<y;
            else
                cout<<z<<" "<<x<<" "<<y;
        }
        else
            cout<<x<<" "<<y<<" "<<z;
    }

    return 0;
}



  // sorting three numbers : numbers bigger than 100 are out

#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    if(x >= 100) x = 0;
    if(y >= 100) y = 0;
    if(z >= 100) z = 0;

    if(x == y == z == 0){
        cout<<-1;
        return 0;
    }

    int res = x;

    if(res < y)
        res = y;

    else if(res < z)
        res = z;

    cout<<res;

    return 0;
}



  //comparing x with x2 if bigger -> sum_greater : else ....

#include <iostream>

using namespace std;

int main()
{
    int x;

    cin>>x;

    int sum_g = 0;
    int sum_l = 0;

    int x2;

    cin>>x2;

    if(x > x2)
        sum_g++;
    else
        sum_l++;

    cin>>x2;

    if(x > x2)
        sum_g++;
    else
        sum_l++;

    cin>>x2;

    if(x > x2)
        sum_g++;
    else
        sum_l++;

    cin>>x2;

    if(x > x2)
        sum_g++;
    else
        sum_l++;

    cin>>x2;

    if(x > x2)
        sum_g++;
    else
        sum_l++;


    cout<<sum_g<<" "<<sum_l;

    return 0;
}






      // find the max value of consecutive nums


#include <iostream>

using namespace std;

int main()
{
    int x,y;

    cin>>x>>y;

    if(x<y)
        x = y;

    cin>>y;
    if(x<y)
        x = y;

    cin>>y;
    if(x<y)
        x = y;

    cin>>y;
    if(x<y)
        x = y;

    cin>>y;
    if(x<y)
        x = y;

    cin>>y;
    if(x<y)
        x = y;

    cin>>y;
    if(x<y)
        x = y;

    cin>>y;
    if(x<y)
        x = y;

    cin>>y;
    if(x<y)
        x = y;

    cout<<x;
    return 0;
}


      // if x is within the interval

#include <iostream>

using namespace std;

int main()
{
    int x;  cin>>x;

    int s1,e1,s2,e2,s3,e3;
    cin>>s1>>e1>>s2>>e2>>s3>>e3;

    int sum = 0;

    if(x >= s1 && x <= e1)
        sum++;
    if(x >= s2 && x <= e2)
        sum++;
    if(x >= s3 && x <= e3)
        sum++;

    cout<<sum;

    return 0;
}
