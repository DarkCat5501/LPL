#include <locale.h>
void program();
int main(int argc, char** argv){
	setlocale(LC_ALL, "");
	program();
	return 0;
}

#include "main.lpl"
