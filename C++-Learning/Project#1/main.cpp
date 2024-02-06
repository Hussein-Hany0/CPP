#include <iostream>

using namespace std;

int menu(){
    int c;

    cout<<"  1-Add new patient\n";
    cout<<"  2-Print all patients\n";
    cout<<"  3-Get next patient\n";
    cout<<"  4-Exit\n\n";

    cout<<"  Choice : "; cin>>c;

    if(c >= 1 && c <=4)
        return c;

    menu();
}

int main(){

    string name_sp[20][5] {""};
    int status [100] {};


    string name;
    int sp;
    int s;

    while(1){

    int c = menu();

    if(c == 1){

        cout<<"  Enter specialization , name , status : ";  cin>>sp;  cin>>name;  cin>>s;

        for(int i = 0 ; i < 5 ; i++){
            if(name_sp[sp-1][i] == ""){
                name_sp[sp-1][i] = name;
                status[(sp-1)*5 + i] = s;
                break;
            }
            else if (i == 4)
                cout<<"  Complete specialization\n";
        }


    }
    else if(c == 2){
        for(int i = 0 ; i < 20 ; i++){
            for(int j = 0 ; j < 5 ; j++){
                if(name_sp[i][j] == "")
                    continue;
                cout<<i+1<<" "<<name_sp[i][j]; status[i*5 + j] ? cout<<"  Urgent\n" : cout<<"  regular\n";
            }
        }
    }
    else if(c == 3){
        cout<<"  Enter specialization : "; cin>>sp;

        for(int i = 0 ; i < 5 ; i++){
            if(status[(sp-1)*5 +i] == 1 && name_sp[sp-1][i] != ""){
                cout<<" "<<name_sp[sp-1][i]<<"  please go with the docter\n";
                name_sp[sp-1][i] = "";
                status[(sp-1)*5 +i] = -1;
                break;
            }
            else if(i ==4){
                for(int j = 0 ; j < 5 ; j++){
                    if(status[(sp-1)*5 +j] == 0  && name_sp[sp-1][j] != ""){
                        cout<<" "<<name_sp[sp-1][j]<<"  please go with the docter\n";
                        name_sp[sp-1][j] = "";
                        status[(sp-1)*5 +j] = -1;
                        break;
                    }
                    else if(j == 4)
                        cout<<"  No patient now , Have rest Dr\n";

            }
                    }
    }

    }
    else if(c == 4)
        return 0;

    else
        cout<<"  Invalid choice\n";

 }
}
//---------------------------------------------------------------------------------------------------------------------
    //Another way to implement the same code using pair

#include <iostream>

using namespace std;

int main(){

    pair<int,pair<string,int>> patient[20][5] {};
    int cnt[20] {};

    while(1){

    int c;

    cout<<"  1-Add new patient\n";
    cout<<"  2-print all patient\n";
    cout<<"  3-Next patient\n";
    cout<<"  Choice : ";    cin>>c;

    if(c == 1){
        string name;
        int sp;
        int st;
        cout<<"  Enter specialization : "; cin>>sp;
        cout<<"  Enter name : "; cin>>name;
        cout<<"  Enter status : "; cin>>st;

        for(int i = 0 ; i < 5 ; i++){
            if(patient[sp-1][i].second.first == ""){
                patient[sp-1][i].first = sp;
                patient[sp-1][i].second.first = name;
                patient[sp-1][i].second.second = st;
                cnt[sp-1]++;
                break;
            }
            else if(i == 4)
                cout<<"  We're sorry : specialization is busy\n";
        }
    }
    else if(c == 2){
        for(int i = 0 ; i < 20 ; i++){

                if(cnt[i] !=0)
                    cout<<"\n  We've "<<cnt[i]<<" patient in specialization "<<i+1<<"\n";
                else
                    break;

            for(int j = 0 ; j < 5 ; j++){
                if(patient[i][j].second.first == "")
                    continue;
                else

                    cout<<"  "<<patient[i][j].first<<" "<<patient[i][j].second.first<<" "<<patient[i][j].second.second<<"\n";
            }
        }
    }
    else if(c == 3){

        int sp; cout<<"  Enter specialization : "; cin>>sp;

        for(int i = 0 ; i < 5 ; i++){
            if(patient[sp-1][i].second.first != ""){
                if(patient[sp-1][i].second.second == 1){
                    cout<<patient[sp-1][i].second.first<<", go with the Dr\n";
                    patient[sp-1][i].second.first = "";
                }
                else{
                    cout<<patient[sp-1][i].second.first<<", go with the Dr\n";
                    patient[sp-1][i].second.first = "";
                }
            }
            if(i == 4)
                cout<<"  No patients , take rest Dr\n";
        }
    }
}


    return 0;
}
