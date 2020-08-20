int strlength(const char* str) {
	int length = 0;

	while (*(str + length) != '\0')
		length++;

	return length;
}