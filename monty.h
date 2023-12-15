#ifndef MONTY_H
#define MONTY_H
#define  _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - function doubly linked list representation of
 * a stack or queue
 * @n: (integer)
 * @prevv: (pointer) points to previous element of the stack or queue
 * @nextv: (pointer) points to the next element of the stack or queue
 * the header file
 * Description: The doubly linked list node structure
 * fr stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prevv;
	struct stack_s *nextv;
} stack_t;
/**
 * struct bus_s - function variables -args, file, line content
 * @arg: (value)
 * @file: (pointer) to monty file
 * @content: (pointer)line content
 * @lifi: (int variable)flag change stack <-> queue
 * Description: This carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - function opcode and its function
 * @opcode: (pointer) the opcode
 * @f: The (function) to handle the opcode
 * the header file
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_pushfn(stack_t **head, unsigned int number);
void f_pallfn(stack_t **head, unsigned int number);
void f_pintfn(stack_t **head, unsigned int number);
int executefn(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stackfn(stack_t *head);
void f_popfn(stack_t **head, unsigned int counter);
void f_swapfn(stack_t **head, unsigned int counter);
void f_addfn(stack_t **head, unsigned int counter);
void f_nopfn(stack_t **head, unsigned int counter);
void f_subfn(stack_t **head, unsigned int counter);
void f_divfn(stack_t **head, unsigned int counter);
void f_mulfn(stack_t **head, unsigned int counter);
void f_modfn(stack_t **head, unsigned int counter);
void f_pcharfn(stack_t **head, unsigned int counter);
void f_pstrfn(stack_t **head, unsigned int counter);
void f_rotlfn(stack_t **head, unsigned int counter);
void f_rotrfn(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnodefn(stack_t **head, int n);
void addqueuefn(stack_t **head, int n);
void f_queuefn(stack_t **head, unsigned int counter);
void f_stackfn(stack_t **head, unsigned int counter);
#endif
