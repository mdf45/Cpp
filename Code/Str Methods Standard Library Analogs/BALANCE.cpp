bool BALANCE(const string& str)
{
	const int SIZE = STRLEN(str);

	int left(0),
		right(0);

	for (int i = 0; i < SIZE; ++i)
	{
		if (str[i] == '\(') ++left;
		else if (str[i] == '\)') ++right;
	}

	return left == right;
}