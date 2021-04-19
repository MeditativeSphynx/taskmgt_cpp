#include <iostream>
#include <string>

#include "task.h"

#include "boost/uuid/string_generator.hpp"
#include "boost/uuid/random_generator.hpp"
#include "boost/uuid/uuid_io.hpp"
#include "boost/lexical_cast.hpp"

using namespace std;
using namespace boost::uuids;

struct Meta
{
    int num_of_tasks;
};

int main()
{
    random_generator gen;
    uuid id = gen();
    string id_str = boost::lexical_cast<string>(id);
    cout << id_str.substr(0,8) << endl;
    return 0;
}
 