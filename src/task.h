#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <fstream>

#include "boost/uuid/string_generator.hpp"
#include "boost/uuid/random_generator.hpp"
#include "boost/uuid/uuid_io.hpp"
#include "boost/lexical_cast.hpp"

using namespace std;
using namespace boost::uuids;

class Task
{
private:
    uuid id;
    string short_id;
    string title;
    string body;
    ofstream task_file;
    char* created_ts;
    // char* edited_ts;

public:
    Task(string _title);

    int set_title(string _title);
    string get_title();
    
    int set_body(string _body);
    string set_body();

    int get_str_id();
};

#endif