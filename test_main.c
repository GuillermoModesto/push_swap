#include "pushswap.h"

int main()
{
	t_stack *stack = ft_lstnew(1);
	ft_lstadd_front(&stack, ft_lstnew(3));
	ft_lstadd_front(&stack, ft_lstnew(5));
	ft_lstadd_front(&stack, ft_lstnew(7));
	print_stack(stack);
	ft_printf("\n");
	
	// sa sb
	sa(&stack);
	print_stack(stack);
	ft_printf("\n");
	sb(&stack);
	print_stack(stack);
	ft_printf("\n");
}
