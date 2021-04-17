#include <iostream>

#include "task.h"

using namespace std;

struct Meta
{
    int num_of_tasks;
};

int main()
{
    // Meta meta;
    // string body = "We need to onboard the new people.";
    Task t("Welcome new users", "");
    cout << t.get_title() << endl;
    return 0;
}
 