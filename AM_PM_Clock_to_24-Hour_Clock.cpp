#include <iostream>
#include <string>

using namespace std;

//This program will do time conversation from AM-PM to 24-Hour format(00:00:00 to 23:59:59)

//Example what this program will do
//12:00:01AM == 00:00:01
//12:05:12PM == 12:05:12
//07:15:36PM == 19:15:36

string convert_am_pm_to_24_hour_clock(string s)
{
    //AM timing case
    if (s[8] == 'A')
    {
        // then no need to add +12 in hour
        //but if hour = 12 and it's AM then we have to substract 12 from hour field
        if (s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
        }
    }
    //PM timing case
    else
    {
        //if hour field is 12 then no need to add
        if (s[0] == '1' && s[1] == '2')
        {
        }
        //but if hour is not 12 then we have to add 12 in hour field
        else
        {
            int hour = stoi(s.substr(0, 2));
            hour += 12;
            s[1] = '0' + (hour % 10);
            hour /= 10;
            s[0] = '0' + (hour % 10);
        }
    }
    //return only first 8 char because now we have no required of AM or PM at end of time
    return s.substr(0, 8);
}

int main()
{
    string s = "12:00:01AM";
    cout << convert_am_pm_to_24_hour_clock(s) << "\n";
}