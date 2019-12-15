include_directories(../src)

include_directories(.)

add_executable(tests
        # tests
        def_dumper.h
        rbtree_pub1_test.cpp
        rbtree_prv1_test.cpp
        # sources    
        ../src/rbtree.h
        ../src/rbtree.hpp
        # gtest sources
        gtest/gtest-all.cc
        gtest/gtest_main.cc
        )

# add pthread for unix systems
if (UNIX)
    target_link_libraries(tests pthread)
endif ()
