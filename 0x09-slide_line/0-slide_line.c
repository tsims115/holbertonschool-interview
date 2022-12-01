#include <stdlib.h>
#include <stdio.h>
#include "slide_line.h"
/**
 * @brief slide_line - slides and merges array of integers
 *
 * @line: line to slide
 * @size: size of the array
 * @direction: direction of slide
 * Return: 1 if success and 0 upon failure 
 */
int slide_line(int *line, size_t size, int direction)
{
	int i, j, tmp;
	int cc = -1;
	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
		return (0);
	if (!line)
		return (0);
	if (direction == SLIDE_RIGHT)
		rvs(line, size);
	for (i = 0; i < (int)size; i++)
	{
		if (line[i] != 0 && i > 0)
		{
			for (j = i - 1; j >= 0; j--)
			{
				if (line[j] > 0 && line[j] != line[i])
					break;
				if (line[j] > 0)
				{
					if (line[j] == line[i] && j > cc)
					{
						line[j] += line[i];
						line[j + 1] = 0;
						line[i] = 0;
						cc = j;
					}
					else
					{
						line[j + 1] = line[i];
						line[i] = 0;
					}
					break;
				}
			}
		}
	}
	if (direction == SLIDE_RIGHT)
		rvs(line, size);
	return (1);
}
