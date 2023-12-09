#include <stdio.h>
#include <string.h>
struct words
{

	char word[51];

	int occ;

	int flag;
};

int main()
{

	struct words unq[1000];
	struct words kee;
	char p[5000];

	scanf("%[^\n]s", p);

	// printf("[%s]\n", p);

	int le = strlen(p);

	// printf("%d", le);
	p[le] = ' ';

	p[le + 1] = '\0';

	int i = 0;

	while (p[i] != '\0')

	{

		if (!((p[i] >= 'a' && p[i] <= 'z') || (p[i] >= 'A' && p[i] <= 'Z')))

		{

			p[i] = ' ';
		}

		i++;
	}

	i = 0;

	// printf("%s\n", p);

	while (p[i] != '\0')

	{

		if ((p[i] >= 'a' && p[i] <= 'z'))

		{

			p[i] = p[i] - 32;
		}

		i++;
	}

	// code works till here: 25/100 marks scored
	i = 0;

	int j = 0;

	int l = 0;

	while (p[i] != '\0')

	{

		if (p[i] != ' ')

		{

			unq[j].word[l] = p[i];

			l++;
		}

		else

		{

			unq[j].word[l] = '\0';

			if (p[i + 1] != ' ')

			{

				l = 0;

				j++;
			}
		}

		i++;
	}

	// words are being stored in the structure words
	//  char key[51];
	for (int i = 0; i < j; i++)
	{
		unq[i].occ = 0;
		for (int d = 0; d < j; d++)
		{
			if (!(strcmp(unq[i].word, unq[d].word)))
				unq[i].occ++;
		}
	}
	for (int i = 0; i < j; i++)
	{
		// key = unq[i].word;
		for (int d = i + 1; d < j; d++)
		{
			if (!(strcmp(unq[d].word, unq[i].word)))
			{
				unq[d].flag = 1;
			}
		}
	}
	struct words tos[j];
	int dd = 0;
	for (int i = 0; i < j; i++)
	{
		if (unq[i].flag == 0)
		{
			tos[dd] = unq[i];
			dd++;
		}
	}
	/*
	for(int i=0;i<dd;i++)
	{
		printf("%s, %d\n", tos[i].word, tos[i].occ);
	}*/
	// 55/100 marks stored
	int key;
	for (int i = 1; i < dd; i++)
	{
		key = tos[i].occ;
		int y = i - 1;
		kee = tos[i];
		while (key > tos[y].occ && y >= 0)
		{
			tos[y + 1] = tos[y];
			y--;
		}
		tos[y + 1] = kee;
	}
	for (int i = 0; i < dd; i++)
	{
		printf("%s, %d\n", tos[i].word, tos[i].occ);
	}
	// 75/100 scored!!
	char search[51];
	scanf("%s", search);
	i = 0;
	while (search[i] != '\0')
	{

		if ((search[i] >= 'a' && search[i] <= 'z'))

		{
			search[i] = search[i] - 32;
		}

		i++;
	}
	printf("%s\n", search);
	for (int i = 0; i < dd; i++)
	{
		if (!(strcmp(search, tos[i].word)))
		{
			printf("frequency of the word is: %d", tos[i].occ);
		}
	}
	return 0;
}
