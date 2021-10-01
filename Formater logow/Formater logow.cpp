#include <iostream>

class Format {
protected:
    char whitchOne;
public:
    virtual void print() = 0;
};

class Csv: public Format {
    
};

class Xml: public Format {

};

class Html: public Format {

};

class Procedure {
private:
    char choice = NULL;
public:
    char whitchFormat() {
        char choice = NULL;
        std::cin >> choice;
        return tolower(choice);
    }
    void startMessage() {
        std::cout <<
            "Wybierz format\n" <<
            "c - csv\n" <<
            "x - xml\n" <<
            "h - html\n" <<
            "0 - koniec programu\n";
    }

    void start() {
        do {
            startMessage();
            choice = whitchFormat();
            switch (choice) {
            case 'c':

                break;
            case 'x':

                break;
            case 'h':

                break;
            case '0':

                break;
            default:

            }
        } while (choice == '0');
    }
};

int main()
{
    return 0;
}


/*

1. Formater log�w
Napisa� program, kt�ry b�dzie dane podane na wej�ciu wy�wietla� w jednym z wybranych
format�w:
c � csv,
x � xml,
h � html
Przyk�ad:
Wej�cie:
c
a b c
d e f
Wyj�cie:
a, b, c
d, e, f
Przyk�ad:
Wej�cie:
x
a b c
d e f
Wyj�cie:
<?xml version="1.0" encoding="ISO-8859-1" ?>
<results>
<row>
<field>a</field>
<field>b</field>
<field>c</field>
</row>
<row>
<field>d</field>
<field>e</field>
<field>f</field>
</row>
</results>
Przyk�ad:
Wej�cie:
h
a b c
d e f
Wyj�cie:
<!DOCTYPE html>
<html>
<head>
<title>Results</title>
</head>
<body>
<table>
<tr>
<td>a</td>
<td>b</td>
<td>c</td>
</tr>
<tr>
<td>d</td>
<td>e</td>
<td>f</td>
</tr>
</table>
</body>
</html>

*/