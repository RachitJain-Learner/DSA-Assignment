/*Define a structure Student with following members:


Student :

int roll
float marks


Create a pointer to this structure and dynamically allocate a memory for this structure. Take input to the members of the structure by using the pointer and display the details.*/


#include <iostream>
using namespace std;

struct Student{
    int roll ;
    float marks ;
};

int main() {
  struct Student *ptr;
  int num_of_students;
  cout<<"Enter the number of records: ";
  cin>>num_of_students;
  
  cout<<"Enter Details of Student:\n";
  
  ptr = (struct Student *)malloc(num_of_students * sizeof(struct Student));
  
  for (int i = 0; i < num_of_students ; ++i) {
    cout<<"Enter Roll No. and Marks:\n";
    cin>> (ptr + i)->roll>> (ptr + i)->marks;
  }

  cout<<"Displaying Details of Student:\n";
  for (int i = 0; i < num_of_students; ++i) {
  cout<<"Roll No.: "<<(ptr + i)->roll<<" & Marks: "<<(ptr + i)->marks<<endl;
  }

  free(ptr);
    
    return 0;
}


