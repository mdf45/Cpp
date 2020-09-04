string CONCAT(const string& str1, const string& str2, int pos) {
	const int SIZE = STRLEN(str1) + STRLEN(str2);

	// verification
	if (pos > STRLEN(str1)) pos = STRLEN(str1);
	else if (pos < 0) pos = 0;
	//

	char* str = new char[SIZE];

	str[SIZE] = '\0';

	for (int i = 0, j = 0, k = 0; i < SIZE; ++i)
	{
		if (i >= pos && i <= pos + STRLEN(str2) - 1) *(str + i) = str2[j++];
		else *(str + i) = str1[k++];
	}

	return str;
}