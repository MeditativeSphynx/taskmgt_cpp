#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <fstream>
using namespace std;

class Task
{
private:
    int number;
    string title;
    string body;
    ofstream task_file;
    char* created_ts;
    bool is_edited;
    // char* edited_ts;

public:
    Task(string _title, string _body);

    int set_title(string _title);
    string get_title();
    
    int set_body(string _body);
    string set_body();
};

#endif