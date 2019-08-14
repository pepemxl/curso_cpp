#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    public:
        int get_age(){
            return m_age;
        }
        void set_age(int age_){
            m_age = age_;
        }
        string get_first_name(){
            return m_first_name;
        }
        void set_first_name(string first_name_){
            m_first_name = first_name_;
        }
        string get_last_name(){
            return m_last_name;
        }
        void set_last_name(string last_name_){
            m_last_name = last_name_;
        }
        int get_standard(){
            return m_standard;
        }
        void set_standard(int standard_){
            m_standard = standard_;
        }
        stringstream to_string(){
            stringstream res{};
            res << m_age;
            res << ",";
            res << m_first_name + ",";
            res << m_last_name + ",";
            res << m_standard;
            return res;
        }
    private:
        int m_age;
        int m_standard;
        string m_first_name;
        string m_last_name;

};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

