#ifndef SLIDE_LINE_H
#define SLIDE_LINE_H

int slide_line(int *line, size_t size, int direction);

void rvs(int *line, size_t size)
{
	int i, j, tmp;
	j = (int)size - 1;
	for (i = 0; i < (int)size / 2; i++)
	{
		tmp = line[i];
		line[i] = line[j];
		line[j] = tmp;
		j--;
	}
}

#define SLIDE_LEFT 1
#define SLIDE_RIGHT 0

#endif
