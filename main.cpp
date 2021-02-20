#include <iostream>
#include <vector>

using namespace std;

class Person {
    private:
        string name;
        string surname;
        int age;
    public:
        Person(string name, string surname, int age);
        ~Person();
        virtual void getData();
        virtual void setData();
        string getName();
        string getSurname();
        int getAge();
};

Person :: Person(string name, string surname, int age){
    this -> name = name;
    this -> surname = surname;
    this -> age = age;
}

Person :: ~Person(){
    cout << "The program is over";
}

void Person :: setData(){
    cout << "Name = ";
    string name;
    cin >> name;
    this -> name = name;
    cout << "Surname = ";
    string surname;
    cin >> surname;
    this -> surname = surname;
    cout << "Age = ";
    int age;
    cin >> age;
    this -> age = age;
}

void Person :: getData(){
    cout << "\nName = " << name << "\nSurname = " << surname << "\nAge = " << age;
}

string Person :: getName(){
    return name;
}

string Person :: getSurname(){
    return surname;
}

int Person :: getAge(){
    return age;
}

class Professor : public Person{
    private:
        float salary;
        string faculty;
        float loan;
    public:
        Professor(string name, string surname, int age, float salary, string faculty, float loan);
        ~Professor();
        virtual void getData();
        virtual void setData();
        float getSalary();
        string getFaculty();
        float getLoan();
};

Professor :: Professor(string name = "", string surname = "", int age = 0, float salary = 0, string faculty = "", float loan = 0) : Person(name, surname, age){
    this -> salary = salary;
    this -> faculty = faculty;
    this -> loan = loan;
}

Professor :: ~Professor(){
    cout << "The program is over";
}

void Professor :: setData(){
    Person :: setData();
    cout << "Salary = ";
    float salary;
    cin >> salary;
    this -> salary = salary;
    cout << "Faculty = ";
    string facultatea;
    cin >> facultatea;
    this -> faculty = facultatea;
    cout << "Loan = ";
    float loan;
    cin >> loan;
    this -> loan = loan;
}

void Professor :: getData(){
    Person :: getData();
    cout << "\nSalary = " << salary << "\nFaculty = " << faculty << "\nLoan = " << loan << '\n';
}

float Professor :: getSalary(){
    return salary;
}

string Professor :: getFaculty(){
    return faculty;
}

float Professor :: getLoan(){
    return loan;
}

class University : public Professor {
    private:
        int experience;
        string course;
    public:
        University(string name, string surname, int age, float salary, string faculty, float loan, int experience, string course);
        ~University();
        void setData();
        void getData();
        int getExperience();
        string getCourse();
};

University :: University(string name = "", string surname = "", int age = 0, float salary = 0, string faculty = "", float loan = 0, int experience = 0, string course = "") : Professor(name, surname, age, salary, faculty, loan){
    this -> experience = experience;
    this -> course = course;
}

University :: ~University(){
    cout << "The program is over";
}

void University :: setData(){
    Professor :: setData();
    cout << "Experience = ";
    int experience;
    cin >> experience;
    this -> experience = experience;
    cout << "Course = ";
    string course;
    cin >> course;
    this -> course = course;
}

void University :: getData(){
    Professor :: getData();
    cout << "Experience = " << experience << "\nCourse = " << course << '\n';
}

int University :: getExperience(){
    return experience;
}

string University :: getCourse(){
    return course;
}

class exProfessor : public Professor {
    private:
        int retirmentYear;
    public:
        exProfessor(string name, string surname, int age, float salary, string faculty, float loan, int retirmentYear);
        ~exProfessor();
        void setData();
        void getData();
        int getRetirmentYear();
};

exProfessor :: exProfessor(string name = "", string surname = "", int age = 0, float salary = 0, string faculty = "", float loan = 0, int retirmentYear = 0) : Professor(name, surname, age, salary, faculty, loan){
    this -> retirmentYear = retirmentYear;
}

exProfessor :: ~exProfessor(){
    cout << "The program is over";
}
void exProfessor :: setData(){
    Professor :: setData();
    cout << "Retirment year = ";
    int retirmentYear;
    cin >> retirmentYear;
    this -> retirmentYear = retirmentYear;
}

void exProfessor :: getData(){
    Professor :: getData();
    cout << "Retirment year = " << retirmentYear << '\n';
}

int exProfessor :: getRetirmentYear(){
    return retirmentYear;
}

class Assistant : public Professor {
    private:
        string professorName;
        int startYear;
        int endYear;
    public:
        Assistant(string name, string surname, int age, float salary, string faculty, float loan, string professorName, int startYear, int endYear);
        ~Assistant();
        void setData();
        void getData();
        string getProfessorName();
        int getStartYear();
        int getEndYear();
};

Assistant :: Assistant(string name = "", string surname = "", int age = 0, float salary = 0, string faculty = "", float loan = 0, string professorName = "", int startYear = 0, int endYear = 0) : Professor(name, surname, age, salary, faculty, loan){
    this -> professorName = professorName;
    this -> startYear = startYear;
    this -> endYear = endYear;
}

Assistant :: ~Assistant(){
    cout << "The program is over";
}

void Assistant :: setData(){
    Professor :: setData();
    cout << "Name of the University professor = ";
    string professorName;
    cin >> professorName;
    this -> professorName = professorName;
    cout << "The beginning of the period = ";
    int startYear;
    cin >> startYear;
    this -> startYear = startYear;
    cout << "The end of the period = ";
    int endYear;
    cin >> endYear;
    this -> endYear = endYear;
}

void Assistant :: getData(){
    Professor :: getData();
    cout << "Name of the University professor = " << professorName << "\nThe beginning of the period = " << startYear << "\nThe end of the period = " << endYear << '\n';
}

string Assistant :: getProfessorName(){
    return professorName;
}

int Assistant :: getStartYear(){
    return startYear;
}

int Assistant :: getEndYear(){
    return endYear;
}

class Headmaster : public Professor{
    private:
        int startYear;
        int endYear;
        int noStudents;
        int noDepartments;
        float facultyBudget;
    public:
        Headmaster(string name, string surname, int age, float salary, string faculty, float loan, int startYear, int endYear, int noStudents, int noDepartments, float facultyBudget);
        ~Headmaster();
        void setData();
        void getData();
        int getStartYear();
        int getEndYear();
        int getNoStudents();
        int getNoDepartments();
        float getFacultyBudget();
};

Headmaster :: Headmaster(string name = "", string surname = "", int age = 0, float salary = 0, string faculty = "", float loan = 0, int startYear = 0, int endYear = 0, int noStudents = 0, int noDepartments = 0, float facultyBudget = 0) : Professor(name, surname, age, salary, faculty, loan){
    this -> startYear = startYear;
    this -> endYear = endYear;
    this -> noStudents = noStudents;
    this -> noDepartments = noDepartments;
    this -> facultyBudget = facultyBudget;
}

Headmaster :: ~Headmaster(){
    cout << "The program is over";
}

void Headmaster :: setData(){
    Professor :: setData();
    cout << "The beginning of the period = ";
    int startYear;
    cin >> startYear;
    this -> startYear = startYear;
    cout << "The end of the period = ";
    int endYear;
    cin >> endYear;
    this -> endYear = endYear;
    cout << "The number of students from faculty = ";
    int noStudents;
    cin >> noStudents;
    this -> noStudents = noStudents;
    cout << "The number of departments from faculty = ";
    int noDepartments;
    cin >> noDepartments;
    this -> noDepartments = noDepartments;
    cout << "The budget of faculty = ";
    float facultyBudget;
    cin >> facultyBudget;
    this -> facultyBudget = facultyBudget;
}

void Headmaster :: getData(){
    Professor :: getData();
    cout << "The beginning period = " << startYear << "\nThe end period = " << endYear << "\nThe number of students from faculty = " << noStudents << "\nThe number of departments from faculty = " << noDepartments << "\nThe budget of faculty = " << facultyBudget << '\n';
}

int Headmaster :: getStartYear(){
    return startYear;
}

int Headmaster :: getEndYear(){
    return endYear;
}

int Headmaster :: getNoStudents(){
    return noStudents;
}

int Headmaster :: getNoDepartments(){
    return noDepartments;
}

float Headmaster :: getFacultyBudget(){
    return facultyBudget;
}

class Student : public Person {
    private:
        string address;
        int yearOfStudy;
        int startYear;
        float lastGPA;
    public:
        Student(string name, string surname, int age, string address, int yearOfStudy, int startYear, float lastGPA);
        ~Student();
        void setData();
        void getData();
        string getAddress();
        int getYearOfStudy();
        int getStartYear();
        float getLastGPA();
};

Student :: Student(string name = "", string surname = "", int age = 0, string address = "", int yearOfStudy = 0, int startYear = 0, float lastGPA = 0) : Person(name, surname, age){
    this -> address = address;
    this -> yearOfStudy = yearOfStudy;
    this -> startYear = startYear;
    this -> lastGPA = lastGPA;
}

Student :: ~Student(){
    cout << "The program is over";
}

void Student :: setData(){
    Person :: setData();
    cout << "Student address = ";
    string address;
    cin >> address;
    this -> address = address;
    cout << "Current year of study = ";
    int yearOfStudy;
    cin >> yearOfStudy;
    this -> yearOfStudy = yearOfStudy;
    cout << "Starting year = ";
    int startYear;
    cin >> startYear;
    this -> startYear = startYear;
    cout << "Last year's GPA = ";
    float lastGPA;
    cin >> lastGPA;
    this -> lastGPA = lastGPA;
}

void Student :: getData(){
    Person :: getData();
    cout << "\nStudent address = " << address << '\n' << "Current year of study = " << yearOfStudy << '\n' << "Starting year = " << startYear << '\n' << "Last year's GPA = " << lastGPA << '\n';
}

string Student :: getAddress(){
    return address;
}

int Student :: getYearOfStudy(){
    return yearOfStudy;
}

int Student :: getStartYear(){
    return startYear;
}

float Student :: getLastGPA(){
    return lastGPA;
}

class Menu{
    private:
        vector<Person*> arr;
    public:
        void process();
        void database();
        void databaseU();
        void databaseEXP();
        void databaseA();
        void databaseH();
        void databaseS();
        void income();
        void under4000();
        void retirmentAge();
        void debt();
        void facultyTeachers();
        void retired5();
        void assistant2021();
        void headmastersInfo();
        void studentLast5();
        void studentGPA8();
};

void Menu :: process(){
    cout << "Number of objects = ";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        Person* p;
        string s;
        cout << "\nObject type " << i + 1 << " = ";
        cin >> s;
        if(s == "University"){
            p = new University;
            p -> setData();
            arr.push_back(p);
        }
        else
            if(s == "Ex-Professor"){
                p = new exProfessor;
                p -> setData();
                arr.push_back(p);
            }
            else
                if(s == "Assistant"){
                    p = new Assistant;
                    p -> setData();
                    arr.push_back(p);
                }
                else
                    if(s == "Headmaster"){
                        p = new Headmaster;
                        p -> setData();
                        arr.push_back(p);
                    }
                    else
                        if(s == "Student"){
                            p = new Student;
                            p -> setData();
                            arr.push_back(p);
                        }
                        else{
                            cout << "Wrong input! Try University, Ex-Professor, Assistant, Headmaster or Student!";
                            i--;
                        }
    }
}

void Menu :: database(){
    cout << "\n\nThe Database has the following objects :\n";
    for(auto it : arr)
        it -> getData();
}

void Menu :: databaseU(){
    cout << "\n\nThe database of the University professors :\n";
    for(auto it : arr)
        if(University *u = dynamic_cast<University*>(it))
            u -> getData();
}

void Menu :: databaseEXP(){
    cout << "\n\nThe database of the retired professors :\n";
    for(auto it : arr)
        if(exProfessor *ex = dynamic_cast<exProfessor*>(it))
            ex -> getData();
}

void Menu :: databaseA(){
    cout << "\n\nThe database of the assistants :\n";
    for(auto it : arr)
        if(Assistant *a = dynamic_cast<Assistant*>(it))
            a -> getData();
}

void Menu :: databaseH(){
    cout << "\n\nThe database of the Headmasters :\n";
    for(auto it : arr)
        if(Headmaster *h = dynamic_cast<Headmaster*>(it))
            h -> getData();
}

void Menu :: databaseS(){
    cout << "\n\nThe database of the Students :\n";
    for(auto it : arr)
        if(Student *s = dynamic_cast<Student*>(it))
            s -> getData();
}

void Menu :: income(){
    cout << "\n\nMonthly salary :\n";
    for(auto it : arr)
        if(Professor *p = dynamic_cast<Professor*>(it))
            cout << p -> getName() << " " << p -> getSurname() << " = " << p -> getSalary() << " RON\n";

}

void Menu :: under4000(){
    cout << "\n\nEmployees with a salary less thann 4000 RON :\n";
    for(auto it : arr)
        if(Professor *p = dynamic_cast<Professor*>(it))
            if(p -> getSalary() < 4000)
                cout << p -> getName() << " " << p -> getSurname() << " = " << p -> getSalary() << " RON\n";
}

void Menu :: retirmentAge(){
    cout << "\n\nTeachers of retirment age :\n";
    for(auto it : arr)
        if(it -> getAge() > 65)
            cout << it -> getName() << " " << it -> getSurname() << '\n';
}

void Menu :: debt(){
    cout << "\n\nPeople with loans and exact amounts :\n";
    for(auto it : arr)
        if(Professor *p = dynamic_cast<Professor*>(it))
            if(p -> getLoan() > 0)
                cout << p -> getName() << " " << p -> getSurname() << " = " << p -> getLoan() << " RON\n";
}

void Menu :: facultyTeachers(){
    cout << "\n\nTeachers at the Faculty of Mathematics and Computer Science, University of Bucharest : \n";
    for(auto it : arr)
        if(Professor *p = dynamic_cast<Professor*>((it)))
            if(p -> getFaculty() == "Mathematics-ComputerScience")
                cout << p -> getName() << " " << p -> getSurname() << '\n';
}

void Menu :: retired5(){
    cout << "\n\nTeachers who have retired in the last 5 years : \n";
    for(auto it : arr)
        if(exProfessor *xp = dynamic_cast<exProfessor*>(it)){
            int an = xp -> getRetirmentYear();
            if(an >= 2015)
                cout << xp -> getName() << " " << xp -> getSurname() << '\n';
        }
}

void Menu :: assistant2021(){
    cout << "\n\nAssistants whose employments contract expires in 2021 : \n";
    for(auto it : arr)
        if(Assistant *a = dynamic_cast<Assistant*>(it)){
            int an = a -> getEndYear();
            if(an == 2021)
                cout << a -> getName() << " " << a -> getSurname() << '\n';
        }
}

void Menu :: headmastersInfo(){
    cout << "\n\nThe name and surname of the Headmasters, the faculty where they work and the number of students in it, if there are over 1000 : \n";
    for(auto it : arr)
        if(Headmaster *h = dynamic_cast<Headmaster*>(it))
            if(h -> getNoStudents() >= 1000)
                cout << h -> getName() << " " << h -> getSurname() << " " << h -> getFaculty() << " " << h -> getNoStudents() << '\n'; 
}

void Menu :: studentLast5(){
    cout << "\n\nThe name an surname of the Students who started faculty since 2016 : \n";
    for(auto it : arr)
        if(Student *s = dynamic_cast<Student*>(it))
            if(s -> getStartYear() >= 2016)
                cout << s -> getName() << " " << s -> getSurname() << '\n';

}

void Menu :: studentGPA8(){
    cout << "\n\nThe name, surname and GPA of the Students who got over 8 : \n";
    for(auto it : arr)
        if(Student *s = dynamic_cast<Student*>(it))
            if(s -> getLastGPA() > 8)
                cout << s -> getName() << " " << s -> getSurname() << " " << s -> getLastGPA() << '\n';
}
int main(){
    Menu X;
    X.process();
    X.database();
    X.databaseU();
    X.databaseEXP();
    X.databaseA();
    X.databaseH();
    X.databaseS();
    X.income();
    X.under4000();
    X.retirmentAge();
    X.debt();
    X.facultyTeachers();
    X.retired5();
    X.assistant2021();
    X.headmastersInfo();
    X.studentLast5();
    X.studentGPA8();
    return 0;
}
