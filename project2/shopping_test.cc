#include "./shopping.h"
#include <gtest/gtest.h>

// TEST (testCaseName, testName){
//   ... test body ...
// }


TEST(shopping_list_test, goods_object_test) {
  Goods testobject;

  // Test 1 - Initalize
  EXPECT_EQ(testobject.GetIndex(), 0);
  ASSERT_EQ(testobject.GetPrice(), 0);

  // Test 2 - Set Member Variable
  testobject.SetGoodsInfo(1, 1000);
  EXPECT_EQ(testobject.GetIndex(), 1);
  ASSERT_EQ(testobject.GetPrice(), 1000);
}

TEST(shopping_list_test, shopping_object_test) {
  Shopping shopping_object;
  Goods goods_test_object1;
  Goods goods_test_object2;
  Goods goods_test_object3;
  Goods goods_test_object4;
  Goods goods_test_object5;

  // Make 5 Sample datas
  goods_test_object1.SetGoodsInfo(3, 2500);
  goods_test_object2.SetGoodsInfo(1, 10000);
  goods_test_object3.SetGoodsInfo(5, 4500);
  goods_test_object4.SetGoodsInfo(4, 49900);
  goods_test_object5.SetGoodsInfo(2, 30000);

  shopping_object.PushList(goods_test_object1);
  shopping_object.PushList(goods_test_object2);
  shopping_object.PushList(goods_test_object3);
  shopping_object.PushList(goods_test_object4);
  shopping_object.PushList(goods_test_object5);

  // Test 0 - Last element test
  EXPECT_EQ((shopping_object.GetLastElement()).GetPrice(), 30000);
  ASSERT_EQ((shopping_object.GetLastElement()).GetIndex(), 2);

  // Test 1 - Sort by Price
  shopping_object.SortByPrice();

  // Price of last element is 49900
  EXPECT_EQ((shopping_object.GetLastElement()).GetPrice(), 49900);
  ASSERT_EQ((shopping_object.GetLastElement()).GetIndex(), 4);

  // Test 2 - Sort by Index
  shopping_object.SortByIndex();

  // Index of last element is 5
  EXPECT_EQ((shopping_object.GetLastElement()).GetPrice(), 4500);
  ASSERT_EQ((shopping_object.GetLastElement()).GetIndex(), 5);
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
