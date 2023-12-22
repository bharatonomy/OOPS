## Inheritance

Inheriting/Copying properties of another class.

IRL example: Inheriting qualities like hair color, height from parents.

![](../assets/image/inheritance)

Here, Human is the parent/super class,\
and Male is the sub-class/child class.

```
class Human{
    // parent class
    // properties
};

class Male: public Human{
    // child class
};
```

### Modes of Inheritance

- **public:** If parent class is public. The members of parent class and sub-class are public in derived class.

- **protected:** If parent class is protected. The members of parent class and sub-class are protected in derived class.

- **private:** If parent class is private. The members of parent class and sub-class are inaccissible.

| **Base class members <br>access modifiers** |    **public**     |   **protected**   |    **private**    |     |
| :-----------------------------------------: | :---------------: | :---------------: | :---------------: | --- |
|                 **public**                  |      public       |     protected     |      private      |     |
|                **protected**                |     protected     |     protected     |      private      |     |
|                 **private**                 | Not<br>Accessible | Not<br>Accessible | Not<br>Accessible |     |

NOTE: private data member of any class cannot be accessed.

Also, protected is similar to private. The protected members can be accessed by the base class and its derived/sub-class.\
While private can only be accessed using base class.
