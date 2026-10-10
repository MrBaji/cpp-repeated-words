// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string pre = "";
//     string current;
//     int counter = 0;
//     while (cin >> current)
//     {
//         if(current == pre)
//         {
//             cout << "repeated word: " << current << '\n';
//             counter += 1;
//         }
//         pre = current;
//     }
//     cout << "repeated times : " << counter;
    
// }


#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string previous = "";
    string current;
    int counter = 0;

    map<string, int> repeated;

    while (cin >> current)
    {
        if (current == previous)
        {
            cout << "repeated word: " << current << '\n';

            repeated[current]++;
            counter++;
        }

        previous = current;
    }

    cout << "repeated times: " << counter << '\n';

    cout << "Word counts:" << '\n';

    for (auto item : repeated)
    {
        cout << item.first << " : "
             << item.second << '\n';
    }

    return 0;
}
