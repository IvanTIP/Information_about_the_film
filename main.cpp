#include <iostream>
#include "nlohmann/json.hpp"
#include <fstream>

int main() {
    std::ofstream file("Film.json");
    nlohmann::json dict = "{ \"film\": \"Back to the future\", "
                          " \"country\": \"USA\","
                          " \"data\": \"1985\","
                          " \"studio\": \"Universal Pictures\","
                          " \"authors\": \"Robert Lee Zemeckis, Michael Robert Gale\", "
                          " \"director\": \"Robert Lee Zemeckis\","
                          " \"producers\": \"Michael Robert Gale, Neil Canton\", "
                          " \"actors\": { "
                          " \"Marty McFly\": \" Michael J. Fox\", "
                          " \"Emmett Brown\": \" Christopher Lloyd\", "
                          " \"Lorraine Baines\": \" Lea Thompson\", "
                          " \"George McFly\": \" Crispin Glover\", "
                          " \"Biff Tannen\": \" Thomas F. Wilson\", "
                          " \"Jennifer Parker\": \" Claudia Wells\"}}"_json;
    file << dict;
    file.close();
    return 0;
}
