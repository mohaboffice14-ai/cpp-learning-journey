#include<iostream>
using namespace std;

int main() {

    char light;
    cout<<"Which colour light  appears\n For RED  enter R : \n For Green enter G : \n For Yellow enter Y :\n";
    cin>>light;

    switch (light)
    {
    case 'R':
        cout<<"Stop!";
        break;

    case 'G':
        cout<<"GO!";
        break;
    
    case 'Y':
        cout<<"Yellow!";
        break;
    
    default:
        cout<<"Please enter the correct value";
       break;
    }
    
    return 0;
}