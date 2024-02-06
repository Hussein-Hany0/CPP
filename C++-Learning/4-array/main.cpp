
        //first deal with arrays

        //find max ,second max

#include <iostream>

using namespace std;

int main(){

    int n; cin>>n;  int arr[n];

    for(int i = 0 ; i < n ; i++)
        cin>>arr[i];

    int idx1 = 0;


    for(int i = 1 ; i < n ; i++){
        if(arr[idx1] < arr[i])
            idx1 = i;
    }

    int idx2 = 0;

    for(int i = 1 ; i < n ; i++){

        if(i == idx1)
            continue;

        if(arr[idx2] < arr[i])
            idx2 = i ;
    }

    cout<<arr[idx1]<<" "<<arr[idx2];

    return 0;
}


        //swap array content

#include <iostream>

using namespace std;

int main(){

    int n;  cin>>n; int arr[n];

    for(int i = 0 ; i < n ; i++)
        cin>>arr[i];

    for(int i = 0 , j = n-1 ; i < j ; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i = 0 ; i < n ; i++)
        cout<<arr[i]<<" ";

    return 0;
}


        //if array is increasing

#include <iostream>

using namespace std;

int main(){

    bool is_inc = true;

    int n; cin>>n; int arr[n];

    for(int i=0 ; i < n ; i++)
        cin>>arr[i];

    for(int i=1 ; i < n ;i++){
        if(arr[i-1] > arr[i]){
            is_inc = false;
            break;
        }
    }
    cout<<is_inc;

    return 0;
}


    //find max , min :

#include <iostream>

using namespace std;

int main(){

    int n; cin>>n; int arr[n];
    for(int i = 0 ; i < n; i++)
        cin>>arr[i];

    int idx_min = 0 , idx_max = 0;

    for(int i = 0 ; i < n ;i++){
        if(arr[idx_max] < arr[i])
            idx_max = i;

        if(arr[idx_min] > arr[i])
            idx_min = i;
    }

    int temp = arr[idx_min];
    arr[idx_min] = arr[idx_max];
    arr[idx_max] = temp;

    for(int i = 0 ; i < n ; i++)
        cout<<arr[i]<<" ";


    return 0;
}


        //printing distinct numbers

#include <iostream>

using namespace std;

int main(){

    int n; cin>>n; int arr[n];

    for(int i = 0; i < n; i++)
        cin>>arr[i];

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == arr[i+1])
            continue;
        else
            cout<<arr[i]<<" ";
    }


    return 0;
}


        //check palindrome

#include <iostream>

using namespace std;

int main(){

    int n; cin>>n; int arr[n];

    for(int i = 0; i < n; i++)
        cin>>arr[i];

    bool is_palindrome = true;

    for(int i = 0 , j = n-1 ; i < j ; i++ , j--){
        if(arr[i] != arr[j]){
            is_palindrome = false;
            break;
        }
    }
    cout<<is_palindrome;

    return 0;
}



        //check three max value;

#include <iostream>

using namespace std;

int main(){

    int n; cin>>n; int arr[n];
    for(int i = 0 ; i< n ;i++)
        cin>>arr[i];

    int idx1 = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[idx1] > arr[i])
            idx1 = i;
    }

    int idx2 = 0;

    for(int i = 0 ; i< n ;i++){
        if(i == idx1)
            continue;

        if(arr[idx2] > arr[i])
            idx2 = i;
    }

    int idx3 = 0;

    for(int i = 0 ; i < n ;i++){
        if(i == idx1 || i == idx2)
            continue;

        if(arr[idx3] > arr[i])
            idx3 = i;
    }

    cout<<arr[idx1]<<" "<<arr[idx2]<<" "<<arr[idx3];

    return 0;
}



#include <iostream>

using namespace std;

int main(){

    int n; cin>>n; int arr[n];

    for(int i = 0 ; i< n;i++)
        cin>>arr[i];

    int t;  cin>>t;

    while(t--){
        int idx = -1;
        int q; cin>>q;
        for(int i = 0 ; i< n; i++){
            if(arr[i] == q)
                idx = i;
        }
        cout<<idx<<" ";
    }

    return 0;
}


        // max number repeated

#include <iostream>

using namespace std;

int main(){

    int n; cin>>n; int arr[n];

    for(int i = 0 ; i< n; i++)
        cin>>arr[i];

    int max_repeat = 0 ;
    int nor_repeat = 0 ;
    int idx = 0;


    for(int j = 0 ; j < n;j++){


        nor_repeat = 0;

        for(int i = 0 ; i< n; i++){
            if(arr[i] == arr[j])
                nor_repeat++;
        }

        if(max_repeat < nor_repeat){
            max_repeat = nor_repeat;
            idx = j;
        }
    }
    cout<<arr[idx]<<" "<<max_repeat;

    return 0;
}



#include <iostream>

using namespace std;

int main(){

    int n; cin>>n; int arr[n];

    for(int i =0; i< n;i++)
        cin>>arr[i];

    int cnt = 0;

    int sum = 0;

    for(int i = 0  ; i < 10 ; i++){

        sum = 0;

        for(int j = 0 ; j < n; j++){
            cnt = arr[j];
            while(cnt){
                if(cnt%10 == i)
                    sum++;
                cnt /= 10;
            }
        }
        cout<<i<<" "<<sum<<"\n";
    }

    return 0;
}


#include <iostream>

using namespace std;

int main(){

    int n; cin>>n; int arr[n];

    for(int i =0; i< n;i++)
        cin>>arr[i];


    for(int i = 0 ; i< n;i++){
        bool rep = true;
        for(int j =0 ; j< i; j++){
            if(i == 0)
                cout<<arr[i];

            if(arr[i] == arr[j]){
                rep = false;
                break;
            }

        }
        if(rep)
            cout<<arr[i]<<" ";
    }

    return 0;
}


        //frequently of numers

#include <iostream>

using namespace std;

int main(){

    int n; cin>>n; int arr[n];

    int freq[500] {0};

    for(int i =0; i< n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }

    for(int i = 0; i< 500; i++){
        if(freq[i] == 0)
            continue;

        while(freq[i]){
            cout<<i<<" ";
            freq[i]--;
        }
    }
    return 0;
}



    //fill the rest of array depending on the below conditions

#include <iostream>

using namespace std;

int main(){
                //0 1 2 3 4 5
    int arr[200] {0,1,3,6,2,7};

    int temp;

    bool isfound = false;

    for(int i = 6 ; i < 200 ; i++){

        temp = arr[i-1] - (i-1) -1;

        if(temp > 0){
            for(int j = 0 ; j < i-1 ; j++){
                if(arr[j] == temp){
                    isfound = true;
                    break;
                }
            }
        }
        if(isfound){
            arr[i] == arr[i-1] + (i-1) +1;
        }

        else
            arr[i] = arr[i-1] - (i-1) -1;

    }

    int idx;    cin>>idx;
    cout<<arr[idx];


    return 0;
}


    //find the start and the end to the max sum of three numbers

#include <iostream>

using namespace std;

int main(){

    int n; cin>>n; int arr[n];
                            // 0 1 2 3 4 5 6 7
    for(int i = 0 ;i<n;i++) // 1 0 3 -4 2 -6 9
        cin>>arr[i];

    int k;  cin>>k;

    int start_idx = 0;
    int end_idx   = 0;

    int max_sum = 0 ;
    int nor_sum = 0 ;

    for(int i = 0 ; i<= n -2; i++){

        nor_sum = 0;

        for(int j = i ; j < i + k  ; j++){
            nor_sum += arr[j];
        }
        if(max_sum < nor_sum){
            max_sum = nor_sum;
            start_idx = i;
            end_idx = i + 2;
        }
    }

    cout<<start_idx<<" "<<end_idx<<" "<<max_sum;

    return 0;
}

