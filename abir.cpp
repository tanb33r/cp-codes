#include <iostream>
#include <conio.h>
using namespace std;
class Person{
protected:
    string name;
    int age;
    string gender;
    float height;
public:
    Person(string name="Name not initialized", int age=0 ,string gender="Not initialized",float height=0.0){
    cout<<"Constructor is Called"<<endl;
    this->name=name;
    this->age=age;
    this->gender=gender;
    this->height=height;}

    void setName(string name){this->name=name;}
    void setAge(int age){this->age=age;}
    void setGender(string gender){this->gender=gender;}
    void setHeight(float height){this->height=height;}

    string getName(){return this->name;}
    int getAge(){return this->age;}
    string getGender(){return this->gender;}
    float getHeight(){return this->height;}

    void showPerson(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
        cout<<"Gender: "<<this->gender<<endl;
        cout<<"Height: "<<this->height<<endl;}
};
class Employee: virtual public Person{
protected:
    string employeeId;
    string workType;
    string qualification;
    string designation;
    float salary;

public:
    Employee(string name="Name not initialized", int age=0 ,string gender="Not initialized",float height=0.0, string employeeId="ID",
             string workType="Type", string qualification="Name not initialized",
             string designation="Name not initialized",float salary=0.0):Person(name,age,gender,height){
    cout<<"Employee Constructor is Called"<<endl;
    this->employeeId=employeeId;
    this->workType=workType;
    this->qualification=qualification;
    this->designation=designation;
    this->salary=salary;

}
    void setEmployeeId(string employeeId){this->employeeId=employeeId;}
    void setWorkTyype( string workType) {this->workType=workType;}
    void setQualification (string qualification) {this->qualification=qualification;}
    void Designation (string designation) {this->designation=designation;}
    void setSalary (float salary) {this->salary=salary;}

    string getEmployeeId(){return this->employeeId;}
    string getWorkType(){return this->workType;}
    string Qualification(){return this->qualification;}
    string Designation(){return this->designation;}
    float getSalary(){return this->salary;}


    void showEmployee(){
    showPerson();
    cout<<"ID: "<<employeeId<<endl;
    cout<<"Work Type: "<<workType<<endl;
    cout<<"Qualification: "<<qualification<<endl;
    cout<<"Designation: "<<designation<<endl;
    cout<<"Salary: "<<salary<<endl;
}
};
class Student: virtual public Person{
protected:
    string studentId;
    string department;
    string attendance;
    string performance;
    float cgpa;
public:
    Student(string name="Name not initialized", int age=0 ,string gender="Not initialized",float height=0.0,
            string studentId="ID",string department="Name not initialized",string attendance="Name not initialized",
            string performance="Name not initialized",float cgpa=0.0): Person(name,age,gender,height){

    cout<<"Student Constructor is Called"<<endl;
    this->studentId=studentId;
    this->department=department;
    this->attendance=attendance;
    this->performance=performance;
    this->cgpa=cgpa;
    }
    void setStudentId(string studentId){this->studentId=studentId;}
    void setDepartment(string department){this->department=department;}
    void setAttendance(string attendance){this->attendance=attendance;}
    void setPerformance(string performance){this->performance=performance;}
    void setCgpa(float cgpa){this->cgpa=cgpa;}

    string getStudentId(){return this->studentId;}
    string getDepartment(){return this->department;}
    string getAttendance() {return this->attendance;}
    string getPerformance(){return this->performance;}
    float getCgpa(){return this->cgpa;}

    void showStudent(){
    showPerson();
    cout<<"ID: "<<studentId<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Attendance: "<<attendance<<endl;
    cout<<"Performance: "<<performance<<endl;
    cout<<"Cgpa: "<<cgpa<<endl;
    }
};
class Officer: public Employee{
protected:
    string workinghours;

public:
    Officer(string name="Name not initialized", int age=0 ,string gender="Not initialized",float height=0.0,string employeeId="ID",
             string workType="Type", string qualification="Name not initialized",
             string designation="Name not initialized",float salary=0.0,string workinghours="Hours"):Person(name,age,gender,height),
             Employee(name,age,gender,height,employeeId,
            workType,qualification,designation,salary){
            cout<<"Officer Constructor is Called"<<endl;
            this->workinghours=workinghours;
            }
            void setWorkinghours(string workinghours){this->workinghours=workinghours;}
            string getWorkinghours(){return this->workinghours;}
            void showOfficer(){
                showEmployee();
                cout<<"Working Hours: "<<this->workinghours<<endl;
                }
};
class Faculty: public Employee{
protected:
    string facultytype;
    int numberofcourse;
    int member;
    int publishedpaper;
public:
    Faculty(string name="Name not initialized", int age=0 ,string gender="Not initialized",float height=0.0,string employeeId="Not initialized",string workType="Not initialized",string qualification="Not initialized",
            string designation="Not initialized",float salary=0.0, string facultytype="Not initialized",
            int numberofcourse=0,int member=0,int publishedpaper=0):
            Employee(name,age,gender,height,employeeId,workType,qualification,designation,salary){
            cout<<"Faculty Constructor is Called"<<endl;
            this->facultytype=facultytype;
            this->numberofcourse=numberofcourse;
            this->member=member;
            this->publishedpaper=publishedpaper;
            }
        void setFacultytype(string facultyname){this->facultytype=facultytype;}
        void setNumberofcourse(int numberofcourse){this->numberofcourse=numberofcourse;}
        void setMember(int member){this->member=member;}
        void setPublishedpaper(int publishedpaper){this->publishedpaper=publishedpaper;}

        string getFacultytype(){return this->facultytype;}
        int getNumberofcourse(){return this->numberofcourse;}
        int getMember(){return this->member=member;}
        int getPublishedpaper(){return this->publishedpaper;}

        void showFaculty(){
            showEmployee();
            cout<<"Faculty Name: "<<this->facultytype<<endl;
            cout<<"Course Number: "<<this->numberofcourse<<endl;
            cout<<"Faculty Member: "<<this->member<<endl;
            cout<<"Published Paper: "<<this->publishedpaper<<endl;
            }
};
class GraduateStudent: public Student{
protected:
    string previousuniversity;
    string currentuniversity;
    string speciality;
public:
    GraduateStudent(string name="Name not initialized", int age=0 ,string gender="Not initialized",float height=0.0,
            string studentId="ID",string department="Name not initialized",string attendance="Name not initialized",
            string performance="Name not initialized",float cgpa=0.0,string previousuniversity="Name not initialized",
            string currentuniversity="Name not initialized",string speciality="Name not initialized"):
            Person(name,age,gender,height),Student(name,age,gender,height,studentId,department,attendance,performance,cgpa){
                cout<<"Graduate Student Constructor is Called"<<endl;
                this-> previousuniversity=previousuniversity;
                this->currentuniversity=currentuniversity;
                this-> speciality= speciality;
                }
            void setPreviousuniversity(string previousuniversity){this-> previousuniversity=previousuniversity;}
            void setCurrentuniversity(string currentuniversity) {this->currentuniversity=currentuniversity;}
            void setSpeciality(string speciality) {this-> speciality= speciality;}

            string getPreviousuniversity(){this-> previousuniversity;}
            string getCurrentuniversity(){this->currentuniversity;}
            string getSpeciality(){this-> speciality;}

            void showGraduteStudent(){
                showStudent();
                cout<<"Previous University: "<<this-> previousuniversity<<endl;
                cout<<"Current University: "<<this->currentuniversity<<endl;
                cout<<"Special Subject: "<<this-> speciality<<endl;}
                };
class TA: public Student,public Faculty{
protected:
    string teachinghour;
    string skill;
public:
    TA(string name="Name not initialized", int age=0 ,string gender="Not initialized",float height=0.0,
        string studentId="ID",string department="Name not initialized",string attendance="Name not initialized",
        string performance="Name not initialized",float cgpa=0.0,string facultytype="Not initialized",int numberofcourse=0,
        int member=0,int publishedpaper=0,string teachinghour="Not initialized",string skill="Not initialized"):
        Student(name,age,gender,height,studentId,department,attendance,performance,cgpa),
        Faculty(name,age,gender,height,facultytype,numberofcourse,member,publishedpaper){

        cout<<"TA Constructor is Called"<<endl;
        this->teachinghour=teachinghour;
        this->skill=skill;
        }
        void setTeachinghour(string teachinghour){this->teachinghour=teachinghour;}
        void setSkill(string skill){this->skill=skill;}
        string getTeachinghour(){this->teachinghour;}
        string getSkill(){this->skill;}

        void showTA(){
            showStudent();
            cout<<"Faculty Type: "<<this->facultytype<<endl;
            cout<<"Number of Course: "<<this->numberofcourse<<endl;
            cout<<"Member: "<<this->member<<endl;
            cout<<"Published Paper: "<<this->publishedpaper<<endl;
            cout<<"Teaching Hours: "<<this->teachinghour<<endl;
            cout<<"Skill Level: "<<this->skill<<endl;

        }




};

int  main()
{

    Person p("Rahman",25,"Male",5.7);
    p.showPerson();
    cout<<endl;
    Employee e("Tamim",30,"Male",6.1,"x-xxx-x","Full Time","MBA","General Officer",20000);
    e.showEmployee();
    cout<<endl;
    Student s("Musfiqur Rahman",19,"Male",5.7,"xx-xxxx-x","CSE","100%","Very Good",3.98);
    s.showStudent();
    cout<<endl;
    Officer o("Supriya",30,"Female",5.2,"x-xxx-x","Full Time","MBA","Assistant Director",30000.50,"10:00 a.m - 6:00 p.m");
    o.showOfficer();
    cout<<endl;
    Faculty f("Tamim",30,"Male",6.1,"x-xxx-x","Full Time","PHD","Faculty Head",80000,"Engineering",7,35,5);
    f.showFaculty();
    cout<<endl;
    GraduateStudent gs("Ratul Ahmed",25,"Male",5.7,"xx-xxxx-x","CSE","100%","Very Good",3.98,"North South University",
                       "American International University of Bangladesh","Software");
    gs.showGraduteStudent();
    cout<<endl;
    TA ta("Musfiqur Rahman",19,"Male",5.7,"xx-xxxx-x","CSE","100%","Very Good",3.98,"Engineering",5,2,4,"8-5","Good");
    ta.showTA();




    getch();
}
