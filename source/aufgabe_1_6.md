# Aufgabe 1.6

### Deklaration
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

### Definition
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