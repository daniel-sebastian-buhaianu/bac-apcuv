#include <iostream>
#include <cstring>
#define LGMAX 401
using namespace std;
bool vocala(char);
int main()
{
    char t[LGMAX], cuv[LGMAX], *c;
    int lg, i, nr;
    bool exista;
    cout << "t = "; cin.getline(t, LGMAX);
    c = strtok(t, " "), exista = 0;
    while (c)
    {
        for (lg = strlen(c), i = 0; i < lg-1 && !exista; i++)
        {
            if (vocala(c[i]) && vocala(c[i+1]))
                exista = 1;
        }
        if (exista) break;
        else c = strtok(NULL, " ");
    }
    if (!exista)
        cout << "nu exista";
    else
    {
        strcpy(cuv, c);
        nr = 1;
        c = strtok(NULL, " ");
        while (c)
        {
            if (strcmp(c, cuv) == 0) nr++;
            c = strtok(NULL, " ");
        }
        cout << cuv << ' ' << nr;
    }
    return 0;
}
bool vocala(char c)
{
    return strchr("aeiouAEIOU", c);
}
