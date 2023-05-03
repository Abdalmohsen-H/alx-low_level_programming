/**
 * delete_nodeint_at_index - find if index exist on
 * singly linked list and delete new node
 * @index: input index
 * @head: pointer to head node
 * Return:1 if deleted new node
 * or -1 if deletion failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{listint_t *current, *newnode, *previous_node;
	unsigned int listindex = 0;

	if  (head == NULL || *head == NULL)
	{
		return (-1);
	};
	current = *head;/*list have nodes and *head is the first node*/
	if (index == 0)/*if true u must refer to *head inside*/
	{
		*head = (*head)->next;/*move *header to next node*/
		free(current);
		return (1);
	}
	else if ((*head)->next == NULL && index > 0)/* index not found on list*/
		return (-1);
	while (current != NULL)
	{/*loop till lis ends*/
		if (listindex == index)/*node matching index*/
		{/*then link new to next node & add new node after current */
			newnode = *head;/*we save *head node to free it*/
			previous_node->next = (*head)->next;/*order of this block matters*/
			free(newnode);/*this should happen in this order*/
			return (1);/*to avoid losing data*/
		}
		current = current->next;
		listindex++;/* we now on the next node */
	}
	/*loop ended without match, then index out of list range*/
	return (-1);
}
