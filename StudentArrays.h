#include <string>
#include <iostream>

using namespace std;

enum Gender
{
    MALE,
    FEMALE
};


class StudentArrays
{
public:

private:
    string id;
    string name;
    Gender gender;
    float gpa;
    bool emptyRecord;

public:
    StudentArrays(const string &id, const string &name, Gender gender, double gpa)
    {
        this->id = id;
        this->name = name;
        this->gender = gender;
        this->gpa = gpa;
        this->emptyRecord = false;
    }

    StudentArrays()
    {
        this->emptyRecord = true;
    }

    static string toString(StudentArrays& s)
    {
        // TO DO: add MALE or FEMALE to string
        string genderLetter = (s.gender  == MALE ? "M" : "F");
        return string(s.id + "," + s.name + "," + genderLetter + "," + to_string(s.gpa));
    }

    static string toString(StudentArrays* v, int vSize);

    // Getters
    string getID()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    Gender getGender()
    {
        return gender;
    }

    double getGPA()
    {
        return gpa;
    }

    bool getEmptyRecord()
    {
        return emptyRecord;
    }

    void setEmptyRecord(bool trueOrFalse) { emptyRecord = trueOrFalse; }

    bool equals(StudentArrays s2)
    {
        return (this->getID().compare(s2.getID()) == 0);
    }
    
    static double minStudentGPA(StudentArrays* v, int vSize);
    static double maxStudentGPA(StudentArrays* v, int vSize);
    static double getMean(StudentArrays* v, int vSize);
    static string* startsWith(StudentArrays* v, int size, const string &prefix);

    // List modifiers
    static void remove(StudentArrays** v, int& vSize, StudentArrays s);
    static void append(StudentArrays* v, int size); 
    static void addAllStudents(StudentArrays* v, int size, StudentArrays* additionalStudents, int aSize);

    // Nested Loops Problems

    static bool containsAll(StudentArrays* v, int vSize, StudentArrays* v2, int v2Size);
    static bool repeatedStudentNames(StudentArrays* v, int size);
};
