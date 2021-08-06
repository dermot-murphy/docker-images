cmake_minimum_required(VERSION 3.6)

project(testApp)

set(App "testApp")

enable_language(C)
enable_language(ASM)

# Disallow insource builds
if ( ${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR} )
    message( FATAL_ERROR “In-source builds not allowed! Create a build directory and run CMake from there. ” )
endif()

add_executable (
	${PROJECT_NAME}
)

target_sources (

	${PROJECT_NAME}
	
        PRIVATE
	
	# Main
	src/main/main.c
	
	# Application Layer
	src/app/app_manager.c
	src/app/app_manager.h
)

target_include_directories (

	${PROJECT_NAME}
	
	PUBLIC
	
	src/main
	src/app
)


