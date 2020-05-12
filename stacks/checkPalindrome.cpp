bool ifPalindrom(string s) {
		
	// string is of the type = "aabababaabaaabbbbababXababaaabbabababaababba"

	stack<char> toCheck;
	int i = 0;
	while(s[i] != 'X') {
		toCheck.push(s[i]);
		++i;
	}

	++i;
	while(s[i] != '\0') {
		if(tocheck.empty() == true or s[i] != toCheck.top()) {
			return false;
		}
	}

	return (toCheck.empty() == true);
}
