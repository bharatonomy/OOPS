# What is Object Oriented Programming?

- Object is an entity which have properties/state and behaviours.
- makes the approach more real world and improves readibility.

  Example:
  ![](/assets/image/objEx)

  A class is nothing but a user defined data type.

  An object is instance of class.

### Empty Class

Just to assign it in memory

```
class LMAO{
    // nothing here. The class is empty
    };
```

1 byte is allocated to object.

### Class as a Header File

Create a file Hero.h

```
class Hero
{
    int health;
public:
    char level;
};
```

Now this can be used in Base.cpp as an header file.

```
#include <iostream>
#include "Hero.h"      // Here it is.
using namespace std;
int main()
{
    Hero h1;
    h1.level = 's';
    cout << h1.level << endl;
    return 0;
}
```

.h as well as .cpp files both can be used in such a manner.

**NOTE:** If a value is called before assigning it a value. It will return garbage value.

### Copy Constructor

Copying the properties of one constructor to another.

Pass the reference to Constructor as it is more efficient.

A Shallow copy is just a reference to the original class. Both the classes have same address.

While a Deep copy makes a new duplicate class. The address of this class is different from that of original class.

### Copy Assignment Operator

Just simply assign the values like

```c++
a.health = b.health
```

### Static Data Member

A static data member can be used without creating an instance of the parent object.
It belongs to the class and not to the object. Thats why it is recommended to access it differently.

The situation is same for Static Data Functions. They dont have this keyword.

Static functions can only access static variables directly.
