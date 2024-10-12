#include <iostream>
#include "Usuario.h"
#include "Cliente.h"


using namespace std;

int main()
{
    Cliente c("lucas","coronado","LuasC", "1234");

    cout<<c.getNombre();


	return 0;
}
