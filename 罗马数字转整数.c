int romanToInt(char * s) {
	int y = 0;
	while (*s)	//非0都为真
	{
		
		switch (*s)
		{
		case 'I':
			if (*(s + 1) == 'V') { y += 4; s += 2; break; }
			else if (*(s + 1) == 'X') { y += 9; s += 2; break; }
			y += 1; s++; break;
		case 'V':y += 5; s++; break;
		case 'X':
			if (*(s + 1) == 'L') { y += 40; s += 2; break; }
			if (*(s + 1) == 'C') { y += 90; s += 2; break; }
			y += 10; s++; break;
		case 'L':y += 50; s++; break;
		case 'C':
			if (*(s + 1) == 'D') { y += 400; s += 2; break; }
			if (*(s + 1) == 'M') { y += 900; s += 2; break; }
			y += 100; s++; break;
		case 'D':y += 500; s++; break;
		case 'M':y += 1000; s++; break;
		}
	}
	return y;
}
