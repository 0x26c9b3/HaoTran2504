
#include <stack>
#define STACK_CAPACITY 100
#define STACK_IS_EMPTY     (ps->top == -1)
#define STACK_IS_NOT_EMPTY (!STACK_IS_EMPTY)
#define STACK_SIZE         (ps->top + 1)
#define STACK_IS_FULL      (STACK_SIZE == STACK_CAPACITY)
typedef struct
{
	int eles[STACK_CAPACITY];
	int top;            // index of eles

	int invalid_ele;
} stack;

void stack_init(stack *ps, int invalid_ele);
void stack_push(stack *ps,  int ele);   // NOTE: prefixing with filename to eliminate naming conflits
int  stack_pop(stack *ps);
bool stack_empty(stack *ps);			// is empty


void stack_init(stack *ps, int invalid_ele)
{
	ps->top = -1;   // index of eles

    // invalid_ele for example can be -1, or, -999
    //  a value that pop returns when empty, cllients can decide for their problem domains
	ps->invalid_ele = invalid_ele;
}
void stack_push(stack *ps, int ele)
{
	if (STACK_IS_FULL) {
		cout << "stack overflow."<< endl <<;
		return;
	}

	ps->top++;
    ps->eles[ps->top] = ele;
}
int stack_pop(stack *ps)
{
	if (STACK_IS_EMPTY) {
		printf("stack underflow. ");
		return ps->invalid_ele;
	}

	int temp = ps->eles[ps->top];   // safe to return array pointer? since element exits in the static array? for single threaded app
	ps->top--;
	return temp;
}

bool stack_empty(stack *ps)
{
	if (STACK_IS_EMPTY) {
		return true;
	}

	return false;
}
