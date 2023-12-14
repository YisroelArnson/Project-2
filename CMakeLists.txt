cmake_minimum_required(VERSION 3.13)
project(Project_2_Skeleton)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(project2.cpp
        expression.h
        literal.h
        minus.h
        project2.cpp
        operand.cpp
        operand.h
        parse.cpp
        parse.h
        plus.h
        subexpression.cpp
        subexpression.h
        symboltable.cpp
        symboltable.h
        variable.cpp
        variable.h minus.h divide.h multiply.h  modulus.h exponent.h minimum.h maximum.h average.h  )
