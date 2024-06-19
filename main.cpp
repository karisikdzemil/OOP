//#include <iostream>
//using std:: string;
//
//class AbsrtactEmployee{
//    virtual void AskForPromotion()=0;
//};
//class Employee: AbsrtactEmployee {
//private:
//    string Company;
//    int Age;
//protected:
//    string Name;
//public:
//    //encapsulation
//    void setName(string name){ //setter
//        Name = name;
//    }
//    string getName (){ // getter
//        return Name;
//    }
//    void setCompany(string company){ //setter
//        Company = company;
//    }
//    string getCompany (){ // getter
//        return Company;
//    }
//    void setAge(int age){ //setter
//        Age = age;
//    }
//    int getAge(){ // getter
//        return Age;
//    }
//    
//    void IntroduceYourself (){
//        std::cout<< "Name - " << Name <<std::endl;
//        std::cout<< "Company - " << Company <<std::endl;
//        std::cout<< "Age - " << Age <<std::endl;
//    }
//    
//    Employee(string name, string company, int age){
//        Name = name;
//        Company = company;
//        Age = age;
//    }
//    void AskForPromotion(){
//        if(Age>30)
//            std::cout<< Name <<" got promoted!"<<std::endl;
//        else
//            std::cout<< Name <<" , sorry NO promotion for you!"<<std::endl;
//    }
//    virtual void work (){
//        std::cout<<Name<<" is cheking email, task backlogs, performing tasks... "<<std::endl;
//    }
//};
//
//
//class Developer:public Employee{
//public:
//    string FavPogrammingLanguage;
//    Developer(string name, string company, int age, string favPogrammingLanguage)
//    : Employee(name, company, age)
//    {
//        FavPogrammingLanguage = favPogrammingLanguage;
//    }
//    void FixBug(){
//        std::cout<< Name<< " fix bug using"<<  FavPogrammingLanguage<<std:: endl;
//    }
//    void work (){
//        std::cout<<Name<<" is writing"<<FavPogrammingLanguage<<"code."<<std::endl;
//    }
//};
//
//class Teacher:public Employee {
//public:
//    string Subject;
//    void PrepareLesson (){
//        std::cout<<Name<< " is preparing " << Subject << " lesson."<<std::endl;
//    }
//    Teacher (string name, string company, int age, string subject)
//    :Employee(name, company, age)
//    {
//        Subject = subject;
//    }
//    void work (){
//        std::cout<<Name<<" is teaching "<<Subject<<std::endl;
//    }
//    
//};
//
//int main() {
//    
////    Employee employe1 = Employee("Saldina", "YT-CodeBeauty", 25);
////    employe1.Name = "Saldina";
////    employe1.Company = "YT-CodeBeauty";
////    employe1.Age = 25   ;
////    employe1.IntroduceYourself();
//    
////    Employee employe2 = Employee("John", "Amazon", 35);
////    employe1.Name = "Saldina";
////    employe1.Company = "YT-CodeBeauty";
////    employe1.Age = 25   ;
////    employe2.IntroduceYourself();
//    
////    employe1.setAge(39);
////    std::cout<<employe1.getName()<<" is "<<employe1.getAge()<<" year old. "<<std::endl;
//    
////    employe1.AskForPromotion();
////    employe2.AskForPromotion();
//    Developer d = Developer("Saldina", "YT-CodeBeauty ", 25, " C++ ");
//    Teacher t = Teacher("Jack", "Cool School", 35, "History");
////    d.FixBug();
////    d.AskForPromotion();
////    t.PrepareLesson();
////    t.AskForPromotion();
////      d.work();
////      t.work();
//    Employee *e1 = &d;
//    Employee *e2 = &t;
//    e1->work();
//    e2->work();
//    
//}

// Zadatak 1: Napraviti sistem za upravljanje bibliotekom knjiga koristeći klase i objekte u C++.

//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Knjiga {
//private:
//    string naslov;
//    string autor;
//    int godinaIzdanja;
//    string ISBN;
//    bool dostupna;
//
//public:
//    Knjiga(string nasl, string aut, int god, string isbn)
//        : naslov(nasl), autor(aut), godinaIzdanja(god), ISBN(isbn), dostupna(true) {}
//
//    void setNaslov(string nasl) { naslov = nasl; }
//    string getNaslov() { return naslov; }
//
//    void setAutor(string aut) { autor = aut; }
//    string getAutor() { return autor; }
//
//    void setGodinaIzdanja(int god) { godinaIzdanja = god; }
//    int getGodinaIzdanja() { return godinaIzdanja; }
//
//    void setISBN(string isbn) { ISBN = isbn; }
//    string getISBN() { return ISBN; }
//
//    void setDostupna(bool dos) { dostupna = dos; }
//    bool isDostupna() { return dostupna; }
//
//    void prikaziInformacije() {
//        cout << "Naslov: " << naslov << endl;
//        cout << "Autor: " << autor << endl;
//        cout << "Godina izdanja: " << godinaIzdanja << endl;
//        cout << "ISBN: " << ISBN << endl;
//        cout << "Dostupna: " << (dostupna ? "Da" : "Ne") << endl;
//    }
//
//    void iznajmiKnjigu() {
//        if (dostupna) {
//            dostupna = false;
//            cout << "Knjiga " << naslov << " je iznajmljena." << endl;
//        } else {
//            cout << "Knjiga " << naslov << " nije dostupna za iznajmljivanje." << endl;
//        }
//    }
//
//    void vratiKnjigu() {
//        dostupna = true;
//        cout << "Knjiga " << naslov << " je vracena." << endl;
//    }
//};
//
//class Biblioteka {
//private:
//    vector<Knjiga> knjige;
//
//public:
//    void dodajKnjigu(Knjiga novaKnjiga) {
//        knjige.push_back(novaKnjiga);
//    }
//
//    void prikaziSveKnjige() {
//        for (Knjiga &knjiga : knjige) {
//            knjiga.prikaziInformacije();
//            cout << "-------------------------" << endl;
//        }
//    }
//
//    void prikaziDostupneKnjige() {
//        for (Knjiga &knjiga : knjige) {
//            if (knjiga.isDostupna()) {
//                knjiga.prikaziInformacije();
//                cout << "-------------------------" << endl;
//            }
//        }
//    }
//
//    void iznajmiKnjigu(string ISBN) {
//        for (Knjiga &knjiga : knjige) {
//            if (knjiga.getISBN() == ISBN) {
//                knjiga.iznajmiKnjigu();
//                return;
//            }
//        }
//        cout << "Knjiga sa ISBN " << ISBN << " nije pronadjena." << endl;
//    }
//
//    void vratiKnjigu(string ISBN) {
//        for (Knjiga &knjiga : knjige) {
//            if (knjiga.getISBN() == ISBN) {
//                knjiga.vratiKnjigu();
//                return;
//            }
//        }
//        cout << "Knjiga sa ISBN " << ISBN << " nije pronadjena." << endl;
//    }
//};
//
//int main() {
//    Biblioteka biblioteka;
//    Knjiga k1("Na Drini Cuprija", "Ivo Andric", 1945, "123456789");
//    Knjiga k2("Prokleta avlija", "Ivo Andric", 1954, "987654321");
//
//    biblioteka.dodajKnjigu(k1);
//    biblioteka.dodajKnjigu(k2);
//
//    cout << "Sve knjige u biblioteci:" << endl;
//    biblioteka.prikaziSveKnjige();
//
//    cout << "\nDostupne knjige u biblioteci:" << endl;
//    biblioteka.prikaziDostupneKnjige();
//
//    cout << "\nIznajmljivanje knjige sa ISBN 123456789:" << endl;
//    biblioteka.iznajmiKnjigu("123456789");
//
//    cout << "\nDostupne knjige nakon iznajmljivanja:" << endl;
//    biblioteka.prikaziDostupneKnjige();
//
//    cout << "\nVracanje knjige sa ISBN 123456789:" << endl;
//    biblioteka.vratiKnjigu("123456789");
//
//    cout << "\nDostupne knjige nakon vracanja:" << endl;
//    biblioteka.prikaziDostupneKnjige();
//
//    return 0;
//}

//ZADATAK 2!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//#include <iostream>
//using std:: string;
//
//class Automobil {
//private:
//    string Marka;
//    string Model;
//    int GodProizvodnje;
//    double Cena;
//public:
//    Automobil (string marka, string model, int godProizvodnje, double cena){
//        Marka=marka;
//        Model=model;
//        GodProizvodnje=godProizvodnje;
//        Cena=cena;
//    }
//    void setMarka (string marka){
//        Marka = marka;
//    }
//    string getMarka (){
//        return Marka;
//    }
//    void setModel (string model){
//        Model = model;
//    }
//    string getModel (){
//        return Model;
//    }
//    void setGodProizvodnje (int godProizvodnje){
//        GodProizvodnje=godProizvodnje;
//    }
//    int getGodProizvodnje (){
//        return GodProizvodnje;
//    }
//    void setCena (int cena){
//        Cena = cena;
//    }
//    int getCena (){
//        return Cena;
//    }
//    void PrikaziPodatke() {
//        std::cout<< "\nMarka- "<< Marka<< "\nModel- "<< Model<<"\nGodina proizvodnje- "<<GodProizvodnje<<"\nCena- "<<Cena<<std::endl;
//    };
//};
//
//int main (){
//    
//    Automobil automobil1 = Automobil("VW", "Golf", 2024, 67500.23);
//    Automobil automobil2 = Automobil("BMW", "M3", 2022, 85000.50);
//    Automobil automobil3 = Automobil("Mercedes", "S-class", 2023, 112000);
//    automobil1.PrikaziPodatke();
//    automobil2.PrikaziPodatke();
//    automobil3.PrikaziPodatke();
//    
//    automobil1.setCena(50000);
//    automobil1.PrikaziPodatke();
//    return 0;
//}

//ZADATAK 3 vezba sa dinmickim nizovima. Program koji upravlja studentima i njihovim indeksima


//#include <iostream>
//#include <vector>
//using std::string;
//
//class Student {
//private:
//    string Ime;
//    string Indeks;
//    std::vector <string> kursevi;
//public:
//    
//    Student(string ime, string indeks){
//        Ime = ime;
//        Indeks = indeks;
//    }
//    void DodajKurs(string kurs){
//        kursevi.push_back(kurs);
//    };
//    void priakzi_podatke(){
//        std::cout<<"\nIme- "<<Ime<<"\nIndeks- "<<Indeks<<std::endl;
//        std::cout<< "Kursevi: \n";
//        for(int i=0;i<kursevi.size();i++){
//            std::cout<<kursevi[i]<<std::endl;
//        }
//    }
//};
//
//int main (){
//    Student student1 = Student("Djemsi", "002003");
//    Student student2 = Student("Doe", "036007");
//    Student student3 = Student("Beksa", "036221");
//    
//    student1.DodajKurs("osnovi racunarstva");
//    student1.DodajKurs("osnovi programiranja");
//    student1.DodajKurs("digitalna elektronika");
//    student2.DodajKurs("matematicka analiza");
//    student2.DodajKurs("Osnovi racunarstva");
//    student2.DodajKurs("Algoritmi i Strukture Podataka");
//    student3.DodajKurs("Linearna algebra");
//    student3.DodajKurs("osnovi programiranja");
//    student3.DodajKurs("Objektno Orjentisano Programiranje");
//    student1.priakzi_podatke();
//    student2.priakzi_podatke();
//    student3.priakzi_podatke();
//    return 0;
//}

//ZADATAK 3: Napraviti program koji simulira rad biblioteke

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Knjiga {
//private:
//    string naslov;
//    string autor;
//    int godinaIzdanja;
//    bool dostupna;
//
//public:
//    Knjiga(string n, string a, int g)
//        : naslov(n), autor(a), godinaIzdanja(g), dostupna(true) {}
//
//    string getNaslov() { return naslov; }
//    bool jeDostupna() { return dostupna; }
//
//    void prikaziPodatke() {
//        cout << "Naslov: " << naslov << ", Autor: " << autor
//             << ", Godina izdanja: " << godinaIzdanja
//             << ", Dostupna: " << (dostupna ? "Da" : "Ne") << endl;
//    }
//
//    void pozajmiKnjigu() {
//        if (dostupna) {
//            dostupna = false;
//        } else {
//            cout << "Knjiga " << naslov << " nije dostupna za pozajmljivanje." << endl;
//        }
//    }
//
//    void vratiKnjigu() {
//        dostupna = true;
//    }
//};
//
//class Clan {
//private:
//    string ime;
//    int clanskiBroj;
//    vector<Knjiga*> pozajmljeneKnjige;
//
//public:
//    Clan(string i, int c)
//        : ime(i), clanskiBroj(c) {}
//
//    int getClanskiBroj() { return clanskiBroj; }
//
//    void prikaziPodatke() {
//        cout << "Ime: " << ime << ", Clanski broj: " << clanskiBroj << endl;
//        cout << "Pozajmljene knjige:" << endl;
//        for (Knjiga* knjiga : pozajmljeneKnjige) {
//            knjiga->prikaziPodatke();
//        }
//    }
//
//    void pozajmiKnjigu(Knjiga* knjiga) {
//        if (knjiga->jeDostupna()) {
//            knjiga->pozajmiKnjigu();
//            pozajmljeneKnjige.push_back(knjiga);
//            cout << "Knjiga " << knjiga->getNaslov() << " je pozajmljena." << endl;
//        } else {
//            cout << "Knjiga " << knjiga->getNaslov() << " nije dostupna." << endl;
//        }
//    }
//
//    void vratiKnjigu(Knjiga* knjiga) {
//        for (auto it = pozajmljeneKnjige.begin(); it != pozajmljeneKnjige.end(); ++it) {
//            if (*it == knjiga) {
//                knjiga->vratiKnjigu();
//                pozajmljeneKnjige.erase(it);
//                cout << "Knjiga " << knjiga->getNaslov() << " je vracena." << endl;
//                return;
//            }
//        }
//        cout << "Knjiga " << knjiga->getNaslov() << " nije pronadjena u pozajmljenim knjigama." << endl;
//    }
//};
//
//class Biblioteka {
//private:
//    vector<Knjiga> knjige;
//    vector<Clan> clanovi;
//
//public:
//    void dodajKnjigu(const Knjiga& knjiga) {
//        knjige.push_back(knjiga);
//    }
//
//    void dodajClana(const Clan& clan) {
//        clanovi.push_back(clan);
//    }
//
//    Knjiga* nadjiKnjigu(const string& naslov) {
//        for (Knjiga& knjiga : knjige) {
//            if (knjiga.getNaslov() == naslov) {
//                return &knjiga;
//            }
//        }
//        return nullptr;
//    }
//
//    Clan* nadjiClana(int clanskiBroj) {
//        for (Clan& clan : clanovi) {
//            if (clan.getClanskiBroj() == clanskiBroj) {
//                return &clan;
//            }
//        }
//        return nullptr;
//    }
//
//    void prikaziSveKnjige() {
//        for (Knjiga& knjiga : knjige) {
//            knjiga.prikaziPodatke();
//        }
//    }
//
//    void prikaziSveClanove() {
//        for (Clan& clan : clanovi) {
//            clan.prikaziPodatke();
//        }
//    }
//};
//
//int main() {
//    Biblioteka biblioteka;
//    
//    // Kreiranje knjiga
//    Knjiga k1("Na Drini cuprija", "Ivo Andric", 1945);
//    Knjiga k2("Seobe", "Milos Crnjanski", 1929);
//    Knjiga k3("Prokleta avlija", "Ivo Andric", 1954);
//    
//    // Dodavanje knjiga u biblioteku
//    biblioteka.dodajKnjigu(k1);
//    biblioteka.dodajKnjigu(k2);
//    biblioteka.dodajKnjigu(k3);
//    
//    // Kreiranje clanova
//    Clan c1("Petar Petrovic", 101);
//    Clan c2("Ana Anic", 102);
//    
//    // Dodavanje clanova u biblioteku
//    biblioteka.dodajClana(c1);
//    biblioteka.dodajClana(c2);
//    
//    // Prikazivanje svih knjiga
//    cout << "Sve knjige u biblioteci:" << endl;
//    biblioteka.prikaziSveKnjige();
//    
//    // Prikazivanje svih clanova
//    cout << "\nSvi clanovi biblioteke:" << endl;
//    biblioteka.prikaziSveClanove();
//    
//    // Pozajmljivanje knjige
//    Knjiga* knjiga = biblioteka.nadjiKnjigu("Na Drini cuprija");
//    Clan* clan = biblioteka.nadjiClana(101);
//    if (knjiga && clan) {
//        clan->pozajmiKnjigu(knjiga);
//    }
//    
//    // Prikazivanje stanja nakon pozajmljivanja
//    cout << "\nSvi clanovi biblioteke nakon pozajmljivanja:" << endl;
//    biblioteka.prikaziSveClanove();
//    
//    // Vracanje knjige
//    if (knjiga && clan) {
//        clan->vratiKnjigu(knjiga);
//    }
//    
//    // Prikazivanje stanja nakon vracanja
//    cout << "\nSvi clanovi biblioteke nakon vracanja:" << endl;
//    biblioteka.prikaziSveClanove();
//    
//    return 0;
//}

//EXERCISE/////////////////

//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Stol{
//private:
//    string Model;
//    int Cena;
//    bool Dostupan;
//public:
//    Stol(string model, int cena, bool dostupan)
//    : Model(model), Cena(cena), Dostupan(dostupan){};
//    
//    ~Stol(){
////        std::cout<<"destruktor je pozvan"<<std::endl;
//    }
//    void PrikaziPodatke(){
//        std::cout<<"Model: "<< Model<<"\nCena: "<<Cena<<std::endl;
//        if(Dostupan){
//            std::cout<<Model<<" stol je dostupan!"<<std::endl;
//        }else{std::cout<<Model<<" stol nije dostupan!"<<std::endl;}
//    }
//    
//    
//
//};
//int main (){
//    Stol stol1 ("Kucni", 17000, true);
//    Stol stol2 ("Avlijski", 9000, false);
//    stol2.PrikaziPodatke();
//
//    
//    
//    return 0;
//}
// Prethodni zadatak da se zavrsi...


//ISPITNI ZADATAK////////////////////////////////////////////////////////////



#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Datum {
private:
    int Mesec;
    int Godina;
public:
    Datum (int mesec, int godina)
    :Mesec(mesec), Godina(godina){
        if(mesec<1||mesec>12){
            cout<<"Mesec mora biti od 1 do 12\n";
        }
    };
    
    ~Datum(){
//        cout<<"destruktor pozvan\n";
    }
    void setMesec(int mesec){
        Mesec = mesec;
    };
    int getMesec(){
        return Mesec;
    }
    void setGodina(int godina){
        Godina=godina;
    }
    int getGodina(){
        return Godina;
    }
    void JednakostDatuma(Datum datum1, Datum datum2){
        if (datum1.Mesec==datum2.Mesec&&datum1.Godina==datum2.Godina){
            cout<<"Datumi su jednaki!\n";
        }else{
            cout<<"Datumi nisu jednaki!\n";
        }
    }
    void PrikaziDatum(){
        cout<<"Mesec/Godina:"<<Mesec<<"."<<Godina<<endl;
    }
};
int main (){
    Datum datum1 = Datum(3, 2023);
    Datum datum2 = Datum(5, 2023);
    Datum datum3 = Datum(3, 2023);
    datum1.JednakostDatuma(datum1, datum3);
    datum1.PrikaziDatum();
    return 0;
}

