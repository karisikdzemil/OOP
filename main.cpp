#include <iostream>
using std:: string;


class Employee {
public:
    string Name;
    string Company;
    int Age;
    
    
    void IntroduceYourself (){
        std::cout<< "Name - " << Name <<std::endl;
        std::cout<< "Company - " << Company <<std::endl;
        std::cout<< "Age - " << Age <<std::endl;
    }
    
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};



int main() {
    
    Employee employe1 = Employee("Saldina", "YT-CodeBeauty", 25);
//    employe1.Name = "Saldina";
//    employe1.Company = "YT-CodeBeauty";
//    employe1.Age = 25   ;
    employe1.IntroduceYourself();
    
    Employee employe2 = Employee("John", "Amazon", 35);
//    employe1.Name = "Saldina";
//    employe1.Company = "YT-CodeBeauty";
//    employe1.Age = 25   ;
    employe2.IntroduceYourself();
}
