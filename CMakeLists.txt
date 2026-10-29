project(utilities_module)

# INTERFACE - не будет ожидать наличия библиотеки, не будет ожидать наличия исходников. Это будет библиотека, состоящая только из заголовочных файлов.
add_library(${PROJECT_NAME} INTERFACE )

target_include_directories(${PROJECT_NAME} INTERFACE .)

add_subdirectory(core)