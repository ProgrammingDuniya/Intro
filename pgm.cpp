#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;
int main()

{
    int i;
    string str = "Welcome to Programming Duniya  :)";
    cout<<endl;
    cout<<endl;
    Sleep(2000);
    for ( i = 0; str[i] != '\0' ; i++)
    {
        cout<<str[i];
        Sleep(100);
    }
    cout<<endl;
    cout<<endl;
    Sleep(1000);
    string asd = "New Youtube channel has created !!!!! Get ready programmers to ROCK!!!!";
    for ( i = 0; asd[i] != '\0' ; i++)
    {
        cout<<asd[i];
        Sleep(100);
    }
    cout<<endl;
    cout<<endl;
    Sleep(1000);
    string as = "With Awesome Code!!!!!!!!!!!!!";
    for ( i = 0; as[i] != '\0' ; i++)
    {
        cout<< as[i];
        Sleep(100);
    }
      cout<<endl;
    cout<<endl;
    Sleep(1000);
    string ad = "Which make us COOOOL   :)";
    for ( i = 0; ad[i] != '\0' ; i++)
    {
        cout<<ad[i];
        Sleep(100);
    }
    cout<<endl;
    cout<<endl;
    Sleep(1000);
    string d = "Subscribe our Channel and Press Bell Icon ! to get Updates";
    for ( i = 0; d[i] != '\0' ; i++)
    {
        cout<<d[i];
        Sleep(100);
    }
    cout<<endl;
    cout<<endl;
    Sleep(1000);
      for (int i = 0; i < 40; i++)
    {
        cout << "."<<" ";
        Sleep(250);
    }
   WaitMessage();
}