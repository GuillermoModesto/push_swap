#include "pushswap.h"

int main()
{
	t_stack *stack = ft_lstnew(1);
	ft_lstadd_front(&stack, ft_lstnew(3));
	ft_printf("%d, %d\n", stack->num, stack->next->num);
	
	// sa sb
	sa(stack);
	ft_printf("%d, %d\n", stack->num, stack->next->num);
	sb(stack);
	ft_printf("%d, %d\n", stack->num, stack->next->num);
}
