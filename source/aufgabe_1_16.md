# Glossary

#### C++
General purpose programming language (supports a wide variety of uses).

#### Quellcode
**Source code**. The text written in a promgramming language, understandable to the programmer.

#### Compiler
A program that processes the source code and "translates" it into a lower-level language, readable by the machine. It produces object files.

#### Linker
A program that combines different object files into an exectuable program, resolving the references between them.

#### Objektcode
It is the product of the compiler. It is code in a computer's machine language.

#### Ausführbare Datei
**Executable file**. Is a file with a set of instructions for a computer, to perform a task. It can not be read as a data file, since it has been compiled.

#### main()
Every C++ program must have one (and only one) global function named `main`. Executing this function is the first thing the program will do. It returns an integer value to the system, indicating success (nothing or 0) or failure (anything else).

#### #include
It instructs the compiler to include the declarations of the source that follows the command (it copies the contents of the source file). `<iostream>` for example, for system header files (looks for the source in a standard list of system paths), and `"math.hpp"` for the files from the particular program (searches in its directoy).

#### Kommentar
Text that the compiler ignores. It helps the developers to have clearer understanding of the cod.

#### Header
File containing the declarations of variables and functions, and macro definitions of classes (interfaces). It allows to separate compilation, making the code more organized and speeding up compilation.

#### Programm
A collection of instructions that will be executed by the computer.

#### Ausgabe
**Output**. The data a function returns on completion.

#### std::cout
Object of class `ostream` that represents the standard output stream (standard C++ library). Characters can be written to it either as formatted data using the insertion operator (`operator<<`) or as unformatted data, using member functions such as `write`.


#### std::cin
Object of class `istream` that represents the standard input stream (standard C++ library). Characters can be retrieved either as formatted data using the extraction operator (`operator>>`) or as unformatted data, using member functions such as `read`.


#### <<
Operator "put to" (insertion): writes the second argument into the first. For example:
```std::cout << "Hello, World!\n";```

#### >>
Extraction operator.

Example:
```
  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;
  std::cout << "You have entered: " << n << '\n';
```

#### Funktion
A block of statements that the program should performed upon call. These are listed in the body of the function (delimited by curly brackets `{}`). The function structure also includes a return type, a name and a list of parameters.
```
//return type: float
//name: sum
//paramters' list: float a, float b
float sum(float a, float b) {
	// Body of thw function
	return a + b;
}
```

#### Funktionssignatur
 The return type and parameters conform the function's **Signature**.

#### Deklaration
It is a statement that introduces a name into a program, and includes a specification of its type.
For example, for a variable:
```
extern int my_variable;
```
This allows the compiler to proceed, letting it know the variable exists, but with no need to provide further details. When linking, this information will need to be available. The keyword **extern** allows us to declare the variable in any place (and multiple times), while defining it in another file, for example (it must be defined only once in a certain scope).

For a **function**, a declaration is the determination of the signature.
```
float add(float a, float b);
```

While for a **class**, its (forward) declaration includes the `class` keyword, attribute (optional) and identifier. While not defined (its members not declared) it has incomplete type.
```
class Vector;
```

#### Definition
In the case of a **variable**, a definition includes its type and name (or a list of names), telling the compiler how much storage to create for it.
```
float a;
```

For a **function**, it is determining its behavior (describing the body).
```
float add(float a, float b) {
	return a + b;
}
``` 

For a **class**, the definition body (member specification) is a brace-enclose sequence of member declarations (data, functions...), access specifiers (`public:`, `private:`, `protected:`), among others.
```
class Circle {
	public:
                               Circle();
                               Circle(Circle const& c);
                               Circle(Point2D const& ctr, float r, ColorRGB const& rgb);
                               Circle(std::string const& name, Point2D const& ctr, float r, ColorRGB const& rgb);
                              ~Circle();

                Circle&       operator=(Circle const& c);

                float          area() const;
                float          diameter() const;
                BBox           bounding_box() const;
                void           color(ColorRGB const& clr);
                ColorRGB       color() const;
                void           center(Point2D const& ctr);
                Point2D        center() const;
                void           radius(float r);
                float          radius() const;
                void           draw() const;

	private:
                std::string    name_;
                Point2D        center_;
                float          radius_;
                ColorRGB       color_;
};
```

#### Typ
It defines a set of possible values and what operations can be performed on a certain object.

#### Typkonvertierung
It is the process of converting data of a predifned type into another. It can be implicit (done by the compiler without the developer's intervention, e.g. when using different types in an expression) or explicit (called casting, it forces an expression to a specific type).

#### Variable
A named object (some memory that holds a value of some type).

#### Name
A string of characters that identify an entity in the program.

#### Wert
Set of bits that will be interpreted according to its type.

#### Initialisierung
**Initialise**. It is to give (assign) a variable an initial value. It can be done together with its declaration (when we introduce the name and type to the program). For example:
```
int my_variable = 1;
```

#### Zuweisung
**Assign.** This same variable can be given later a different value: that is assigning.
For example, to the same variable above, we change the value from 1 to 5:
```
my_variable = 5;
```
The difference between the examples is that to assign a value we do not state the type, as it was already done during the variable's declaration.

#### const
The keyoword defines a constant, a *variable* that cannot be altered by the program. We "promise" not to change the value assigned to it, and therefore they cannot be left uninitialized. The compiler will enforce this, throwing an error if we attempt to do so.
```
const int radius = 5;
radius = 3; // Will throw the following compile error:
			// "'radius': you cannot assign to a variable that is const"
```

#### Gültigkeitsbereich
**Scope.** It is the part of the program where the binding between a name and an entity is valid. It can be local (it applies for a certain block of code, for example, within a function) or global (if defined at the beginning of the program and its available throughout it).

