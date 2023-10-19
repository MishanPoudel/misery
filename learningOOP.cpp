#include<iostream>
using namespace std;

class Employee {
    private:
        string name;
        string company;
        int age;

    public:
        void setName(string Name){ //getter
            name = Name;
        }
        string getName(){  //setter
            return name;
        }
        void setCompany(string Company){
            company = Company;
        }
        string getCompany(){
            return company;
        }
        void setAge(int Age){
            if(Age >= 18)
            age = Age;
        }
        int getAge(){
            return age;
        }

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
    Employee employee1 = Employee("Misery", "Monke", 35);
    Employee employee2 = Employee("Rizzery", "KAT", 35);
    
    employee1.IntroduceYourself();
    employee2.IntroduceYourself();

    employee1.setAge(12);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;
}
