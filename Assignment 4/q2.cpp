#include<iostream> 
using namespace std; 
class Student { 
public: 
void Study() { 
cout << "I will study after 1 hours" << "\n"; 
} 
}; 
class UndergraduateStudent: public Student { 
public: 
void Btech() { 
cout << "I am doing Btech from GEU" << "\n"; 
} 
}; 
class Freshman: public UndergraduateStudent { 
public: 
void Motivation() { 
cout << "i will score 10CGPA this sem" << "\n"; 
} 
}; 
class Junior: public UndergraduateStudent { 
public: 
void coding() { 
cout << "My program works.. but i don;t know why?" << "\n"; 
} 
}; 
class Senior: public UndergraduateStudent { 
public: 
void coding() { 
cout << "What am i doing here?" << "\n"; 
} 
}; 
class GraduateStudent: public Student { 
public: 
void Knowledge()
{ 
cout << "I want to get more Knowledge" << "\n"; 
} 
}; 
class MastersStudent : public GraduateStudent { 
public: 
void Master() { 
cout << "I will master this subject" << "\n"; 
} 
}; 
class DoctoralStudent : public GraduateStudent { 
public: 
void Doctoral() { 
cout << "I will research new things in this subject" << "\n"; 
} 
}; 
int main() { 
Junior Omja ; 
Omja.Btech(); 
Omja.coding(); 
Omja.Study(); 
DoctoralStudent Sharma; 
Sharma.Doctoral(); 
Sharma.Study(); 
}
