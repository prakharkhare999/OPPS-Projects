#include <bits/stdc++.h>
#include <vector>
using namespace std;
class User
{
private:
    string username, password;

public:
    User(string name, string pass)
    {
        username = name;
        password = pass;
    }
    string getUsername()
    {
        return username;
    }
    string getPassword()
    {
        return password;
    }
};
class UserManager
{
private:
    vector<User> users; // create object of vector
public:
    void Registeruser()
    {
        string username, password;
        cout << "enter user name" << endl;

        cin >> username;
        cout << "enter password " << endl;

        cin >> password;

        User newUser(username, password);
        users.push_back(newUser);

        cout << "userregister successfully" << endl;
    }

    void LoginUser(string name, string pass)
    {
        for (int i = 0; i < users.size(); i++)
        {
            if (users[i].getUsername() == name && users[i].getPassword() == pass)
            {
                cout << "login" << endl;
            }
            else
            {
                cout << "invalid user" << endl;
            }
        }
    }


    void Show_User_List(){
        for(int i=0;i<users.size();i++){
            cout<<i<<":-  "<<users[i].getUsername()<<endl;
        }

    }

    void Search_User(string name){
        for(int i=0;i<users.size();i++){
            if(name==users[i].getUsername()){
                cout<<"user is valid"<<endl;
            }
            
        }
        
    }

void Delete_User(string name){
     for(int i=0;i<users.size();i++){
            if(name==users[i].getUsername()){
                users.erase(users.begin()+i);
                cout<<"user is deleated"<<endl;
            }
            
        }

}
    



   
};

int main()
{
    UserManager usermanager;
    int op;
    char choice;
    do
    {
        system("cls");
        cout << endl
             << "1.Registor user" << endl;

        cout << "2.login" << endl;

        cout << "3.show user list" << endl;
        cout << "4.search user" << endl;
        cout << "5.delete user" << endl;
        cout << "6.enter your choice" << endl;
         
        cin >> op;

        switch (op)
        {
        case 1:
        {
            usermanager.Registeruser();
            break;
        }
        case 2:{
        string username,password;
        cout<<"enter user"<<endl;
        cin>>username;
        cout<<"enter password"<<endl;
        cin>>password;
        usermanager.LoginUser(username,password);
        break;
        }
case 3:{
        usermanager.Show_User_List();
        break;
        }
case 4:{
        usermanager.Search_User("pk");
        break;
        }
case 5:{
    usermanager.Delete_User("pk");
        break;
}
 




        }
        


        cout<<"do u want to continue[yes/no]";
        cin>>choice;
    }while(choice=='y' || choice=='Y');
}