#include <iostream>

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