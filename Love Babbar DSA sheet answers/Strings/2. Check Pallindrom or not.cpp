int isPlaindrome(char S[])
{
	for(int i = 0; i < strlen(S)/2; i++)
		if(S[i] != S[strlen(S) - i - 1])
			return 0;
	return 1;
}
