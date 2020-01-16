/*
copy          //容器内指定范围的元素拷贝到另一容器
replace       //将容器内指定范围的旧元素修改为新元素
replace_if    //容器内指定范围满足条件的元素替换为新元素
swap          //互换两个容器的元素
*/

copy(iterator brg, iterator end, iterator dest);
replace(iterator beg, iterator end, oldvalue, newvalue);
replace_if(iterator beg, iterator end, _pred, newvalue);
swap(container c1, container c2);