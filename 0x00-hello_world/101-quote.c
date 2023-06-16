#include <unistd.h>

/**main - Entry point
 *
 * Return: Always 1 (Error)
 *
 */

void displayMessage(const char* message)
{
	const unsigned int size = 59;
	write(1, message, size);
}
int main()
{
	const char* myMessage = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	displayMessage(myMessage);
	return (1);
}
