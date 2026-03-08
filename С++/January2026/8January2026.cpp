#include <iostream>
#include <vector>
#include <string>
using namespace std;

std::string string_revers(const std::string& d)
{
    int i;
    std::string res;
    for (int i = d.size() - 1; i > -1; i--);
    {
        res.push_back(d[i]);
    }
    return res;
}
int found(const std::string& s, char sim)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int count = 0;
        if (s[i] == sim)
        {
            count = count + 1;
        }
    }
    return count;
}
void print_string(int namb_do, const std::string s)
{
    for (int q = 0; q < namb_do; q++)
    {
        std::cout << s << "\n" ;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    std::string s;
    int namb_do;
    std::cout << "������� ���-�� ��������������� ";
    std::cin >> namb_do;
    std::cout << "������� ������� ";
    std::cin >> s;
    print_string(namb_do, s);
    char sim = 'a';
    std::cout << "Input char: ";
    std::cin >> sim;
    int answer = found(s, sim);
    std::cout << answer << std::endl;
    return 0;
}


//#include <iostream>
//#include <string>
//void printStringMultipleTimes() {
//    int n;
//    setlocale(LC_ALL, "Russian");
//    std::string str;
//    std::cout << "������� �����: ";
//    std::cin >> n;
//    std::cout << "������� ������: ";
//    std::cin.ignore();
//    std::getline(std::cin, str);
//
//    for (int i = 0; i < n; i++) {
//        std::cout << str << std::endl;
//    }
//}
