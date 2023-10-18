#include<iostream>
using namespace std;


class Employee{
    public:
    string name;
    string company;
    int age;

    void IntroduceYourself(){
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }

    Employee(string Name, string Company, int Age){
        name = Name;
        company = Company;
        age = Age; 
    }
};


int main(){
    Employee employee1= Employee("Misery", "Monke", 35), employee2 = Employee("Rizzery", "KAT", 35);
    // employee1.name = "misery";
    // employee1.company = "monke";
    // employee1.age = 45;
    employee1.IntroduceYourself();

    // employee2.name = "rizzery";
    // employee2.company = "KAT";
    // employee2.age = 35;
    employee2.IntroduceYourself();
}