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
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter company : ";
        cin >> company;
        cout << "Enter salary : ";
        cin >> salary;
        cout << "Enter no. of programming languages u know : ";
        cin >> noLang;
        string languageName;
        for (int i = 1; i <= noLang; i++)
        {
            cout << "Enter language " << i << " : ";
            cin >> languageName;
            langList.push_back(languageName);
        }
    }
    void showInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Company : " << company << endl;
        cout << "Salary : " << salary << endl;
        cout << "Languages : ";
        for (string item : langList)
            cout << item << " ";
        cout << endl;
    }
};
main()
{
    system("cls");
    int n;
    cout << "Enter the no. of programmers : ";
    cin >> n;
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