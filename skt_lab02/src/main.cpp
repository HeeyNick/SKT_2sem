#include "inverse.h"

int main()
{
    inverse bla;
    bla.input("skt_lab02/area.txt", "skt_lab02/receivers.txt", "skt_lab02/config.txt");
    bla.calc();

    cout << "Hello World!" << endl;
#if defined _WIN32
    system("pause");
#endif
    return 0;
}

