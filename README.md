# PV_TemplateLibrary
Custom C++ Template Library

This custom library can be used in any c++ projects
use "using namespace PV" or prefix with namesapce "PV" i.e. PV::Arrray

-----------------------------------------------------------------------------------------------------------

ARRAY = if unitialized the index will carry '0' as value
header file = arr.h
initialization = PV::Array<int, 5>arr (array type int32 and size 5)
access = [] i.e. arr[0]
arr.Size() = return size of array in int
arr.Front() = return first element of array
arr.Back() = return last element of array
arr.Search(/*value*/) = return the index of the where it find "value" first starting from index 0

--------------------------------------------------------------------------------------------------------------

DEQUQUE = if unitialized the index will carry '0' as value
header file = deck.h
initialization = PV::Deck<int, 5>dq (array type int32 and size 5)
access = dq.at(/*index*/)
dq.append(/*value*/) = append the value
dq.push(/*value*/) = push the value
dq.popFront() = delete first element
dq.popBack() = delete last element
dq.seekFront() = return first element
dq.seekBack() = return last element
dq.front() = return first index in int
dq.back() = return last index in int
dq.size() = return size in int
dq.clear() = reset dequeue
dq.search(/*value*/) = return the index of the where it find "value" first starting from index 0

---------------------------------------------------------------------------------------------------------------

QUQUE = if unitialized the index will carry '0' as value
header file = q.h
initialization = PV::Q<int, 5>q (array type int32 and size 5)
access = q.at(/*index*/)
q.append(/*value*/) = append the value
q.pop = delete first element
q.seek = return first element
q.top() = return first index in int
q.size() = return size in int
q.clear() = reset queue
q.search(/*value*/) = return the index of the where it find "value" first starting from index 0

---------------------------------------------------------------------------------------------------------------

STACK = if unitialized the index will carry '0' as value
header file = stack.h
initialization = PV::Stack<int, 5>st (array type int32 and size 5)
access = st.at(/*index*/)
st.push(/*value*/) = push the value
st.pop = delete last element
st.seek = return last element
st.size() = return size in int
st.clear() = reset stack
st.search(/*value*/) = return the index of the where it find "value" first starting from index 0

---------------------------------------------------------------------------------------------------------------

FORWARD LIST 
header file = forward_list.h
initialization => PV::Node<int>* head = nullptr; (linked list of type int)
fl_CreateNode() = return newly created node with value 0 AND pointing to null
fl_CreateNode(/*value*/) = return newly created node with given value AND pointing to null
fl_PrintList(/*pass head address*/) = print list to the end
fl_PrintList(/*pass head address, index*/) = print list to the passed index value
fl_BackPrintList(/*pass head address*/) = reverse print the list
fl_PushNode(/*pass head address, value*/) = push node
fl_AppendNode(/*pass head address, value*/) = append node
fl_InsertAt(/*pass head address, value, index*/) = add new node at given index
fl_InsertAfter(/*pass head address, value, index*/) = add new node after given index
fl_InsertBefore(/*pass head address, value, index*/) = add new node before given index
fl_DeleteNode(/*pass head address, index) = delete the node of given index
fl_ReverseList(/*pass head address*/) = reverse the list
fl_FindNode(/*pass head address, value*/) = find the value and return node index in int, when it is found first
fl_JoinList(/*pass head address of 1st node, 2nd node*/) = join two linked list

-----------------------------------------------------------------------------------------------------------------------

LIST 
header file = list.h
initialization => PV::Element<int>* head = nullptr; (linked list of type int)
l_CreateNode() = return newly created node with value 0 AND pointing to null
l_CreateNode(/*value*/) = return newly created node with given value AND pointing to null
l_PrintList(/*pass head address*/) = print list to the end
l_PrintList(/*pass head address, index*/) = print list to the passed index value
l_BackPrintList(/*pass head address*/) = reverse print the list
l_PushNode(/*pass head address, value*/) = push node
l_AppendNode(/*pass head address, value*/) = append node
l_InsertAt(/*pass head address, value, index*/) = add new node at given index
l_InsertAfter(/*pass head address, value, index*/) = add new node after given index
l_InsertBefore(/*pass head address, value, index*/) = add new node before given index
l_DeleteNode(/*pass head address, index) = delete the node of given index
l_ReverseList(/*pass head address*/) = reverse the list
l_FindNode(/*pass head address, value*/) = find the value and return node index in int, when it is found first
l_JoinList(/*pass head address of 1st node, 2nd node*/) = join two linked list


__________________________________________________________________________________________________________________________________________________________________


There are some loose ends in some files.
You need to manually delete linked lists to avoid any data leak.
