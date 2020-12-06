/**
 * @brief C-Make-Evaluation
 * @details First step is about to evaluate usage of gnu without cMake
 * @param argc 
 * @param argv 
 * @return int 
 * 
 * @todo Next Step 5
 */

#include <stdio.h>
#include <string>
#include <iostream>

#include "process.h"
#include "dynLib.h"
#include "statLib.h"

void PrintUsageOfStaticLib(void)
{
  printf("## Static Library is used \n");
  CallHelper();
}

int main(int argc, char const *argv[])
{
  printf("########################\n");
  printf("Entering main ... \n");
  printf("########################\n");

  if (InitCore() == OpStatus::Initialized)
  {
    (void)StartCore();
  }

  printf("Returned from call %d \n", Prc_ProcessCall(1));
  PrintUsageOfStaticLib();

  if (argc < 2)
  {
    std::cout << "Error: Too little arguments";
    return 1;
  }

  const double inputValue = std::stod(argv[1]);
  double outputValue = inputValue;
  std::cout << "The result of " << inputValue << " is " << outputValue
            << std::endl;

  return 0;
}
