int SUBSTRING(const string& str, const string& substr)
{
	string temp;

	const int SIZE = STRLEN(str);
	int indx(0);

	for (int i = 0; i < SIZE; ++i)
	{
		if (str[i] == substr[0])
		{
			for (int j = 0; j < STRLEN(substr); ++j)
			{
				if (str[i + j] != substr[j]) break;
				if (j == STRLEN(substr) - 1) return i;
			}
		}
	}

	return -1;
}