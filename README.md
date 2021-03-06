This is a challenging project targeting the port of the last complete **MS SDK** to **pellesC**.

The collection of headers is actually composed of 1381 headers. Many of them are a replacement for outdated headers. The vast majority are completely missing from actual distribution.

**PellesC** is an excellent compiler suite for windows, it is fully compliant with **C99** and **C11** standards, but still compatible with MS language extension, allowing it to compile native MS code.

The distribution includes the most relevant, and most common headers, enough to compile almost all projects. This is by design to keep the compiler suite extremely compact, fast to download, space saving when installed and even easily portable.

But despite its size it is very powerful, able to compile complex projects and advanced code.
Anyway to make the **PellesC** compiler suite core able to deal with nowadays sources available around, that makes use of functions and interfaces that are not in the actual distribution, it needs the full set of headers and libraries.

This installer will made them available in the compiler include\win directory to let you use them in your programs, including **fGdiPlusFlat.h** to use **GDI+** under plain '**C**'.

You'll understand that I couldn't have deep checked all headers! And even if I can compile and run all my projects I expect anyway problems around.

To solve them I need your cooperation. Check against you projects and report errors possibly with a small sample that reproduce the problem.

I'll wait your feedbacks to fix the package then move it to contributions.

* The keypoints of this project are:
    *  **Compilation speedup**:
        * Because headers will be used in a plain **C** compiler all references, and conditional
          compilation related to **C++**, are not implemented.
        * For similar reasons have been removed all conditional compilation related to **MIDL**,
          **PREFAST** and annotations.
        * These headers will never be intended for **MAC** & relatives. So any conditional compilation
          and references to **_MAC** has been removed.
        * These headers are intended for **PellesC**, so almost all references to **_MSC_VER** have
          been translated to **__POCC__** equivalent.
    * **MS compliance**.

      Because many sources available have been written for **MSVC** compilers the headers have been
      'adjusted' to fit **MS** requirements. Some of the technical problems found are:
        *  Missing `__declspec(selectany)` for **COMDAT** sections.

           **MS** is used to multiply define symbols tagging them with this specifier, but unfortunately **PellesC** don't actually support **COMDAT**'s.
           Note that the **PellesC** linker have the option '/FORCE:MULTIPLE' that could mimic the behavior of `__declspec(selectany)`, but, opposed to the specifier working way, it will ignore **all** multiple definitions, de facto masking also eventual errors.

           The solution actually used, in headers, is the conversion of all symbol instances with an equivalent `#define`.

           This should work well for base types (`int`, `char`, `float`, `double`, etc), but could be a problem with complex types (`struct`s, `union`s, etc).
        *  **GUID**s, **PROPKEYS**s and other complex types that are tagged by `__declspec(selectany)`.

           They are required for reference on each source file that includes the header. The solution used is to tie them to conditional definition. The symbols are normally defined as 'extern', and instantiated only if the preprocessor symbol 'INITGUID' is defined.

           Defining the symbol in only one source, before the header `#include`, creates a single instance of the symbol while there are multiple `extern` references.

           The **COMDAT** problem in libraries, where **GUID**'s are instantiated, has been solved splitting definitions in multiple source files.
    * **ISO/IEC 9899:201x compliance**.

      Many native **MS** headers are write with **C++** in mind, and for this reason are not **ISO/IEC 9899:201x** compliant.

      I.e. structs, unions, class, enumerations and global namespaces are all coincident in C++, but distinct in **C**.

      Consider these 2 declarations:

            struct foo      //This is the most diffused declaration type
            {
                int bar;
            };

      and

            typedef struct
            {
                int bar;
            } foo;

      Under **C++** instantiating a copy of the struct 'foo' using the following declaration:

            foo mystruct = {0};

      will not produce errors with both 'foo' definitions because the global and struct namespaces are coincident, meaning that the type 'foo' is fully defined with both declarations.

      But in **C** this is not the case. In the first case, the type 'foo' is defined only in the structs namespace, and the statement above will produce an error.

      To successfully instantiate a 'foo' struct copy in plain **C** using the first declaration, that is widly used in 'MS' headers, you must specify the `struct` namespace. The declaration then should be:

            foo mystruct = {0};         //Fail in C
            struct foo mystruct = {0};  //Works in C and C++

      But this workarond will require corrections in all the code you will compile, prepending a struct namespace definition. The compliance with native 'MS' code is broken.
      
      On the other hand the second declaration can work for **C** and **C++**, but fails if namespace is is qualified (struct):

            struct foo      //This is the most diffused declaration type
            {
                int bar;
            };
            foo mystruct = {0};  //Still Fails in C

      The solution used is a modified, **ISO/IEC 9899:201x** compliant, declarations:
      
            typedef struct foo
            {
                int bar;
            } foo;

      Now it will work for both languages.

      The above code defines 'foo' in both namespaces and fix the ANSI compliance  (or at least should...).

* Porting of **C++** only headers.

  Many headers are C++ only, even if their content can be used under plain **C**. An example of this type of files are `gdiplus.h`, `Ddraw.h`, etc.

  All headers that can be of any use in plain **C** have been **translated** to **C**.

  In the port process of **C++** headers to **C** the helper classes have not been translated. Not all **C++** files are currently translated, but they are included in the distribution generating an error "**C++ only header!**". If you encounter one you can  translate it yourself and then make it available, or ask for translation and wait.

  In any case if the header contains only 'helper' classes don't expect it will be taken in consideration.
