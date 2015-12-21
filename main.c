/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 09:05:26 by pbourdon          #+#    #+#             */
/*   Updated: 2015/12/21 11:01:00 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct element element;
struct element
{
	int		val;
	struct element *nxt;
};

typedef element* llist;

llist	ft_list_add_first(llist list, int value)
{
	element* newElement;

	newElement = malloc(sizeof(element));
	newElement->val = value;
	newElement->nxt = list;
	return (newElement);
}

llist	ft_list_add_last(llist list, int value)
{
	element* newElement;

	newElement = malloc(sizeof(element));
	newElement->val = value;
	newElement->nxt = NULL;
	if (list == NULL)
		return (newElement);
	else
	{
		element* temp = list;
		while (temp->nxt != NULL)
			temp = temp->nxt;
		temp->nxt = newElement;
		return (list);
	}
}

void	ft_list_display(llist list)
{
	element *tmp = list;

	while (tmp != NULL)
	{
		printf("%d ", tmp->val);
		tmp = tmp->nxt;
	}
}

int		ft_list_is_empty(llist list)
{
	if (list == NULL)
		return (1);
	else
		return (0);
}

llist	ft_list_del_first_el(llist list)
{
	if (list != NULL)
	{
		element* to_return = list->nxt;
		free(list);
		return (to_return);
	}
	else
		return (NULL);
}

llist	ft_list_del_last_el(llist list)
{
	element*	tmp;
	element*	ptmp;

	tmp = list;
	ptmp = list;
	if (list != NULL)
		return (NULL);
	if (list->nxt == NULL)
	{
		free(list);
		return (NULL);
	}
	while(tmp->nxt != NULL)
	{
		ptmp = tmp;
		tmp = tmp -> nxt;
	}
	ptmp->nxt = NULL;
	free(tmp);
	return (list);
}

llist	ft_list_search_el(llist list, int value)
{
	element		*tmp;

	tmp = list;
	while (tmp != NULL)
	{
		if (tmp->val == value)
			return (tmp);
		tmp = tmp->nxt;
	}
	return (NULL);
}

llist	ft_list_number_of(llist list, int value)
{
	int		index;

}


int		main(int argc, char **argv)
{
	int		index;
	llist list1 = NULL;
	element *list2 = NULL;
	struct element *list3 = NULL;

	index = 1;
	while (index != 11)
	{
		//list1 = add_last(list1, index);
	//	list1 = add_first(list1, index);
	//	printf("c");
		index++;
	}
	ft_list_display(list1);
	printf ("%d\n", ft_list_is_empty(list1));
	return (0);
}
