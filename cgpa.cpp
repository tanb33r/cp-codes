#include<bits/stdc++.h>
using namespace std;
int main() {

    double credits_completed=59,cg1=3.21,cg2;


    int course_number=3;

    double this_sem_credit=0, course_credits[course_number];
    double cg[course_number];
    course_credits[0] = 3;
    course_credits[1] = 4;
    course_credits[2] = 4.5;
    cg[0] = 3;
    cg[1] = 4;
    cg[2] = 4;

    for(int i = 0; i < course_number; i++)
        this_sem_credit += course_credits[i];


    double this_sem_GPA=0;

    for(int i=0; i < course_number; i++) {
        this_sem_GPA += course_credits[i] * cg[i];
    }
    cg2 = (this_sem_GPA + credits_completed*cg1)/(credits_completed+this_sem_credit);
    this_sem_GPA /= this_sem_credit;

    cout<<this_sem_GPA<<"\n";
    cout<<cg2<<"\n";





}
