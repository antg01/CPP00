# CP00
# README - Mégaphone & PhoneBook en C++

## Exercice 00 : Mégaphone

### Objectif
L'objectif de cet exercice est de se familiariser avec la manipulation des arguments en ligne de commande et les flux de sortie en C++.

### Explication de la solution
Le programme prend des arguments passés lors de son exécution et les affiche en majuscules. S'il n'y a pas d'arguments, un message spécifique est affiché.

### Concepts abordés
- Utilisation de `argc` et `argv` pour récupérer les arguments de la ligne de commande.
- Utilisation de `std::toupper()` pour transformer les caractères en majuscules.
- Manipulation des flux de sortie avec `std::cout`.

---

## Exercice 01 : My Awesome PhoneBook

### Objectif
Cet exercice a pour but d'introduire la programmation orientée objet en C++ en concevant une application rudimentaire de gestion de contacts.

### Explication de la solution
Le programme implémente un répertoire de contacts qui permet trois actions principales :
1. **Ajouter un contact** (`ADD`)
2. **Rechercher un contact** (`SEARCH`)
3. **Quitter le programme** (`EXIT`)

Le répertoire peut stocker jusqu'à 8 contacts. Lorsqu'un nouvel enregistrement est ajouté alors que le répertoire est plein, le plus ancien est remplacé.

### Concepts abordés
#### **Programmation orientée objet (OOP)**
- **Encapsulation** : Les attributs des contacts sont privés et accédés via des méthodes publiques.
- **Classes** : Définition de `Contact` et `PhoneBook` pour structurer les données et les comportements.
- **Attributs et méthodes** : Définition des variables d'instance et des méthodes associées.

#### **Gestion des entrées/sorties**
- Utilisation de `std::cin` pour la saisie utilisateur.
- Utilisation de `std::setw()` pour formater l'affichage des contacts.
- Manipulation de `std::string` pour gérer et tronquer les données affichées.

#### **Gestion des erreurs et validation**
- Vérification des entrées pour empêcher la saisie de champs vides.
- Gestion des erreurs de format avec `std::cin.fail()`.

### Fonctionnalités principales
- **Ajout de contacts** : Saisie des informations via `std::cin`.
- **Affichage des contacts** : Liste formatée avec alignement et troncature.
- **Recherche d'un contact** : Accès aux détails d'un contact en saisissant un index valide.
- **Gestion des commandes invalides** : Messages d'erreur si la commande ou l'index sont incorrects.

---

## Compilation et Exécution
### Mégaphone
Compilation :
```bash
make
```
Exécution :
```bash
./megaphone "message ici"
```

### PhoneBook
Compilation :
```bash
make
```
Exécution :
```bash
./phonebook
```

### Commandes disponibles dans PhoneBook
- `ADD` : Ajouter un contact.
- `SEARCH` : Afficher la liste des contacts et consulter un contact.
- `EXIT` : Quitter le programme.

---

## Améliorations possibles
- Utiliser des flux `getline()` pour accepter des entrées avec espaces.
- Implémenter une vérification plus robuste des entrées utilisateur.
- Ajouter des couleurs pour améliorer l'affichage dans le terminal.
- Sauvegarder les contacts dans un fichier pour les conserver entre les exécutions.

---

## Conclusion
Ces exercices introduisent des concepts fondamentaux du C++ :
- Gestion des entrées/sorties,
- Manipulation des chaînes de caractères,
- Programmation orientée objet,
- Gestion des erreurs et validation des entrées.

Ils constituent une excellente introduction à la logique et à la structure des applications en C++.

---

### 🚀 **C++98 Essentials Summary (for a C Programmer)**

Since you're transitioning from C to C++98, here's a concise overview of the key concepts we've covered so far.

---

### 1️⃣ **C++98 Overview**
- C++98 is an extension of C, adding **object-oriented programming (OOP)**, **templates**, and **standard libraries** like the **STL**.
- You can still use C code in C++, but C++ offers more powerful abstractions.

---

### 2️⃣ **Namespaces**
- **Purpose:** Prevent **name conflicts** in large codebases.
- **Syntax:**
  ```cpp
  namespace Math {
      int add(int a, int b) { return a + b; }
  }

  int main() {
      std::cout << Math::add(3, 4) << std::endl;
      return 0;
  }
  ```
- Use `using namespace Math;` to avoid `Math::` prefix (with caution).

---

### 3️⃣ **Classes**
- A **class** is a blueprint to create **objects**, combining **data (attributes)** and **functions (methods)**.
- **Example:**
  ```cpp
  class Person {
  public:
      std::string name;
      int age;
      void introduce() {
          std::cout << "Hi, I'm " << name << " and I'm " << age << " years old." << std::endl;
      }
  };
  ```

- **Access Specifiers:**
  - `public`: Accessible from outside the class.
  - `private`: Only accessible within the class.
  - `protected`: Accessible in derived classes.

---

### 4️⃣ **Constructors & Destructors**
- **Constructor:** Initializes an object automatically when created.
- **Destructor:** Cleans up resources when the object is destroyed.

```cpp
class Car {
public:
    Car() { std::cout << "Car created!" << std::endl; }    // Constructor
    ~Car() { std::cout << "Car destroyed!" << std::endl; } // Destructor
};
```

- **Constructor Overloading:** Multiple constructors with different parameters.

---

### 5️⃣ **Initialization Lists**
- Efficient way to **initialize members** directly, especially `const`, references, or complex types.
- **Syntax:**
  ```cpp
  class Point {
      int x, y;
  public:
      Point(int a, int b) : x(a), y(b) {}  // Initialization list
  };
  ```

---

### 6️⃣ **Encapsulation**
- Protects internal data and controls how it's accessed or modified.
- Achieved using `private` members and `public` getter/setter methods.

```cpp
class BankAccount {
private:
    double balance;
public:
    void deposit(double amount) { balance += amount; }
    double get_balance() { return balance; }
};
```

---

### 7️⃣ **Inheritance**
- Allows one class to **inherit** properties and methods from another.
- **Syntax:**
  ```cpp
  class Animal {
  public:
      void eat() { std::cout << "Eating..." << std::endl; }
  };

  class Dog : public Animal {
  public:
      void bark() { std::cout << "Barking!" << std::endl; }
  };
  ```

---

### 8️⃣ **Polymorphism**
- Enables methods to behave differently based on the object type, using **virtual functions**.

```cpp
class Animal {
public:
    virtual void speak() { std::cout << "Animal speaks" << std::endl; }
};

class Dog : public Animal {
public:
    void speak() { std::cout << "Dog barks" << std::endl; }
};

void make_sound(Animal* a) {
    a->speak();
}
```

---

### 9️⃣ **Templates (Generic Programming)**
- Allows writing **generic functions or classes** that work with any data type.

```cpp
template <typename T>
T add(T a, T b) {
    return a + b;
}
```

---

### 🔥 **Memory Management in C++**
- Use `new` and `delete` instead of `malloc`/`free`.

```cpp
int* ptr = new int(42); // Allocate memory
delete ptr;             // Free memory
```

---

### 1️⃣0️⃣ **STL (Standard Template Library)**
- Provides **ready-to-use data structures** (like `vector`, `map`, `set`) and **algorithms** (`sort`, `find`, etc.).

```cpp
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {3, 1, 4, 1, 5};
    std::sort(numbers.begin(), numbers.end());

    for (int n : numbers) {
        std::cout << n << " ";
    }
    return 0;
}
```

---

### ✅ **Key Differences Between C and C++98**

| **C**                    | **C++98**                        |
|--------------------------|----------------------------------|
| Procedural Programming   | Object-Oriented Programming (OOP) |
| `struct` for data only   | `class` with data & methods      |
| `malloc` / `free`        | `new` / `delete`                 |
| No Namespaces            | Namespaces to avoid name conflicts |
| No Templates             | Templates for generic programming |
| Manual Error Handling    | Exception handling (`try-catch`) |

---
### 📌 **Summary: Pointers to Members & References in C++**

---

## **1️⃣ Pointers to Members**
Pointers to members allow storing the address of **class attributes or methods**, enabling dynamic member access.

### **Pointer to Data Member**
```cpp
class MyClass
{
public:
    int data;
};

int MyClass::*ptr = &MyClass::data; // Pointer to 'data'
MyClass obj;
obj.*ptr = 42; // Access via object
```
- `.*` is used with objects.
- `->*` is used with object pointers.

### **Pointer to Member Function**
```cpp
class MyClass
{
public:
    void show() { std::cout << "Hello!\n"; }
};

void (MyClass::*funcPtr)() = &MyClass::show;
(obj.*funcPtr)();   // Call via object
(objPtr->*funcPtr)(); // Call via pointer
```
- Functions are called using `.*` or `->*`.
- Useful for **callback functions and dynamic dispatch**.

---

## **2️⃣ References in C++**
A **reference (`&`)** is an alias for an existing variable, avoiding the use of pointers.

### **Basic Reference Usage**
```cpp
int a = 10;
int& ref = a; // 'ref' is another name for 'a'
ref = 20; // Modifies 'a' as well
```
✅ **Key Points**:
- Must be initialized at declaration.
- Cannot be reassigned (unlike pointers).
- No need for explicit dereferencing (`*`).

### **Reference vs Pointer**
| Feature | Reference (`&`) | Pointer (`*`) |
|---------|---------------|--------------|
| Reassignable | ❌ No | ✅ Yes |
| Can be `nullptr`? | ❌ No | ✅ Yes |
| Requires `*` for access? | ❌ No | ✅ Yes |

---

## **3️⃣ References in Function Parameters**
Using references **avoids copying large objects** and allows modifying the original value.

```cpp
void modify(int& ref)
{
    ref += 10;
}
```

### **Constant Reference (`const &`)**
```cpp
void display(const int& ref)
{
    std::cout << ref << std::endl;
}
```
✅ **Advantages**:
- Prevents accidental modification.
- Can reference temporary values (`display(100);` is valid).

---

## **4️⃣ Returning References**
Returning a reference avoids unnecessary copies but **be careful with local variables**.
```cpp
int& getRef(int& x)
{
    return x; // Safe, refers to an existing variable
}
```
⚠️ **Never return a reference to a local variable**:
```cpp
int& badFunction()
{
    int x = 10;
    return x; // ❌ Undefined behavior, 'x' is destroyed
}
```

---

## **5️⃣ R-Value References (`&&`) (C++11+)**
R-value references allow **move semantics**, optimizing performance.

```cpp
void moveFunction(int&& x)
{
    std::cout << x << std::endl;
}

moveFunction(10); // OK, '10' is an R-value
```
✅ Used for **efficient resource management** (e.g., `std::move`).

---

## **6️⃣ Summary Table**
| Feature | Reference (`&`) | Pointer (`*`) | R-Value Reference (`&&`) |
|---------|---------------|--------------|--------------------|
| Can be reassigned? | ❌ No | ✅ Yes | ❌ No |
| Can be `nullptr`? | ❌ No | ✅ Yes | ❌ No |
| Needs explicit dereferencing (`*`)? | ❌ No | ✅ Yes | ❌ No |
| Used for move semantics? | ❌ No | ❌ No | ✅ Yes |

🚀 **References simplify syntax, improve efficiency, and are crucial for passing objects efficiently in C++!**
