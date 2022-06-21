// WAP to store name, company, salary and programming languages of some programmers in c++ and display the result.

#include <iostream>
using namespace std;
#include <list>
class Programmers
{
private:
    string name;
    string company;
    string salary;
    int noLang;
    list<string> langList;

public:
    void getInfo()
    {
        string temp;
        cout << "Enter name : ";
        getline(cin, name);
        cout << "Enter company : ";
        getline(cin, company);
        cout << "Enter salary : ";
        getline(cin, salary);
        cout << "Enter no. of programming languages u know : ";
        cin >> noLang;
        getline(cin, temp);
        for (int i = 1; i <= noLang; i++)
        {
            cout << "Enter language " << i << " : ";
            getline(cin, temp);
            langList.push_back(temp);
        }
    }
    void showInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Company : " << company << endl;
        cout << "Salary : " << salary << endl;
        cout << "Languages : ";
        for (string item : langList)
            cout << item << "  ";
        cout << endl;
    }
};
main()
{
    int n;
    string temp;
    cout << "\033[H\033[2J";
    cout << "Enter the no. of programmers : ";
    cin >> n;
    getline(cin, temp);
    Programmers p[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nFor programmer " << i + 1 << " :\n";
        p[i].getInfo();
    }
    cout << "Press any key to see stored data...";
    system("pause>0");
    system("cls");
    cout << "********* STORED DATA **********\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nFor programmer " << i + 1 << " :\n";
        p[i].showInfo();
    }
    cout << "\nPress any key to exit ...";
    system("pause>0");
    cout << "\nExited successfully!";
}