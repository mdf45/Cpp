int STRLEN(const string& str)
{
	int lenght = 0;

	while (str[lenght] != '\0') ++lenght;

	return lenght;
}