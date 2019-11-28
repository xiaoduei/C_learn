void reverse_string(char * string)
{
	int len = strlen(string), tmp = 0;
	if (len < 1);
	else {
		tmp = string[0];
		string[0] = string[len - 1];
		string[len - 1] = '\0';
		reverse_string(string + 1);
		string[len - 1] = tmp;
	}
}
