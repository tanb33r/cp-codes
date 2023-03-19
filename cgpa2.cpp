#include<bits/stdc++.h>
using namespace std;
int main() {

    double credits_completed=59,cg1=3.21,cg2;


    int course_number=3;

    double this_sem_credit=12, course_credits[course_number];


    double this_sem_GPA=3.8;
    int x = 7;
    while(x--) {

        cg2 = (this_sem_GPA*this_sem_credit + credits_completed*cg1)/(credits_completed+this_sem_credit);
        credits_completed += this_sem_credit;

                cg1 = cg2 ;
//        cout<<this_sem_GPA<<"\n";
        cout<<cg2<<"\n";
//        this_sem_GPA-=.1;
    }

}
