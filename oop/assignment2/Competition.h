#ifndef COMPETITION_H
#define COMPETITION_H

#include <fstream>
#include <sstream>
#include <string>

struct Repair
{
    std::string name;
    int cost;
};

class CompetitionEnor
{
    private:
        std::ifstream _f;
        Competition _cur;
        bool _end;
    public:
        CompetitionEnor(const std::string &str);
        void first() {next();}
        void next();
        Competition current() const { return _cur;}
        bool end() const { return _end;}

};

#endif // COMPETITION_H
