#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
  * main - entry point
  * @argc: count of characters
  * @argv: array of argc
  *
  * Return: int value
  */
int main(int argc, char *argv[])
{
	ud_t ud_obj;
	int pal = 0, k = 0;

	if (argc == 2)
	{
		pal = atoi(argv[1]);

		if (pal < 0)
		{
			printf("Error\n");
			exit(2);
		}

		ud_unit(&ud_obj);
		ud_set_input_buffer(&ud_obj, argv[1], pal);
		ud_set_mode(&ud_obj, 64);
		ud_set_syntax(&ud_obj, UD_SYN_INTEL);

		while (ud_disassemble(&ud_obj))
		{
			printf("\t%s\n", ud_insn_hex(&ud_obj));
		}
	}

	return (0);
}

