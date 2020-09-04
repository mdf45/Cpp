string CUTSTR(const string& str, int start, int length)
{
	// verification
	if (length > STRLEN(str)) length = STRLEN(str); 
	if (start < 0) start = 0; 
	else if (start > STRLEN(str) - length) start = STRLEN(str) - length;
	//
	char* cstr = new char[length]; cstr[length] = '\0';

	for (int i = 0; i < length; ++i) cstr[i] = str[start++];

	return cstr;
}