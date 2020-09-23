#include <string>
#include "StudentArrays.h"

using namespace std;



string StudentArrays::toString(StudentArrays* v, int vSize)
{
    string result = "{";
    for (int i = 0; i < vSize; i++)
    {
        result += "{" + toString(v[i]) + "}";
    }
    result += "}";
    return result;
}

/*
 * EXERCISE: #2A
 *
 * IMPLEMENT USING AN ENHANCED FOR LOOP (For-each).
 *
 * Returns the value of the Student's GPA
 * that has the minimum GPA on the vector
 *
 */
double StudentArrays::minStudentGPA(StudentArrays* v, int size)
{
    //YOUR CODE HERE

    return 1.0; //dummy return
}

/*
 * EXERCISE: #2B
 *
 * IMPLEMENT USING AN ENHANCED FOR LOOP (For-each).
 *
 * Returns the value of the Student's GPA
 * that has the maximum GPA on the vector
 *
 */
double StudentArrays::maxStudentGPA(StudentArrays* v, int size)
{
    //YOUR CODE HERE

    return 1.0; //dummy return
}

/*
 * EXERCISE: #2C
 *
 * IMPLEMENT WITH ANY LOOP.
 *
 * Returns the mean of the GPA's in the list
 * i.e. SUM OF ALL GPAs / QUANTITY OF GPAs ON THE VECTOR
 *
 */
double StudentArrays::getMean(StudentArrays* v, int size)
{
    double sum = 0;
    for (int i=0; i<size; i++) {
        sum += v[i].getGPA();
    }

    return sum / size;
}

/*
 * EXERCISE: #3
 *
 * IMPLEMENT USING A REGULAR FOR LOOP.
 *
 * Returns a vector of strings where each element is a string
 * representation of the record ID of each student whose id
 * starts with the specified prefix.
 *
 */
string* StudentArrays::startsWith(StudentArrays* v, int size, const string &prefix)
{
    //vector<string> result;
    //YOUR CODE HERE

    return NULL;
}

/*
 * EXERCISE: #4
 *
 * IMPLEMENT WITH ANY LOOP
 *
 * Removes the first occurrence of the specified Student,
 * if it is present. If it is not present, it is unchanged.
 * HINT: Verify the methods erase() and begin() of the vector
 *
 */
void StudentArrays::remove(StudentArrays** v, int& size, StudentArrays s)
{
    int pos = -1;
    // Find position of student if it exists
    for (int i=0; i<size; i++) {
        if (s.equals((*v)[i])) {
            pos = i;
        }
    }
    if (pos == -1) return;

    // Student found at position pos
    StudentArrays* temp = new StudentArrays[size-1];
    for (int i=0; i<pos; i++) {
        temp[i] = (*v)[i];
    }
    for (int i=pos+1; i<size; i++) {
        temp[i-1] = (*v)[i];
    }
    *v = temp;
    size = size - 1;

}

/*
 * EXERCISE: #5
 *
 * IMPLEMENT USING A WHILE LOOP.
 *
 * Returns true if vector v1 contains all of the Student's in vector v2.
 * HINT: use nested loops
 *
 */
bool StudentArrays::containsAll(StudentArrays* v, int size, StudentArrays* v2, int v2Size)
{
    //YOUR CODE HERE

    return false; //dummy return
}

void StudentArrays::addAllStudents(StudentArrays* v, int size, StudentArrays* additionalStudents, int aSize)
{

    // for (Student s : additionalStudents)
    // {
    //     v.push_back(s);
    // }
}

/*
 * BONUS
 *
 * IMPLEMENT WITH NESTED LOOPS.
 *
 * Returns true if two instances of Student have the same name, false otherwise.
 * HINT: Use the compare method of string.
 */
bool StudentArrays::repeatedStudentNames(StudentArrays* v, int size)
{
    //YOUR CODE HERE
    return false; //dummy return
}

int main() {

    StudentArrays s1("1", "Jose Miguel", MALE, 3.0);
    StudentArrays s2("2", "Jose Juan", MALE, 2.8);
    StudentArrays s3("3", "Ana", FEMALE, 3.5);
    StudentArrays s4("4", "Carmen", FEMALE, 4.0);
    StudentArrays s5("5", "Jose Alberto", MALE, 3.1);

    StudentArrays* students = new StudentArrays[5];
    students[0] = s1;
    students[1] = s2;
    students[2] = s3;
    students[3] = s4;
    students[4] = s5;

    cout << StudentArrays::toString(students, 5) << endl;

    cout << "Average GPA = " << StudentArrays::getMean(students,5) << endl;

    int size = 5;
    StudentArrays::remove(&students,size,s1);

    cout << StudentArrays::toString(students, size) << endl;
}
