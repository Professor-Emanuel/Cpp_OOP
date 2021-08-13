#All is done using Code::Blocks 20

# Cpp_OOP
Independent Programs showcasing OOP Principles!

https://www.tutorialspoint.com/cplusplus/index.htm

https://www.learncpp.com/

https://www.learncpp.com/cpp-tutorial/

https://www.learncpp.com/cpp-tutorial/the-copy-constructor/


#OOP Introduction

The main purpose of C++ programming is to add object orientation to the C programming language and classes are the central feature of C++ that supports object-oriented programming and are often called user-defined types.


A class is used to specify the form of an object and it combines data representation and methods for manipulating that data into one neat package. The data and functions within a class are called members of the class.


C++ Class Definitions
When you define a class, you define a blueprint for a data type. This doesn't actually define any data, but it does define what the class name means, that is, what an object of the class will consist of and what operations can be performed on such an object.


A class definition starts with the keyword class followed by the class name; and the class body, enclosed by a pair of curly braces. A class definition must be followed either by a semicolon or a list of declarations.



#OOP Class Member Functions


A member function of a class is a function that has its definition or its prototype within the class definition like any other variable. It operates on any object of the class of which it is a member, and has access to all the members of a class for that object.


Member functions can be defined within the class definition or separately using scope resolution operator, ::
Defining a member function within the class definition declares the function inline, even if you do not use the inline specifier.



#OOP Class Access Modifiers


Data hiding is one of the important features of Object Oriented Programming which allows preventing the functions of a program to access directly the internal representation of a class type. The access restriction to the class members is specified by the labeled public, private, and protected sections within the class body. The keywords public, private, and protected are called access specifiers.


A class can have multiple public, protected, or private labeled sections. Each section remains in effect until either another section label or the closing right brace of the class body is seen. The default access for members and classes is private.

A public member is accessible from anywhere outside the class but within a program. You can set and get the value of public variables without any member function.

A private member variable or function cannot be accessed, or even viewed from outside the class. Only the class and friend functions can access private members. By default all the members of a class would be private.

A protected member variable or function is very similar to a private member but it provided one additional benefit that they can be accessed in child classes which are called derived classes.



#OOP Class Constructor and Destructor


A class constructor is a special member function of a class that is executed whenever we create new objects of that class.


A constructor will have exact same name as the class and it does not have any return type at all, not even void. Constructors can be very useful for setting initial values for certain member variables.


A default constructor does not have any parameter, but if you need, a constructor can have parameters.


A destructor is a special member function of a class that is executed whenever an object of it's class goes out of scope or whenever the delete expression is applied to a pointer to the object of that class.


A destructor will have exact same name as the class prefixed with a tilde (~) and it can neither return a value nor can it take any parameters. Destructor can be very useful for releasing resources before coming out of the program like closing files, releasing memories etc.



#OOP Copy Constructor


The copy constructor is a constructor which creates an object by initializing it with an object of the same class, which has been created previously. The copy constructor is used to −


          Initialize one object from another of the same type.
          Copy an object to pass it as an argument to a function.
          Copy an object to return it from a function.


If a copy constructor is not defined in a class, the compiler itself defines one.If the class has pointer variables and has some dynamic memory allocations, then it is a must to have a copy constructor.



#OOP Friend Functions


A friend function of a class is defined outside that class' scope but it has the right to access all private and protected members of the class. Even though the prototypes for friend functions appear in the class definition, friends are not member functions.


A friend can be a function, function template, or member function, or a class or class template, in which case the entire class and all of its members are friends.



#OOP Inline Functions


C++ inline function is powerful concept that is commonly used with classes. If a function is inline, the compiler places a copy of the code of that function at each point where the function is called at compile time.


Any change to an inline function could require all clients of the function to be recompiled because compiler would need to replace all the code once again otherwise it will continue with old functionality.


To inline a function, place the keyword inline before the function name and define the function before any calls are made to the function. The compiler can ignore the inline qualifier in case defined function is more than a line.


A function definition in a class definition is an inline function definition, even without the use of the inline specifier.



#OOP THIS pointer


Every object in C++ has access to its own address through an important pointer called this pointer. The this pointer is an implicit parameter to all member functions. Therefore, inside a member function, this may be used to refer to the invoking object.


Friend functions do not have a this pointer, because friends are not members of a class. Only member functions have a this pointer.



#OOP POINTER to Classes


A pointer to a C++ class is done exactly the same way as a pointer to a structure and to access members of a pointer to a class you use the member access operator -> operator, just as you do with pointers to structures. Also as with all pointers, you must initialize the pointer before using it.



#OOP STATIC Members of a Classes & Static Function Members


We can define class members static using static keyword. When we declare a member of a class as static it means no matter how many objects of the class are created, there is only one copy of the static member.


A static member is shared by all objects of the class. All static data is initialized to zero when the first object is created, if no other initialization is present. We can't put it in the class definition but it can be initialized outside the class.


By declaring a function member as static, you make it independent of any particular object of the class. A static member function can be called even if no objects of the class exist and the static functions are accessed using only the class name and the scope resolution operator ::.


A static member function can only access static data member, other static member functions and any other functions from outside the class.


Static member functions have a class scope and they do not have access to the this pointer of the class. You could use a static member function to determine whether some objects of the class have been created or not.



#OOP Inheritance


One of the most important concepts in object-oriented programming is that of inheritance. Inheritance allows us to define a class in terms of another class, which makes it easier to create and maintain an application. This also provides an opportunity to reuse the code functionality and fast implementation time.


When creating a class, instead of writing completely new data members and member functions, the programmer can designate that the new class should inherit the members of an existing class. This existing class is called the base class, and the new class is referred to as the derived class.


The idea of inheritance implements the is a relationship. For example, mammal IS-A animal, dog IS-A mammal hence dog IS-A animal as well and so on.


Base and Derived Classes


A class can be derived from more than one classes, which means it can inherit data and functions from multiple base classes. To define a derived class, we use a class derivation list to specify the base class(es). A class derivation list names one or more base classes and has the form −


          class derived-class: access-specifier base-class
          
          
Where access-specifier is one of public, protected, or private, and base-class is the name of a previously defined class. If the access-specifier is not used, then it is private by default.


Access Control and Inheritance


A derived class can access all the non-private members of its base class. Thus base-class members that should not be accessible to the member functions of derived classes should be declared private in the base class.


We can summarize the different access types according to - who can access them in the following way −


Access	public	protected	private


Same class	yes	yes	yes


Derived classes	yes	yes	no


Outside classes	yes	no	no


A derived class inherits all base class methods with the following exceptions −


          Constructors, destructors and copy constructors of the base class.


          Overloaded operators of the base class.


          The friend functions of the base class.
          
          
Type of Inheritance


When deriving a class from a base class, the base class may be inherited through public, protected or private inheritance. The type of inheritance is specified by the access-specifier as explained above.


We hardly use protected or private inheritance, but public inheritance is commonly used. While using different type of inheritance, following rules are applied −


Public Inheritance − When deriving a class from a public base class, public members of the base class become public members of the derived class and protected members of the base class become protected members of the derived class. A base class's private members are never accessible directly from a derived class, but can be accessed through calls to the public and protected members of the base class.


Protected Inheritance − When deriving from a protected base class, public and protected members of the base class become protected members of the derived class.


Private Inheritance − When deriving from a private base class, public and protected members of the base class become private members of the derived class.


Multiple Inheritance
A C++ class can inherit members from more than one class and here is the extended syntax −


          class derived-class: access baseA, access baseB....
          
          
Where access is one of public, protected, or private and would be given for every base class and they will be separated by comma as shown above.



#OOP Overloading (Operators and Functions)


C++ allows you to specify more than one definition for a function name or an operator in the same scope, which is called function overloading and operator overloading respectively.


An overloaded declaration is a declaration that is declared with the same name as a previously declared declaration in the same scope, except that both declarations have different arguments and obviously different definition (implementation).


When you call an overloaded function or operator, the compiler determines the most appropriate definition to use, by comparing the argument types you have used to call the function or operator with the parameter types specified in the definitions. The process of selecting the most appropriate overloaded function or operator is called overload resolution.


Function Overloading in C++


You can have multiple definitions for the same function name in the same scope. The definition of the function must differ from each other by the types and/or the number of arguments in the argument list. You cannot overload function declarations that differ only by return type.


Operators Overloading in C++


You can redefine or overload most of the built-in operators available in C++. Thus, a programmer can use operators with user-defined types as well.


Overloaded operators are functions with special names: the keyword "operator" followed by the symbol for the operator being defined. Like any other function, an overloaded operator has a return type and a parameter list.


Box operator+(const Box&);   -> declares the addition operator that can be used to add two Box objects and returns final Box object. Most overloaded operators may be defined as ordinary non-member functions or as class member functions. In case we define above function as non-member function of a class then we would have to pass two arguments for each operand as follows −>    Box operator+(const Box&, const Box&);


Declaring it as a member function, gives access to "this" pointer.


Overloadable/Non-overloadableOperators


Following is the list of operators which can be overloaded −


          +	-	*	/	%	^
          &	|	~	!	,	=
          <	>	<=	>=	++	--
          <<	>>	==	!=	&&	||
          +=	-=	/=	%=	^=	&=
          |=	*=	<<=	>>=	[]	()
          ->	->*	new	new []	delete	delete []


Following is the list of operators, which can not be overloaded −


          ::	.*	.	?:


More on const:  https://docs.microsoft.com/en-us/cpp/cpp/const-cpp?view=msvc-160

More on const:  https://www.cprogramming.com/tutorial/const_correctness.html


More on assignment operator:  https://www.geeksforgeeks.org/assignment-operator-overloading-in-c/


The function call operator () can be overloaded for objects of class type. When you overload ( ), you are not creating a new way to call a function. Rather, you are creating an operator function that can be passed an arbitrary number of parameters.


The subscript operator [] is normally used to access array elements. This operator can be overloaded to enhance the existing functionality of C++ arrays.


The class member access operator (->) can be overloaded but it is a bit trickier. It is defined to give a class type a "pointer-like" behavior. The operator -> must be a member function. If used, its return type must be a pointer or an object of a class to which you can apply.


The operator-> is used often in conjunction with the pointer-dereference operator * to implement "smart pointers." These pointers are objects that behave like normal pointers except they perform other tasks when you access an object through them, such as automatic object deletion either when the pointer is destroyed, or the pointer is used to point to another object.


The dereferencing operator-> can be defined as a unary postfix operator. That is, given a class −


          class Ptr {
             //...
             X * operator->();
          };


Objects of class Ptr can be used to access members of class X in a very similar manner to the way pointers are used. For example −

          void f(Ptr p ) {
             p->m = 10 ; // (p.operator->())->m = 10
          }


The statement p->m is interpreted as (p.operator->())->m. 













