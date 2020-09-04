void INVERT(string& str)
{
	string temp = str;
	const int SIZE = STRLEN(str);

	for (int i = 0; i < SIZE; ++i) temp[i] = str[(SIZE - 1) - i];

	str = temp;
}