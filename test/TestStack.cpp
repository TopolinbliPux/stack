TEST(TDynamicStack, you_can_set_the_default_stack)
{
	ASSERT_NO_THROW(TDynamicStack<int> st);
}

TEST(TDynamicStack, Get_the_stack_size)
{
	TDynamicStack<int> st;
	st.Push(1);
	st.Push(2);
	size_t size1 = st.size();
	EXPECT_EX(size1, 2);
}

TEST(TDynamicStack, You_can_copy_the_stack)
{
	TDynamicStack<int> st;
	ASSERT_NO_THROW(TDynamicStack<int> st1(st));
}


TEST(TDynamicStack, Checking_the_IsEmpy_method)
{
	TDynamicStack<int> st;
	ASSERT_TRUE(st.isEmpty());
}

TEST(TDynamicStack, Checking_the_IsFull_method)
{
	TDynamicStack<int> st;
	st.Push(1);
	ASSERT_TRUE(st.isFull());
}

TEST(TDynamicStack, Checking_the_Push_method)
{
	TDynamicStack<int> st;
	st.Push(1);
	ASSERT_EQ(1.st.Top());
}

TEST(TDynamicStack, can_pop)
{
	TDynamicStack<int> st;
	st.Push(1);
	ASSERT_NO_THROW(st.Pop());
}
////////

TEST(TDynamicStack, throw_pop_with_empty) {
	TDynamicStack<int> st;
	ASSERT_ANY_THROW(st.Pop());
}

TEST(TDynamicStack, can_compare_stack) {
	TDynamicStack<int> st1;
	st1.Push(1);
	TDynamicStack<int> st2;
	st2.Push(1);
	ASSERT_TRUE(s1 == s2);
}

TEST(TDynamicStack, can_asign_stack) {
	TDynamicStack<int> st1;
	st1.Push(1);
	TDynamicStack<int> st2;
	st2 = st1;
	ASSERT_EQ(1, st2.Top());
}

