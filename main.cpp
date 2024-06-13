#include <iostream>
using std:: string;

class AbsrtactEmployee{
    virtual void AskForPromotion()=0;
};
class Employee: AbsrtactEmployee {
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    //encapsulation
    void setName(string name){ //setter
        Name = name;
    }
    string getName (){ // getter
        return Name;
    }
    void setCompany(string company){ //setter
        Company = company;
    }
    string getCompany (){ // getter
        return Company;
    }
    void setAge(int age){ //setter
        Age = age;
    }
    int getAge(){ // getter
        return Age;
    }
    
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
    void AskForPromotion(){
        if(Age>30)
            std::cout<< Name <<" got promoted!"<<std::endl;
        else
            std::cout<< Name <<" , sorry NO promotion for you!"<<std::endl;
    }
};

class Developer:public Employee{
public:
    string FavPogrammingLanguage;
    Developer(string name, string company, int age, string favPogrammingLanguage)
    : Employee(name, company, age)
    {
        FavPogrammingLanguage = favPogrammingLanguage;
    }
    void FixBug(){
        std::cout<< Name<< " fix bug using"<<  FavPogrammingLanguage<<std:: endl;
    }
};

class Teacher:public Employee {
public:
    string Subject;
    void PrepareLesson (){
        std::cout<<Name<< " is preparing " << Subject << " lesson."<<std::endl;
    }
    Teacher (string name, string company, int age, string subject)
    :Employee(name, company, age)
    {
        Subject = subject;
    }
    
};

int main() {
    
//    Employee employe1 = Employee("Saldina", "YT-CodeBeauty", 25);
//    employe1.Name = "Saldina";
//    employe1.Company = "YT-CodeBeauty";
//    employe1.Age = 25   ;
//    employe1.IntroduceYourself();
    
//    Employee employe2 = Employee("John", "Amazon", 35);
//    employe1.Name = "Saldina";
//    employe1.Company = "YT-CodeBeauty";
//    employe1.Age = 25   ;
//    employe2.IntroduceYourself();
    
//    employe1.setAge(39);
//    std::cout<<employe1.getName()<<" is "<<employe1.getAge()<<" year old. "<<std::endl;
    
//    employe1.AskForPromotion();
//    employe2.AskForPromotion();
    Developer d = Developer("Saldina", "YT-CodeBeauty ", 25, " C++! ");
    Teacher t = Teacher("Jack", "Cool School", 35, "History");
//    d.FixBug();
//    d.AskForPromotion();
    t.PrepareLesson();
    t.AskForPromotion();
}
