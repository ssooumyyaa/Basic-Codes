#include<iostream>
#include<string.h>
using namespace std;
class CollegeCourse
{  public:
       string courseId;
        int gp;
        char grade;
        int credits;
   
   void set_CourseId(string CID)
    {
       courseId=CID;
    }
    void set_Credit(int cr )
    {
       credits=cr;
    }
    void set_Grade(char g){
        grade=g;

    }
   int CalculateGradePoints(char g)
    {  int gradePoint;

        if(grade>=65&&grade<=90)
        {
       gradePoint=10+grade-65;
        }
         if(grade>=97&&grade<=122)
        {
       gradePoint=10+grade-97;
        }
       return gradePoint;

    }
   int  CalculateHonorPoints(int gp,int cr)
    {   
        int honorPoint;
       honorPoint=cr*CalculateGradePoints(gp);
       return honorPoint;
    }
    void display()
    { cout<<CalculateGradePoints(grade)<<" ";
      cout<<CalculateHonorPoints(gp,credits);
     }
};

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        CollegeCourse cc;
        string courseId;
        int gp;
        char grade;
        int credits;
        cin>>courseId>>grade>>credits;
        cc.set_CourseId(courseId);
        cc.set_Grade(grade);
        cc.set_Credit(credits);
        gp=cc.CalculateGradePoints(grade);
        cc.CalculateHonorPoints(gp,credits);
        cc.display();
    }
    return 0;
}
 