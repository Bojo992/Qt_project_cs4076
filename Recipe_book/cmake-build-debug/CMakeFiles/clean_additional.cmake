# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Recipe_book_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Recipe_book_autogen.dir\\ParseCache.txt"
  "Recipe_book_autogen"
  )
endif()
