# cpp_part1

A repository gathering the first five 42 C++ modules, from `cpp00` to `cpp04`.
This project consists of working through the first object-oriented foundations of C++98, with each module introducing a new set of concepts such as classes, memory management, operator overloading, inheritance, and polymorphism.

`cpp_part1` was designed to build a solid base in C++ through small exercises that gradually move from simple class usage to more structured object-oriented design.

## Features
- Covers the first five 42 C++ modules: `cpp00` to `cpp04`
- Multiple standalone exercises with dedicated Makefiles
- Progressive introduction to core C++98 concepts
- Focus on class design, memory handling, inheritance, and polymorphism

## Project structure
- `cpp00/` — basic classes, member functions, streams, and simple interactive programs
- `cpp01/` — memory allocation, references, pointers, file manipulation, and small utility programs
- `cpp02/` — Orthodox Canonical Form and fixed-point class development
- `cpp03/` — inheritance through the ClapTrap exercises
- `cpp04/` — subtype polymorphism, abstract classes, and deep-copy behavior

## Module overview

### cpp00
This module introduces the first C++ basics after C.
It focuses on classes, member functions, encapsulation, and standard streams.

Included exercises:
- `ex00` — `megaphone`: transforms command-line input to uppercase
- `ex01` — `phonebook`: small interactive phonebook with a fixed-size contact list

Main topics:
- class definition and member functions
- private and public data
- object instantiation
- standard input and output
- simple interactive program flow

### cpp01
This module focuses on memory allocation, references, pointers, and small utility-style programs.
It also introduces file replacement logic and simple behavior dispatch.

Included exercises:
- `ex00` — `zombie`: stack vs heap allocation with a simple `Zombie` class
- `ex01` — `horde`: array allocation with `new[]` and grouped object initialization
- `ex02` — `brain`: comparison between raw variable, pointer, and reference access
- `ex03` — `violence`: references and pointers through `Weapon`, `HumanA`, and `HumanB`
- `ex04` — `mysed`: file content replacement without using `sed`
- `ex05` — `harl`: simple complaint system using level-based dispatch

Main topics:
- stack and heap allocation
- object lifetime and destruction
- references and pointers
- basic file I/O with streams
- string replacement
- method-based dispatch

### cpp02
This module introduces the Orthodox Canonical Form and builds a fixed-point number class step by step.
Each exercise extends the previous one with more useful behavior.

Included exercises:
- `ex00` — `fixed`: first fixed-point class in Orthodox Canonical Form
- `ex01` — `fixed2`: conversion to and from integers and floating-point values
- `ex02` — `fixed3`: comparison, arithmetic, increment/decrement, and min/max helpers

Main topics:
- canonical class form
- copy behavior
- fixed-point representation
- operator overloading
- conversion helpers

### cpp03
This module introduces inheritance through a small family of game-style classes.
The exercises progressively build relationships between base and derived classes.

Included exercises:
- `ex00` — `clap`: base `ClapTrap` class with attack, damage, and repair behavior
- `ex01` — `scav`: derived `ScavTrap` with adapted stats and `guardGate()`
- `ex02` — `frag`: extended hierarchy with `FragTrap`

Main topics:
- inheritance
- constructor and destructor chaining
- attribute reuse in derived classes
- overridden behavior
- class lifecycle visibility through tests

### cpp04
This module focuses on polymorphism, abstract classes, and deep copy behavior.
It highlights the role of virtual functions and dynamic ownership in inheritance hierarchies.

Included exercises:
- `ex00` — `animal`: `Animal`, `Dog`, `Cat`, and wrong polymorphism examples
- `ex01` — `brain`: deep-copy behavior with dynamically allocated `Brain` objects
- `ex02` — `abstract`: abstract `Animal` base class with pure virtual behavior

Main topics:
- runtime polymorphism
- virtual functions
- abstract classes
- deep copy vs shallow copy
- destructor correctness in inheritance hierarchies

## Notes
This repository groups several C++ modules in a single place instead of exposing one project per repository.
Because of that, each module keeps its own exercise layout and Makefiles.

## Usage
Build and run the exercise you want to inspect.
Examples:

```bash
cd cpp00/ex00 && make && ./megaphone "hello world"
cd cpp01/ex04 && make && ./mysed input.txt old new
cd cpp03/ex01 && make && ./scav
```

## Learning outcomes
This repository was an introduction to the first major object-oriented building blocks in C++98.
It helped build solid foundations in:
- classes and encapsulation
- memory allocation and ownership
- references and pointers
- Orthodox Canonical Form
- operator overloading
- inheritance
- runtime polymorphism
- abstract class design
