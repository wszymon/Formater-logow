#include <iostream>

int main()
{
    return 0;
}


/*
1. Formater logów
Napisaæ program, który bêdzie dane podane na wejœciu wyœwietla³ w jednym z wybranych
formatów:
c – csv,
x – xml,
h – html
Przyk³ad:
Wejœcie:
c
a b c
d e f
Wyjœcie:
a, b, c
d, e, f
Przyk³ad:
Wejœcie:
x
a b c
d e f
Wyjœcie:
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
Przyk³ad:
Wejœcie:
h
a b c
d e f
Wyjœcie:
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