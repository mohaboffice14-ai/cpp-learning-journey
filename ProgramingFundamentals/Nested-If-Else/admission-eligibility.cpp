#include<iostream>
using namespace std;

int main() {

    float marks , interview_score ;
    cout<<"Enter your marks :";
    cin>>marks;

    cout<<"\nEnter your interview marks :";
    cin>>interview_score;

    if (marks >= 80){
        if (interview_score >= 75){
            cout<<"\n Admission Granted";
        }
        else{
            cout<<"\n Waiting list";
        }
    }
    else if (marks >= 60 ){
        if (interview_score >= 85){
            cout<<"\n Admission Granted";
        }
        else{
            cout<<"\n Rejected";
        }

    }
    else{
        cout<<"\n Rejected";
    }

     return 0;
    
}

