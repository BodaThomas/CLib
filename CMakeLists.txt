cmake_minimum_required(VERSION 3.13)
project(CLib C)

set(CMAKE_C_STANDARD 11)

find_package(PkgConfig)
find_path(CRITERION_INCLUDE_DIR criterion/criterion.h
        PATH_SUFFIXES criterion)
find_library(CRITERION_LIBRARY NAMES criterion libcriterion)
set(CRITERION_LIBRARIES ${CRITERION_LIBRARY})
set(CRITERION_INCLUDE_DIRS ${CRITERION_INCLUDE_DIR})
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Criterion DEFAULT_MSG
        CRITERION_LIBRARY CRITERION_INCLUDE_DIR)
mark_as_advanced(CRITERION_INCLUDE_DIR CRITERION_LIBRARY)


include_directories(include)

add_executable(CLib
        include/example.h
        lib/my/my_compute_power_rec.c
        lib/my/my_compute_square_root.c
        lib/my/my_find_prime_sup.c
        lib/my/my_getnbr.c
        lib/my/my_is_prime.c
        lib/my/my_isneg.c
        lib/my/my_put_nbr.c
        lib/my/my_putchar.c
        lib/my/my_putstr.c
        lib/my/my_revstr.c
        lib/my/my_split.c
        lib/my/my_str_isalpha.c
        lib/my/my_str_isnum.c
        lib/my/my_strcat.c
        lib/my/my_strcmp.c
        lib/my/my_strcpy.c
        lib/my/my_strdup.c
        lib/my/my_strlen.c
        lib/my/my_strncat.c
        lib/my/my_strncmp.c
        lib/my/my_strncpy.c
        lib/my/my_swap.c
        src/help.c
        src/main.c
        tests/test_my_strlen.c)
