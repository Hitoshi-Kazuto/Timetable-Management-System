#include <bits/stdc++.h>
#include <fstream>
using namespace std;
struct weekt
{
    char lec[100];
};

class t_timetable
{
public:
    int room[6][8];
    int id;
    int sem;
    int year;
    int batch;
    weekt wee[6][8];

    void create()
    {

        cout << "Enter your timetable :" << endl
             << endl;

        for (int w = 1; w < 6; w++)
        {

            if (w == 1)
                cout << "---Monday---" << endl;
            else if (w == 2)
                cout << "---Tuesday---" << endl;
            else if (w == 3)
                cout << "---wednesday---" << endl;
            else if (w == 4)
                cout << "---Thrusday---" << endl;
            else if (w == 5)
                cout << "---Friday---" << endl;

            int t = 9;
            for (int p = 0; p < 8; p++)
            {

                cout << "Timing    ||    Batch" << endl;
                cout << t << ":00-" << t << ":50  ->   ";
                cin >> wee[w][p].lec;
                cout << "Room no -->  ";
                cin >> room[w][p];
                t++;
            }
        }
    }

    void display()
    {

        int t = 9;
        cout << setw(10) << "WEEKS   ";
        for (int q = 0; q < 8; q++)
        {
            cout << "  ||   " << t << ":00-" << t << ":50 ";
        }
        cout << endl
             << endl;

        for (int w = 1; w < 6; w++)
        {

            if (w == 1)
                cout << setw(10) << "Monday";
            else if (w == 2)
                cout << setw(10) << "Tuesday";
            else if (w == 3)
                cout << setw(10) << "wednesday";
            else if (w == 4)
                cout << setw(10) << "Thursday";
            else if (w == 5)
                cout << setw(10) << "Friday";

            cout << "  ||";
            for (int p = 0; p < 8; p++)
            {

                cout << setw(11) << wee[w][p].lec << "(" << room[w][p] << ") ||";
            }
            cout << endl;
        }
    }
};

int teacher_tcreation()
{

    t_timetable t5, t6, t7, t8;
    int num;
    cout << "Select a User Number from <5,6,7,8> : ";
    cin >> num;
    int t_id;

    if (num == 5)
    {

        cout << "Enter your Teacher Id :";
        cin >> t_id;

        cout << endl
             << endl;

        t5.id = num;
        ;

        t5.create();
        ofstream tt("timetable5.bin", ios::binary);
        tt.write((char *)&t5, sizeof(t5));
        tt.close();
    }

    else if (num == 6)
    {

        cout << "Enter your Teacher Id :";
        cin >> t_id;

        cout << endl
             << endl;

        t6.id = num;

        t6.create();
        ofstream tt("timetable6.bin", ios::binary);
        tt.write((char *)&t6, sizeof(t6));
        tt.close();
    }

    else if (num == 7)
    {

        cout << "Enter your Teacher Id :";
        cin >> t_id;

        cout << endl
             << endl;

        t7.id = num;

        t7.create();
        ofstream tt("timetable7.bin", ios::binary);
        tt.write((char *)&t7, sizeof(t7));
        tt.close();
    }
    else if (num == 8)
    {

        cout << "Enter your Teacher Id :";
        cin >> t_id;
        cout << endl
             << endl;

        t8.id = num;

        t8.create();
        ofstream tt("timetable8.bin", ios::binary);
        tt.write((char *)&t8, sizeof(t8));
        tt.close();
    }
    else
        cout << "Incorrect Input ";
    return 9;
}

int teacher_watch()
{
    t_timetable t5, t6, t7, t8;
    int c_id;
    cout << "In order to view your Timetable, Enter your Selected Id: ";
    cin >> c_id;

    if (c_id == 5)
    {
        ifstream tt("timetable5.bin", ios::binary);
        tt.read((char *)&t5, sizeof(t5));

        t5.display();
        tt.close();
    }
    else if (c_id == 6)
    {
        ifstream tt("timetable6.bin", ios::binary);
        tt.read((char *)&t6, sizeof(t6));

        t6.display();
        tt.close();
    }
    else if (c_id == 7)
    {
        ifstream tt("timetable7.bin", ios::binary);
        tt.read((char *)&t7, sizeof(t7));

        t7.display();
        tt.close();
    }
    else if (c_id == 8)
    {
        ifstream tt("timetable8.bin", ios::binary);
        tt.read((char *)&t8, sizeof(t8));

        t8.display();
        tt.close();
    }
    else
    {
        cout << "|| file not found ||";
        return 0;
    }
}
struct week
{
    char lec[100];
};

class timetable
{
public:
    int room[6][8];
    int id;
    int sem;
    int year;
    int batch;
    week wee[6][8];

    void create()
    {

        cout << "Enter your timetable :" << endl
             << endl;

        for (int w = 1; w < 6; w++)
        {

            if (w == 1)
                cout << "---Monday---" << endl;
            else if (w == 2)
                cout << "---Tuesday---" << endl;
            else if (w == 3)
                cout << "---wednesday---" << endl;
            else if (w == 4)
                cout << "---Thrusday---" << endl;
            else if (w == 5)
                cout << "---Friday---" << endl;

            int t = 9;
            for (int p = 0; p < 8; p++)
            {

                cout << "timing    ||    lecture" << endl;
                cout << t << ":00-" << t << ":50  ->   ";
                cin >> wee[w][p].lec;
                cout << "Room no -->  ";
                cin >> room[w][p];
                t++;
            }
        }
    }

    void display()
    {

        int t = 9;
        cout << setw(10) << "WEEKS   ";
        for (int q = 0; q < 8; q++)
        {
            cout << "  ||   " << t << ":00-" << t << ":50 ";
        }
        cout << endl
             << endl;

        for (int w = 1; w < 6; w++)
        {

            if (w == 1)
                cout << setw(10) << "Monday";
            else if (w == 2)
                cout << setw(10) << "Tuesday";
            else if (w == 3)
                cout << setw(10) << "wednesday";
            else if (w == 4)
                cout << setw(10) << "Thrusday";
            else if (w == 5)
                cout << setw(10) << "Friday";

            cout << "  ||";
            for (int p = 0; p < 8; p++)
            {

                cout << setw(11) << wee[w][p].lec << "(" << room[w][p] << ") ||";
            }
            cout << endl;
        }
    }
};

int student_creation()
{

    timetable t1, t2, t3, t4;
    int num;
    cout << "Enter Given User Number : ";
    cin >> num;

    if (num == 1)
    {

        int yeart;
        int semt;
        int batcht;
        int idt;

        cout << "Enter Year: ";
        cin >> yeart;
        cout << "Enter Semester: ";
        cin >> semt;
        cout << "Enter batch : ";
        cin >> batcht;
        idt = ((yeart * 100) + (semt * 10) + (batcht));
        cout << "'Note : The given ID is collective id for batch'" << endl;
        cout << "Your collective ID is : " << 1;
        cout << endl
             << endl;

        t1.year = yeart;
        t1.id = idt;
        t1.sem = semt;
        t1.batch = batcht;

        t1.create();
        ofstream tt("timetable1.bin", ios::binary);
        tt.write((char *)&t1, sizeof(t1));
        tt.close();
    }

    else if (num == 2)
    {

        int yeart;
        int semt;
        int batcht;
        int idt;

        cout << "Enter Year: ";
        cin >> yeart;
        cout << "Enter Semester: ";
        cin >> semt;
        cout << "Enter batch : ";
        cin >> batcht;
        idt = ((yeart * 100) + (semt * 10) + (batcht));
        cout << "'Note : The given ID is collective id for batch'" << endl;
        cout << "Your collective ID is : " << 2;
        cout << endl
             << endl;

        t2.year = yeart;
        t2.id = idt;
        t2.sem = semt;
        t2.batch = batcht;

        t2.create();
        ofstream tt("timetable2.bin", ios::binary);
        tt.write((char *)&t2, sizeof(t2));
        tt.close();
    }

    else if (num == 3)
    {

        int yeart;
        int semt;
        int batcht;
        int idt;

        cout << "Enter Year: ";
        cin >> yeart;
        cout << "Enter Semester: ";
        cin >> semt;
        cout << "Enter Batch : ";
        cin >> batcht;
        idt = ((yeart * 100) + (semt * 10) + (batcht));
        cout << "'Note : The given ID is collective id for batch'" << endl;
        cout << "Your collective ID is : " << 3;
        cout << endl
             << endl;

        t3.year = yeart;
        t3.id = idt;
        t3.sem = semt;
        t3.batch = batcht;

        t3.create();
        ofstream tt("timetable3.bin", ios::binary);
        tt.write((char *)&t3, sizeof(t3));
        tt.close();
    }
    else if (num == 4)
    {

        int yeart;
        int semt;
        int batcht;
        int idt;

        cout << "Enter Year: ";
        cin >> yeart;
        cout << "Enter Semester: ";
        cin >> semt;
        cout << "Enter Batch : ";
        cin >> batcht;
        idt = ((yeart * 100) + (semt * 10) + (batcht));
        cout << "'Note : The given ID is collective id for batch'" << endl;
        cout << "Your collective ID is : " << 4;
        cout << endl
             << endl;

        t4.year = yeart;
        t4.id = idt;
        t4.sem = semt;
        t4.batch = batcht;

        t4.create();
        ofstream tt("timetable4.bin", ios::binary);
        tt.write((char *)&t4, sizeof(t4));
        tt.close();
    }
    else
        cout << "INCORRECT INPUT";
    return 9;
}

int student_watch()
{
    timetable t1, t2, t3, t4;
    int c_id;
    cout << "In order to view your timetable enter your collective ID of your batch: ";
    cin >> c_id;

    if (c_id == 1)
    {
        ifstream tt("timetable1.bin", ios::binary);
        tt.read((char *)&t1, sizeof(t1));

        t1.display();
        tt.close();
    }
    else if (c_id == 2)
    {
        ifstream tt("timetable2.bin", ios::binary);
        tt.read((char *)&t2, sizeof(t2));

        t2.display();
        tt.close();
    }
    else if (c_id == 3)
    {
        ifstream tt("timetable3.bin", ios::binary);
        tt.read((char *)&t3, sizeof(t3));

        t3.display();
        tt.close();
    }
    else if (c_id == 4)
    {
        ifstream tt("timetable4.bin", ios::binary);
        tt.read((char *)&t4, sizeof(t4));

        t4.display();
        tt.close();
    }
    else
    {
        cout << "|| file not found ||";
        return 0;
    }
}

class teacher
{
public:
    void v_query()
    {

        ifstream in;
        in.open("query.txt");
        string st;
        if (in.is_open())
        {
            while (in.eof())
            {
                in >> st;
                cout << st;
                getchar();
            }
            in.close();
        }
        else
            cout << "File not opened" << endl;
    }
};
class student
{
    string id;
    string password;
    int batch;

public:
    void view()
    {
        cout << "Enter your Batch Number";
        cin >> batch;
    }

    void c_query()
    {

        ofstream obj;
        string stu;
        obj.open("query.txt", ios::app);

        if (obj.is_open())
        {
            cout << "Enter Query";
            cout << endl;
            cin.ignore();
            getline(cin, stu);
            obj << stu;
        }
        else
        {
            cout << "file is not created";
        }
        obj << endl;
        obj.close();
        // k++;
    }
};

bool isValidLogin(string filename, string username, string password)
{
    ifstream file(filename);
    string line;
    while (getline(file, line))
    {
        // Split the line into username and password using ":" as a delimiter
        int pos = line.find(":");
        string storedUsername = line.substr(0, pos);
        string storedPassword = line.substr(pos + 1);

        // Check if the given username and password match the stored ones
        if (storedUsername == username && storedPassword == password)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string teacherUsername, teacherPassword, studentUsername, studentPassword, newTeacherUsername, newTeacherPassword,
        newStudentUsername, newStudentPassword;
    bool isNewUserLogin = false;
    cout << "\n\n\n\n\n";
    cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
    cout << "\n\t\t\t        =                 WELCOME                   =";
    cout << "\n\t\t\t        =                   TO                      =";
    cout << "\n\t\t\t        =                SCHEDULING                 =";
    cout << "\n\t\t\t        =                 PROGRAM                   =";
    cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
    cout << "\n\n"
         << "GROUP MEMBERS: " << endl;
    cout << "1. YASHVARDHAN KATIYAR - 9922103094" << endl;
    cout << "2. SHREYAS - 9922103102" << endl;
    cout << "3. ABHINAV MITTAL - 9922103103" << endl;
    cout << "4. SIDHI GROVER - 9922103095" << endl;
    cout << endl;
    while (9 > 0)
    {
        cout << "\n\n\t\t\t\tSelect an option:" << endl;
        cout << "\t\t\t\t1. Teacher login" << endl;
        cout << "\t\t\t\t2. Student login" << endl;
        cout << "\t\t\t\t3. New user login" << endl;
        cout << "\t\t\t\t4. Exit" << endl;
        int option, newLog;
        cout << "\t\t\t\tEnter option <1,2,3,4> : ";
        cin >> option;
        teacher t1, s1;
        student s;
        switch (option)
        {
        case 1:
            // Prompt the teacher to enter their username and password
            cout << "\t\t\t\tEnter teacher username: ";
            cin >> teacherUsername;
            cout << "\t\t\t\tEnter teacher password: ";
            cin >> teacherPassword;
            // Check if the teacher's username and password are valid
            if (isValidLogin("teacher.txt", teacherUsername, teacherPassword))
            {
                cout << "\t\t\t\tTeacher login successful!" << endl;
                cout << endl
                     << "1. Create Timetable " << endl
                     << "2. View Timetable " << endl
                     << "3. View Query " << endl;
                int sop;
                cout << "Enter your choice: ";
                cin >> sop;
                cout << endl;
                switch (sop)
                {

                case 1:
                    cout << "1. Create Teacher Timetable" << endl;
                    cout << "2. Create Student Timetable" << endl;
                    int op;
                    cout << "Enter your option: ";
                    cin >> op;
                    switch (op)
                    {
                    case 1:
                        teacher_tcreation();
                        break;
                    case 2:
                        student_creation();
                        break;
                    }
                    break;
                case 2:
                    teacher_watch();
                    break;
                case 3:
                    ifstream in;
                    in.open("query.txt");
                    if (in.is_open())
                    {
                        string s;
                        while (getline(in, s))
                            cout << s << endl;
                    }
                    break;
                }
            }
            else
            {
                cout << "\t\t\t\tInvalid teacher username or password." << endl;
                return 0;
            }

            break;

        case 2:
            // Prompt the student to enter their username and password
            cout << "\t\t\t\tEnter student username: ";
            cin >> studentUsername;
            cout << "\t\t\t\tEnter student password: ";
            cin >> studentPassword;

            // Check if the student's username and password are valid
            if (isValidLogin("student.txt", studentUsername, studentPassword))
            {
                cout << "\t\t\t\tStudent login successful!" << endl;
                cout << endl
                     << "1. View Timetable" << endl
                     << "2. Create Query " << endl;
                int sop;
                cout << "Enter your choice: ";
                cin >> sop;
                switch (sop)
                {
                case 1:
                    student_watch();
                    break;
                case 2:
                    s.c_query();
                    break;
                }
            }
            else
            {
                cout << "\t\t\t\tInvalid student username or password." << endl;
                return 0;
            }
            break;

        case 3:
            cout << "\n\t\t\t\t1. Teacher Signup" << endl;
            cout << "\t\t\t\t2. Student Signup" << endl;
            cout << "\t\t\t\tEnter option <1,2> : ";
            cin >> newLog;
            if (newLog == 1)
            {
                cout << "\t\t\t\tEnter new username: ";
                cin >> newTeacherUsername;
                cout << "\t\t\t\tEnter new password: ";
                cin >> newTeacherPassword;

                ofstream file("teacher.txt", ios::app);
                if (file.is_open())
                {
                    file << "\n"
                         << newTeacherUsername << ":" << newTeacherPassword << endl;
                    cout << "New user login created!" << endl;
                }
                else
                {
                    cout << "Error: Unable to create new user login." << endl;
                    return 0;
                }
            }
            else if (newLog == 2)
            {
                cout << "\t\t\t\tEnter new username: ";
                cin >> newStudentUsername;
                cout << "\t\t\t\tEnter new password: ";
                cin >> newStudentPassword;

                ofstream file("student.txt", ios::app);
                if (file.is_open())
                {
                    file << "\n"
                         << newStudentUsername << ":" << newStudentPassword << endl;
                    cout << "New user login created!" << endl;
                }
                else
                {
                    cout << "Error: Unable to create new user login." << endl;
                    return 0;
                }
            }
            break;
        case 4:
            exit(0);

        default:
            cout << "\t\t\t\tInvalid option." << endl;
            return 0;
        }
    }
}