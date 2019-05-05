/* Only modify this file: caching.c
 * - You may create additional header files for your program.
 * - You may create any functions you want in this file.
 * - Do not modify any other files in this project.
 * Only submit caching.c and any new headers you created to Blackboard
 */

#include <stdio.h>
#include <stdlib.h>
#include "memory_system.h"

/* This is called from main on startup.
 *  If you want any code to run at program start, add it in here.
 */
void initialize() {
	
	



}

/* This is called when the program is exiting.
 *  If you want any code to run at program exit, add it in here.
 */
void teardown() {
}

/* You will complete the implemenation for the two core functions below:
 *  int get_physical_address(int virt_address)
 *  char get_byte(int phys_address)
 *
 * As you handle each case, you MUST call the relevant log_entry() functions
 *  - These log_entry function calls create the log we use to grade.
 *
 * The log_entry parameters are defined in the Project Description Document
 * Usage:
 * 	log_entry(CODE, address); // For translating Virtual Address to Physical Address
 * 	log_entry(CODE, byte);    // For getting the byte associated with a Physical Address
 * Samples (the full list in the Project Document):
 * 	log_entry(ILLEGALVIRTUAL, virt_address); // Bad input virt_address
 * 	log_entry(ADDRESS_FROM_PAGETABLE, phys_address); // Physical Address from Page Table
 * 	log_entry(DATA_FROM_CACHE, byte); // Found this byte in cache.
 *  This will create a log entry for an Illegal Virtual Address with the bad address.
 */


/* This function takes your virtual address as an int and returns 
 *  a corresponding physical address as an int.
 *
 * The conditions below are general conditions.  Remember to read the Project Description
 *  for details on Page Replacement Algorithm and the Address Schemes in use.
 *
 * Conditions:
 *  1) If the input address is too large, log the virt_address with
 *       the ILLEGALVIRTUAL code and return -1
 *  2) If the PPN is in the TLB, log the physical address generated with the 
 *       ADDRESS_FROM_TLB code.
 *  3) If the PPN is not in the TLB, but is in the Page Table, then log the
 *       physical address generated with the ADDRESS_FROM_PAGETABLE code and then
 *       update the TLB.
 *  4) If there is a Page Fault, use the handle_page_fault(vpn) API
 *       function and then log the physical address generated with the 
 *       PAGEFAULT code, then update the Page Table, then update the TLB.
 *  For any case 2-4, return the physical address.
 */
int get_physical_address(int virt_address) {
    int phys_address; // Initialize as an int.

    return phys_address;
}

/* This function takes a physical address as an int and returns 
 *  a corresponding byte of data as a char.  
 *
 * The conditions below are general conditions.  Remember to read the Project Description
 *  for details on Page Replacement Algorithm and the Address Schemes in use.
 *
 * Conditions:
 *  1) If the data is in the cache, log the byte from the cache with the 
 *       DATA_FROM_CACHE code and then return the byte.
 *  2) If there is a Cache Miss, use the get_word(phys_address) API function as needed
 *       to fully update the cache entry, and then log the byte at the requested address
 *       with the DATA_FROM_MEMORY code, then update the Cache.
 *  For any case, return the byte retrieved.
 */
char get_byte(int phys_address) {
   char byte; // Variable for the byte you will fetch.

   return byte;
}

