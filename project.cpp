#include<iostream>
#include<string>
#include<fstream>
#include <stdlib.h>
using namespace std;
class info
{

private:
    struct data{

     string name;
     int id;
     };
public:
     info();

};
info::info()
{
    data d;
    cout<<"                               ______________________________           "<<endl<<endl;
    cout<<"                                || WELCOME TO MOVIE SHOP ||             "<<endl;
    cout<<"                               _______________________________          "<<endl<<endl;;
    cout<<"             Please Enter information    "<<endl<<endl;
    cout<<"  Please Enter Name  : ";
    cin>>d.name;
    cout<<"  Please Enter Id    : ";
    cin>>d.id;
}
class addmo
{
public:

    void addmovie()
{
    system("color 0A");
    ofstream data("library.txt");
    string name,type;
    cout<< "ctrl + Z to Quit "<<endl<<endl;
    cout<<" Enter name and type of the movie"<<endl;
    while(cin>>name>> type)
    {
       data<<name<<"  "<<type<<"  "<<endl;
    }
}
};
class viewmovie
{
public:
    void view()
{
    system("color 0A");
    ifstream data("library.txt");
    string name,type;
    while(data>>name>>type)
    {
        cout<<name<<" "<<type<<" "<<endl;
    }

}
};
class deletemovie
{
public:
    void deletmovie()
{
    int dele = remove("library.txt");

}
};
class updatemovie
{
public:
    void updatebook()
{
    system("color 0A");
      ofstream data("library.txt");
    string name,type;
    cout<<" Enter name and type of the movie to update "<<endl;
    while(cin>>name>> type)
    {
       data<<name<<"  "<<type<<"  "<<endl;
    }
};
};
int main()
{
   info f;
   system("color 3");
char option;
cout<<" Enter Y if Want To Use Menu "<<endl;
cin>>option;
if(option == 'Y')
system("cls");
system("color C");
{





      cout<<"             | Enter 1 for Add Movie     |    "<<endl;
      cout<<"             | Enter 2 for view Record   |    "<<endl;
      cout<<"             | Enter 3 for delete Movie  |    "<<endl;
      cout<<"             | Enter 4 for Update Movie  |    "<<endl<<endl<<endl;

      cout<<" ||| Enter Choice From The Menu |||"<<endl;
      int ch;
      cin>>ch;
      switch (ch)
      {


      case 1:
      {
          addmo movie;
          movie.addmovie();
          break;
      }
      case 2:
      {
          viewmovie vm;
          vm.view();
          break;
      }
      case 3:
      {
          deletemovie dm;
          dm.deletmovie();
          cout<<" ! Your Movie is Deleted Successfully "<<endl;
          break;
      }
      case 4:
      {
          updatemovie um;
          um.updatebook();
          break;
      }
      default:
      {
          cout<<" !Wrong Input "<<endl;
      }
      }
}
  return 0;
      }


//return 0;



/*addmo movie;
movie.addbook();
viewmovie vm;
vm.view();
deletemovie dm;
dm.deletmovie();
*/


