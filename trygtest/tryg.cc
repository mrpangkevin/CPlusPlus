#include <gtest/gtest.h>
#include "fun.h"
//using namespace std;

class GlobalTestEnvironment : public testing::Environment{
public:
    void SetUp(){
        printf("SetUp...\n");
    }
    void TearDown(){
        printf("TearDown...\n");
    }
};

class MyTestSuite : public testing::Test{
public:
    static void SetUpTestCase()
    {
        printf("SetUpTestCase...\n");
    }
    static void TearDownTestCase()
    {
        printf("TearDownTestCase\n");
    }
    void SetUp(){
        printf("TestSuite SetUp...\n");
    }
    void TearDown(){
        printf("TestSuite TearDown...\n");
    }
};
class IsPrimeParamTest : public::testing::TestWithParam<int>
{

};

bool MutuallyPrime(int m, int n)
{
    return Foo(m , n) > 1;
}
testing::AssertionResult AssertFoo(const char* m_expr, const char* n_expr, const char* k_expr, int m, int n, int k) {
    if (Foo(m, n) == k)
        return testing::AssertionSuccess();
    testing::Message msg;
    msg << m_expr << " 和 " << n_expr << " 的最大公约数应该是：" << Foo(m, n) << " 而不是：" << k_expr;
    return testing::AssertionFailure(msg);
}

TEST(suite1,test1){
    EXPECT_EQ(add(2,3),5);
//    fun();
//    EXPECT_EQ(add(2,3),5);
    for(int x=0, y=0; x<10; x++,y++)  
    {
        EXPECT_EQ(add(x,y), x+y) << "x:"<<x<<"y:"<<y<<"="<<x+y;
    }
//    EXPECT_STREQ("abc","abc");
//    //ADD_FAILURE()<<"Sorry";
//    //SUCCEED();
//    EXPECT_ANY_THROW(Foo(10,0));
//    EXPECT_EQ(Foo(20,4),2);
}
TEST(suite1,test2){
//    EXPECT_EQ(add(2,3),5);
//    fun();
//    EXPECT_EQ(add(2,3),5);
//    for(int x=0, y=0; x<10; x++,y++)  
//    {
//        EXPECT_EQ(add(x,y), x+y) << "x:"<<x<<"y:"<<y<<"="<<x+y;
//    }
//    EXPECT_STREQ("abc","abc");
//    //ADD_FAILURE()<<"Sorry";
//    //SUCCEED();
//    EXPECT_ANY_THROW(Foo(10,0));
//    EXPECT_EQ(Foo(20,4),2);
    int m=5, n=6;
    EXPECT_PRED2(MutuallyPrime,m,n)    ;
    EXPECT_PRED2(MutuallyPrime,m,n)    ;
    EXPECT_PRED_FORMAT3(AssertFoo,m,n,2)    ;
}
TEST_F(MyTestSuite,Test1){
    EXPECT_EQ(add(2,3),5);
    printf("TEST_F\n");
}
TEST_F(MyTestSuite,Test2){
    EXPECT_EQ(add(2,3),5);
    printf("TEST_F\n");
}
TEST_F(MyTestSuite,Test3)
{
    EXPECT_TRUE(IsPrime(3));
    EXPECT_TRUE(IsPrime(5));
    EXPECT_TRUE(IsPrime(11));
    EXPECT_TRUE(IsPrime(23));
    EXPECT_TRUE(IsPrime(24));
    EXPECT_TRUE(IsPrime(17));
}

TEST_P(IsPrimeParamTest, HandleTrueReturn)
{
    int n =  GetParam();
    EXPECT_TRUE(IsPrime(n));
}

INSTANTIATE_TEST_CASE_P(TrueReturn, IsPrimeParamTest, testing::Values(3, 5, 11, 23, 17));
int main(int argc,char **argv){
  testing::AddGlobalTestEnvironment(new GlobalTestEnvironment);
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
