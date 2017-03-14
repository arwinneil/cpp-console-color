#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    string input_code;
    system("Color help");

    cout<<endl;

    while(true){

        cout<<"Enter Color Code :";
        cin>>input_code;

        input_code="Color "+input_code;
        const char* color_code = input_code.c_str();

        system(color_code);

    }
}
