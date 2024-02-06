
        // concat  two strings

#include <iostream>

using namespace std;

int main(){

    string name1 , name2;

    cin>>name1>>name2;



    string name3 = "";

    for(int i = 0 ; i < max(name1.size(),name2.size()) ; i++){

        if(i < name1.size())
            name3 += name1[i];

        if(i < name2.size())
            name3 += name2[i];
    }


    cout<<name3;
    return 0;
}

        //frequency

#include <iostream>

using namespace std;

int main(){

    int arr[150] {0};

    string name;    cin>>name;

    for(int i = 0 ; i < name.size() ; i++)
        arr[name[i]]++;

    for(int i = 97 ; i <= 122; i++){
        if(arr[i] != 0)
            cout<<(char)i<<" "a<<arr[i]<<"\n";
    }

    return 0;
}

        //suffix

#include <iostream>

using namespace std;

int main(){

    string name1;
    string name2;

    cin>>name1>>name2;

    bool is_suffix = true;

    for(int i = 0  ; i < name1.size() ; i++){
        if(name1[0] == 'A'){
            if(name1[i+1] == (char)(name1[i] -1))
                continue;
        }
        else {
            is_suffix = false;
            break;
        }

    }

    if(is_suffix){

        for(int i = 0  ; i < name2.size() ; i++){
            if(name2[0] == 'A'){
                if(name2[i+1] == (char)(name2[i] -1))
                    continue;
            }
            else {
                is_suffix = false;
                break;
            }

        }
        if(is_suffix)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";


    return 0;
}

    //prefix

#include <iostream>

using namespace std;

int main(){

    string name1;
    string name2;

    cin>>name1>>name2;

    bool is_prefix = true;

    for(int i = 0  ; i < name1.size() ; i++){
        if(name1[0] == 'A'){
            if(name1[i+1] == (char)(name1[i] -1))
                continue;
        }
        else {
            is_prefix = false;
            break;
        }

    }

    if(is_prefix){

        for(int i = 0  ; i < name2.size() ; i++){
            if(name2[name2.size()-1] == name1[name1.size() -1]){
                if(name2[i+1] == (char)(name2[i] -1))
                    continue;
            }
            else {
                is_prefix = false;
                break;
            }

        }
        if(is_prefix)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";


    return 0;
}

        //sub str

#include <iostream>

using namespace std;

int main(){

    string name1;
    string name2;

    cin>>name1>>name2;

    bool is_suffix = true;

    for(int i = 0  ; i < name1.size() ; i++){
        if(name1[0] == 'A'){
            if(name1[i+1] == (char)(name1[i] -1))
                continue;
        }
        else {
            is_suffix = false;
            break;
        }

    }

    if(is_suffix){

        for(int i = 0  ; i < name2.size() -1 ; i++){

                if(name2[i+1] == (char)(name2[i] +1))
                    continue;
            else {
                is_suffix = false;
                break;
            }

        }
        if(is_suffix)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";


    return 0;
}


    //sub seq

#include <iostream>

using namespace std;

int main(){

    string name1;
    string name2;

    cin>>name1>>name2;

    bool is_suffix = true;

    for(int i = 0  ; i < name1.size() ; i++){
        if(name1[0] == 'A'){
            if(name1[i+1] == (char)(name1[i] -1))
                continue;
        }
        else {
            is_suffix = false;
            break;
        }

    }

    if(is_suffix){

        for(int i = 0  ; i < name2.size() -1 ; i++){

                if(name2[i+1] > name2[i])
                    continue;
            else {
                is_suffix = false;
                break;
            }

        }
        if(is_suffix)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";


    return 0;
}

        //from string to number;

#include <iostream>

using namespace std;

int main(){

    string num;
    cin>>num;

    int con = stoi(num);

    cout<<con<<" "<<con*3;

    return 0;
}


        //group each similar letters

#include <iostream>

using namespace std;

int main(){

    string text;
    getline(cin,text);

    string con = "";

    for(int i =0 ; i< text.size(); i++){
        if(i == 0){
            con += text[i];
            continue;
        }
        if(text[i] == text[i-1])
            con += text[i];
        else {
            con += " ";
            con += text[i];
        }
    }

    cout<<con;

    return 0;
}

    //print letters beside freq

#include <iostream>

using namespace std;

int main(){

    string name;
    cin>>name;

    string temp = "";

    for(int i = 0 ; i < name.size(); i++){
        if(i == 0){
            temp += name[i];
            continue;
        }

        if(name[i] == name[i-1])
            temp += name[i];
        else {
            cout<<temp[0]<<temp.size()<<"_";
            temp = "";
            temp = name[i];
        }

    }
    cout<<temp[0]<<temp.size();



    return 0;
}

        //if string1 is smaller than or equal to string2

#include <iostream>

using namespace std;

int main(){

    string name1,name2;
    cin>>name1>>name2;

    bool is_smaller = false;

    for(int i= 0; i< min(name1.size(),name2.size()) ; i++){
        if(name1[i] <    name2[i]){
            is_smaller = true;
            break;
        }
    }
    if(is_smaller)
        cout<<"YES";
    else{
        if(name1 == name2)
            cout<<"YES";
        else
            cout<<"NO";
    }

    return 0;
}
