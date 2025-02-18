#pragma once
#include <string>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

class MessageModels {
public:
    string Context;
    string Id;

    MessageModels() = default;
    MessageModels(string Context, string Id) : Context(move(Context)), Id(move(Id)) {}

    //logic of conversion to json
    friend void to_json(json& J, const MessageModels& msg) {
        J = json{ {"Context", msg.Context}, {"Id", msg.Id} };
    }

    friend void from_json(const json& j, MessageModels& msg) {
        if (j.contains("Context")) {
            j.at("Context").get_to(msg.Context);
        }
        if (j.contains("Id")) {
            j.at("Id").get_to(msg.Id);
        }
    }
};