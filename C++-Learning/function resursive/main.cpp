        recursive function

#include <iostream>

using namespace std;

int print_3n_plus_1(int n){

    static int counter = 0;

    counter ++;


    if(n == 1)
        return counter;

    if(n % 2 == 0)
        print_3n_plus_1(n/2);
    else
        print_3n_plus_1(3*n +1);
}

int main(){

    cout<<print_3n_plus_1(6);
    return 0;
}


        //power function

#include <iostream>

using namespace std;

int my_pow(int value , int  p){

    if(p == 0)
        return 1;

    return value * my_pow(value , p-1);
}

int main(){

    cout<<my_pow(7,3);

    return 0;
}

        find max

#include <iostream>

using namespace std;

int arr_max(int arr[] , int len){

    static int mx = arr[0];
    static int i = 1;

    if(i == len )
        return mx;

    if(mx < arr[i])
        mx = arr[i];

    i++;
    arr_max(arr,len);
}

int main(){

    int arr[] {1,2,3,10,4,5,6};

    cout<<arr_max(arr,7);

    return 0;
}

        //find sum
#include <iostream>

using namespace std;

int arr_sum(int arr[] , int len){

    static int sum = 0;

    if(len == 0)
        return sum;

    sum += arr[len-1];

    arr_sum(arr,len-1);
}

int main(){

    int arr[] {1,2,3,10,10,4,5,6};

    cout<<arr_sum(arr,8);

    return 0;
}

        find average

#include <iostream>

using namespace std;

int arr_average(int arr[] , int len){

    static int sum = 0;
    static int t = len;

    if(len == 0)
        return sum/t;

    sum += arr[len-1];

    arr_average(arr,len-1);
}

int main(){

    int arr[] {1,2,3,9,5,10,4,5,6};

    cout<<arr_average(arr,9);

    return 0;
}

        array increament
#include <iostream>

using namespace std;

void arr_sum(int arr[] , int len){


    if(len == 0)
        return;

    arr[len-1] += len-1;

    arr_sum(arr,len-1);
}

int main(){

    int arr[] {1,2,5,9};

    arr_sum(arr,4);
    cout<<arr[2];

    return 0;
}

        //inc 0 idx with 0 , 1 idx with 1 and so on
#include <iostream>

using namespace std;

void arr_sum(int arr[] , int len){


    if(len == 0)
        return;

    arr[len-1] += len-1;

    arr_sum(arr,len-1);
}

int main(){

    int arr[] {1,2,5,9};

    arr_sum(arr,4);
    cout<<arr[2];

    return 0;
}
