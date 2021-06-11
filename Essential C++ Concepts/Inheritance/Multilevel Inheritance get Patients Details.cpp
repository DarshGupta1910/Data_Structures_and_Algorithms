/*  C++ Program for Enter Patient details using Inheritance  */

#include <iostream> 
using namespace std;
const int LEN = 80; 
class doctor 
{ 
      private: 
                   char name[LEN]; 
                   char degree[LEN]; 
      public: 
                   void getedu() 
                    { 
                       cout<<"Enter the Doctor Name : "; 
                       cin>> name; 
                       cout<<"Enter Doctorate Degree : "; 
                       cin>>degree; 
                     } 
                   void showedu() 
                    { 
                       cout<<"\nDoctor Name : "<<name; 
                       cout<<"\nDoctorate Degree : "<<degree; 
                     } 
}; 
class patient 
{ 
      private: 
                       char name[LEN]; 
                       char number [LEN]; 
      public: 
                    void getdata() 
                     { 
                          cout<<"\nEnter Patient Name : "; 
                          cin>>name; 
                          cout<<"\nEnter Bed Number : "; 
                          cin>>number; 
                      } 
                     void showdata() 
                      { 
                           cout<<"\nPatient Name : "<<name; 
                           cout<<"\nBed Number : "<<number; 
                       } 
}; 
class department 
{ 
       private: 
                            char ward [LEN] ; 
       public: 
                      void getdata() 
                       { 
                            cout<<"\nEnter Ward Name : "; 
                            cin>>ward; 
                        } 
                      void showdata() 
                       { 
                            cout<<"\nWard Name : "<<ward; 
                        } 
}; 
class amount 
{ 
        private: 
                              int dues; 
                              patient pat; 
                              doctor doc; 
                              department dept; 
        public: 
                        void getdata() 
                          { 
                               pat.getdata(); 
                               dept.getdata(); 
                               doc.getedu(); 
                               cout<<"Enter Dues of Patient : "; 
                               cin>>dues; 
                           } 
                         void showdata() 
                           { 
                               pat.showdata(); 
                               dept.showdata(); 
                               doc.showedu(); 
                               cout<<"\nTotal Dues of Patient : "<<dues; 
                            } 
}; 
   int main() 
       { 
                  amount a1; 
                 
                  cout<<"\nEnter Data "; 
                  a1.getdata(); 
                  cout<<"\nInserted Data is : \n"; 
                  a1.showdata(); 
                 return 0; 
        }


// -------------- OUTPUT ----------------------------

Enter Data
Enter Patient Name : CodezClub

Enter Bed Number : 123

Enter Ward Name : 321
Enter the Doctor Name : John
Enter Doctorate Degree : MBBS
Enter Dues of Patient : 2500

Inserted Data is :

Patient Name : CodezClub
Bed Number : 123
Ward Name : 321
Doctor Name : John
Doctorate Degree : MBBS
Total Dues of Patient : 2500
