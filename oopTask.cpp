//البرنامج الأول


#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void setData(string name, int age) {
        name = name;
        age = age;
    }

    void display() {
        cout << "Student Name: " << name << ", Age: " << age << endl;
    }
};

class Course {
public:
    string courseName;
    int duration;

    void setCourse(string courseName, int duration) {
        courseName = courseName;
        duration = duration;
    }

    void showCourse() {
        cout << "the Course is: " << courseName << ",its Duration: " << duration << " months" << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Ali", 20);
    s1.display();

    Course c1;
    c1.setCourse("OOP", 6);
    c1.showCourse();

    return 0;
}








//البرنامج الثاني


#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string name, int age) {  // Constructor
        name = name;
        age = age;
    }

    void display() {
        cout << "Student Name: " << name << ", Age: " << age << endl;
    }
};

class Course {
public:
    string courseName;
    int duration;

    Course(string courseName, int duration) {  // Constructor
        courseName = courseName;
        duration = duration;
    }

    void showCourse() {
        cout << "Course: " << courseName << ", Duration: " << duration << " months" << endl;
    }
};

int main() {
    Student s1("Omar", 21);
    s1.display();

    Course c1("C++ Programming", 4);
    c1.showCourse();

    return 0;
}






/*
 البرنامج الثالث
*/
>.



#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string name, int age) {
        name = name;
        age = age;
        cout << "Student object created.\n";
    }

    ~Student() {
        cout << "Student object destroyed.\n";
    }

    void display() {
        cout << "Student Name: " << name << ", Age: " << age << endl;
    }
};

class Course {
public:
    string courseName;
    int duration;

    Course(string c, int d) {
        courseName = c;
        duration = d;
        cout << "Course object created.\n";
    }

    ~Course() {
        cout << "Course object destroyed.\n";
    }

    void showCourse() {
        cout << "Course: " << courseName << ", Duration: " << duration << " months" << endl;
    }
};

int main() {
    Student s1("Sara", 19);
    s1.display();

    Course c1("Data Structures", 5);
    c1.showCourse();

    return 0;
}





 //البرنامج الرابع


#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Function Overloading
    void display() {
        cout << "Student Name: " << name << ", Age: " << age << endl;
    }

    void display(string grade) {
        cout << "Student Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};

class Course {
public:
    string courseName;
    int duration;

    Course(string courseName, int duration) {
        courseName = courseName;
        duration = duration;
    }

    void showCourse() {
        cout << "Course: " << courseName << ", Duration: " << duration << " months" << endl;
    }

    void showCourse(string teacher) {
        cout << "Course: " << courseName << ", Duration: " << duration
             << " months, Teacher: " << teacher << endl;
    }
};

int main() {
    Student s1("Ahmed", 22);
    s1.display();
    s1.display("A+");

    Course c1("OOP", 3);
    c1.showCourse();
    c1.showCourse("Dr. Mona");

    return 0;
}
