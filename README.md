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



#OOP Polymorphism


The word polymorphism means having many forms. Typically, polymorphism occurs when there is a hierarchy of classes and they are related by inheritance.


C++ polymorphism means that a call to a member function will cause a different function to be executed depending on the type of object that invokes the function.


Virtual Function


A virtual function is a function in a base class that is declared using the keyword virtual. Defining in a base class a virtual function, with another version in a derived class, signals to the compiler that we don't want static linkage for this function.


What we do want is the selection of the function to be called at any given point in the program to be based on the kind of object for which it is called. This sort of operation is referred to as dynamic linkage, or late binding.


Pure Virtual Functions


It is possible that you want to include a virtual function in a base class so that it may be redefined in a derived class to suit the objects of that class, but that there is no meaningful definition you could give for the function in the base class.



#OOP Data Abstraction


Data abstraction refers to providing only essential information to the outside world and hiding their background details, i.e., to represent the needed information in program without presenting the details.


Data abstraction is a programming (and design) technique that relies on the separation of interface and implementation.


Let's take one real life example of a TV, which you can turn on and off, change the channel, adjust the volume, and add external components such as speakers, VCRs, and DVD players, BUT you do not know its internal details, that is, you do not know how it receives signals over the air or through a cable, how it translates them, and finally displays them on the screen.


Thus, we can say a television clearly separates its internal implementation from its external interface and you can play with its interfaces like the power button, channel changer, and volume control without having any knowledge of its internals.


In C++, classes provides great level of data abstraction. They provide sufficient public methods to the outside world to play with the functionality of the object and to manipulate object data, i.e., state without actually knowing how class has been implemented internally.


For example, your program can make a call to the sort() function without knowing what algorithm the function actually uses to sort the given values. In fact, the underlying implementation of the sorting functionality could change between releases of the library, and as long as the interface stays the same, your function call will still work.


In C++, we use classes to define our own abstract data types (ADT).


Access Labels Enforce Abstraction


In C++, we use access labels to define the abstract interface to the class. A class may contain zero or more access labels −


          Members defined with a public label are accessible to all parts of the program. The data-abstraction view of a type is defined by its public members.


          Members defined with a private label are not accessible to code that uses the class. The private sections hide the implementation from code that uses the type.


There are no restrictions on how often an access label may appear. Each access label specifies the access level of the succeeding member definitions. The specified access level remains in effect until the next access label is encountered or the closing right brace of the class body is seen.


Benefits of Data Abstraction


Data abstraction provides two important advantages −


          Class internals are protected from inadvertent user-level errors, which might corrupt the state of the object.


          The class implementation may evolve over time in response to changing requirements or bug reports without requiring change in user-level code.


By defining data members only in the private section of the class, the class author is free to make changes in the data. If the implementation changes, only the class code needs to be examined to see what affect the change may have. If data is public, then any function that directly access the data members of the old representation might be broken.


Data Abstraction Example


Any C++ program where you implement a class with public and private members is an example of data abstraction.


Designing Strategy


Abstraction separates code into interface and implementation. So while designing your component, you must keep interface independent of the implementation so that if you change underlying implementation then interface would remain intact.


In this case whatever programs are using these interfaces, they would not be impacted and would just need a recompilation with the latest implementation.



#OOP Data Encapsulation


All C++ programs are composed of the following two fundamental elements −


          Program statements (code) − This is the part of a program that performs actions and they are called functions.

          Program data − The data is the information of the program which gets affected by the program functions.


Encapsulation is an Object Oriented Programming concept that binds together the data and functions that manipulate the data, and that keeps both safe from outside interference and misuse. Data encapsulation led to the important OOP concept of data hiding.


Data encapsulation is a mechanism of bundling the data, and the functions that use them and data abstraction is a mechanism of exposing only the interfaces and hiding the implementation details from the user.


C++ supports the properties of encapsulation and data hiding through the creation of user-defined types, called classes. We already have studied that a class can contain private, protected and public members. By default, all items defined in a class are private.


          class Box {
             public:
                double getVolume(void) {
                   return length * breadth * height;
                }

             private:
                double length;      // Length of a box
                double breadth;     // Breadth of a box
                double height;      // Height of a box
          };


The variables length, breadth, and height are private. This means that they can be accessed only by other members of the Box class, and not by any other part of your program. This is one way encapsulation is achieved.


To make parts of a class public (i.e., accessible to other parts of your program), you must declare them after the public keyword. All variables or functions defined after the public specifier are accessible by all other functions in your program.


Making one class a friend of another exposes the implementation details and reduces encapsulation. The ideal is to keep as many of the details of each class hidden from all other classes as possible.


Data Encapsulation Example


Any C++ program where you implement a class with public and private members is an example of data encapsulation and data abstraction. 



#OOP Interfaces in C++ (Abstract Classes)


An interface describes the behavior or capabilities of a C++ class without committing to a particular implementation of that class.


The C++ interfaces are implemented using abstract classes and these abstract classes should not be confused with data abstraction which is a concept of keeping implementation details separate from associated data.


A class is made abstract by declaring at least one of its functions as pure virtual function. A pure virtual function is specified by placing "= 0" in its declaration


          class Box {
             public:
                // pure virtual function
                virtual double getVolume() = 0;

             private:
                double length;      // Length of a box
                double breadth;     // Breadth of a box
                double height;      // Height of a box
          };
          
          
The purpose of an abstract class (often referred to as an ABC) is to provide an appropriate base class from which other classes can inherit. Abstract classes cannot be used to instantiate objects and serves only as an interface. Attempting to instantiate an object of an abstract class causes a compilation error.


Thus, if a subclass of an ABC needs to be instantiated, it has to implement each of the virtual functions, which means that it supports the interface declared by the ABC. Failure to override a pure virtual function in a derived class, then attempting to instantiate objects of that class, is a compilation error.


Classes that can be used to instantiate objects are called concrete classes.


https://stackoverflow.com/questions/12998581/how-do-i-declare-an-overloaded-operator-in-an-abstract-class-and-override-it-in


https://stackoverflow.com/questions/1905439/overload-operators-as-member-function-or-non-member-friend-function

