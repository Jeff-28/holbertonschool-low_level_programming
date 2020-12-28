/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 * Return: 0 if buffer too small to store result, else return pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = 0, l2 = 0, tmpl, rl = 0, i, sum = 0, num1 = 0, num2 = 0, carry = 0;
	char tmp[10000];

	while (n1[l1] != '\0')
		l1++;
	while (n2[l2] != '\0')
		l2++;
	if (l1 + 2 > size_r || l2 + 2 > size_r)
		return (0);
	for (i = 0, l1 = l1 - 1, l2 = l2 - 1; i <= l1 || i <= l2; i++, rl++)
	{
		num1 = num2 = 0;
		if (i <= l1)
			num1 = n1[l1 - i] - '0';
		if (i <= l2 && (l2 - i) >= 0)
			num2 = n2[l2 - i] - '0';
		sum = num1 + num2 + carry;
		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[i] = sum + '0';
	}
	if (carry > 0)
	{
		r[i] = carry + '0';
		r[i + 1] = '\0';
	}
	for (i = 0, tmpl = 0; i <= rl; i++, tmpl++)
		tmp[i] = r[rl - i];
	for (i = 0; i < tmpl; i++)
	{
		if (r[i] == '\0')
			break;
		r[i] = tmp[i];
	}
	return (r);
}
