#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t Date = time(NULL);
    struct tm *Date_Info = localtime(&Date);

    char Date_Last[50];
    strftime(Date_Last, sizeof(Date_Last), "%d.%m.%Y | %H:%M", Date_Info);
    cout << Date_Last << endl;

    return 0;
}
