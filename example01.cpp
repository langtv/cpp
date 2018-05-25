// declaring functions prototypes
#include <iostream>
using namespace std;

void odd (int x);
void even (int x);
void show();

int main()
{
  int i;
  do {
    cout << "Please, enter number (0 to exit): ";
    cin >> i;
    odd (i);
  } while (i!=0);
	show();
  return 0;
}

void odd (int x)
{
  if ((x%2)!=0) cout << "It is odd.\n";
  else even (x);
}

void even (int x)
{
  if ((x%2)==0) cout << "It is even.\n";
  else odd (x);
}

void show()
{
	cout << "The End\n";
}
