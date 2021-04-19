/** TODO
 * [x] Add a get_title() method.
 * [x] Add a set_title() method.
 * [x] Add a set_body() method.
 * [ ] Add a get_body() method.
 * [ ] Add a file for eachtask.
   * [ ] If there is a task file, pull in the body of that task file first.
 * [ ] Add a print tasks function.
 */

#include <iostream>
#include <ctime>
#include <fstream>

#include "boost/uuid/string_generator.hpp"
#include "boost/uuid/random_generator.hpp"
#include "boost/uuid/uuid_io.hpp"
#include "boost/lexical_cast.hpp"

#include "task.h"

using namespace std;
using namespace boost::uuids;

Task::Task(string _title)
{
    time_t now = time(0);
    title = _title;
    created_ts = ctime(&now);
    ifstream task_file("./data/tasks/" + title + ".txt");

    if (task_file.is_open()) 
    {
        string line;
        while (getline(task_file, line))
        {
            body += (line + "\n");
        }
        task_file.close();
        cout << "Body: " << body << endl;
    }
    else 
    {
        ofstream task_file("./data/tasks/" + title + ".txt");

        if (task_file.is_open())
        {
            task_file << body << "\n";
            task_file.close();
        }
        else cout << "Unable to open file...\n";
    }
}

int Task::set_title(string _title)
{
    title = _title;
    return 0;
}

string Task::get_title()
{
    return title;
}

int Task::set_body(string _body)
{
    body = _body;
    return 0;
}

int Task::get_str_id()
{
    short_id = boost::lexical_cast<string>(id);
    return 0;
}