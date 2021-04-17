/** TODO
 * [x] Add a get_title() method.
 * [ ] Add a set_title() method.
 * [ ] Add a set_body() method.
 * [ ] Add a get_body() method.
 * [ ] Add a file for eachtask.
 * [ ] Add a print tasks function.
 */

#include <iostream>
#include <ctime>
#include <fstream>

#include "task.h"

using namespace std;

Task::Task(string _title, string _body)
{
    time_t now = time(0);
    title = _title;
    body = _body;
    created_ts = ctime(&now);
    is_edited = false;
    ifstream task_file("./data/tasks/" + title + ".txt");

    if (task_file.is_open()) 
    {
        string line;
        while (getline(task_file, line))
        {
            body += line;
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