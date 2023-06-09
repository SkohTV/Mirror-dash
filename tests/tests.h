// Define for safety
#ifndef TESTS_H
#define TESTS_H

// Includes & Defines
#include "../primitives/_structs.h"

#include "../primitives/core.h"
#include "../primitives/linkedList.h"
#include "../primitives/fileCreator.h"

#include "../interfaces/gameLoop.h"
#include "../interfaces/mainMenu.h"

// Functions
/**
 * @brief Runs a test to check if everything still works as intented
 * 
 * @param testName 
 */
void testsRun(char testName);

/**
 * @brief Test for the Core functionnalities
 * 
 * @return int 
 */
int testCore();

/**
 * @brief Test for the Linked Lists (with ItemEntity nodes)
 * 
 * @return int 
 */
int testLinkedLists();

/**
 * @brief Test for the file input / output of levels
 * 
 * @return int 
 */
int testFiles();

/**
 * @brief First basic featured level
 * 
 * @return int 
 */
int testFirstLevel();

/**
 * @brief First implementation of sound
 * 
 * @return int 
 */
int testSound();


/**
 * @brief Test for the menu
 * 
 * @return int 
 */
int testMenu();


// Close safety define
#endif