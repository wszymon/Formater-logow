#include <iostream>
#include <vector>
#include <string>

class Format {
protected:
public:
    virtual void print(std::vector<std::string>) = 0;
};

class Csv: public Format {
public:
    void print(std::vector<std::string> arr) {
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr[i].length(); j++) {
                if(!isspace(arr[i][j]))
                std::cout << arr[i][j] << ", ";
            }
            std::cout << "\n";
        }
    }
};

class Xml: public Format {
public:
    void print(std::vector<std::string> arr) {
        std::cout << "<?xml version=\"1.0\" encoding=\"ISO - 8859 - 1\" ?> \n   <results>\n ";
        for (int i = 1; i < arr.size(); i++) {
            std::cout << "      <row>\n";
            for (int j = 0; j < arr[i].length(); j++) {
                if(!isspace(arr[i][j]))
                std::cout << "         <field>" << arr[i][j] << "</field>\n";
            }
            std::cout << "      </row>\n";
        }
        std::cout << "   </results>\n";
    }
};

class Html: public Format {
public:
    void print(std::vector<std::string> arr) {
        std::cout << "\n<!DOCTYPE html>\n<html>\n<head>\n   <title>Results</title>\n</head>\n<body>\n<table>\n";
        for (int i = 1; i < arr.size(); i++) {
            std::cout << "   <tr>\n";
            for (int j = 0; j < arr[i].length(); j++) {
                if (!isspace(arr[i][j]))
                    std::cout << "      <td>" << arr[i][j] << "</td>\n";
            }
            std::cout << "   </tr>\n";
        }
        std::cout << "</table>\n</body>\n</html>\n";
    }
};

class Procedure {
private:
    Format* poliPointer{};
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
    void setPoliPointer(Format *pointer, std::vector<std::string> arr) {
        pointer->print(arr);
        std::cout << "\n";
    }
    std::vector<std::string> input() {
        std::vector<std::string> linesArray;
        std::string textLine{};
        while (std::getline(std::cin, textLine)) { //input for change
            if (textLine == "q") break;
            linesArray.push_back(textLine);
        }
        return linesArray;
    }
    void start() {
        do {
            startMessage();
            choice = whitchFormat();
            switch (choice) {
            case 'c':{
                Csv c;
                poliPointer = &c;
                setPoliPointer(poliPointer, input());
                break;
            }
            case 'x': {
                Xml x;
                poliPointer = &x;
                setPoliPointer(poliPointer, input());
                break;
            }
            case 'h': {
                Html h;
                poliPointer = &h;
                setPoliPointer(poliPointer, input());
                break;
            }
            case '0':
                std::cout << "Koniec programu.\n";
                break;
            default:
                std::cout << "Zly wybor!\n\n";
            }
        } while (choice != '0');
    }
};

int main()
{
    Procedure p;
    p.start();
    return 0;
}


/*

1. Formater log?w
Napisa? program, kt?ry b?dzie dane podane na wej?ciu wy?wietla? w jednym z wybranych
format?w:
c ? csv,
x ? xml,
h ? html
Przyk?ad:
Wej?cie:
c
a b c
d e f
Wyj?cie:
a, b, c
d, e, f
Przyk?ad:
Wej?cie:
x
a b c
d e f
Wyj?cie:
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
Przyk?ad:
Wej?cie:
h
a b c
d e f
Wyj?cie:
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