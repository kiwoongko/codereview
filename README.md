# GoogleTest Simple UnitTest Code
---
## 1. Install GoogleTest
- Test Environment : Ubuntu 16.04 (Dockerized)

```
# apt-get update
# apt-get upgrade
# apt-get install gcc g++ make cmake libgtest-dev
# cd /usr/src/gtest
# cmake CMakeLists.txt
# make
# cp *.a /usr/lib
```

## 2. Syntax of Google Test (Simplified Manual)
### Test body of Google Test
- Basic

```
TEST(TestName, TestCaseName){
	... Test Assertions ...
}

```


### Basic Assertions
- This contents from [GoogleTest Primer](https://github.com/google/googletest/blob/master/googletest/docs/primer.md#assertions).

- Boolean Assertions

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** 
|:--------------------|:-----------------------|:-------------
| ASSERT\_TRUE(_condition_);  | EXPECT\_TRUE(_condition_);   | _condition_ is true 
| ASSERT\_FALSE(_condition_); | EXPECT\_FALSE(_condition_);  | _condition_ is false 

- Binary Comparison

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** |
|:--------------------|:-----------------------|:-------------|
|ASSERT\_EQ(_val1_, _val2_);|EXPECT\_EQ(_val1_, _val2_);| _val1_ == _val2_ |
|ASSERT\_NE(_val1_, _val2_);|EXPECT\_NE(_val1_, _val2_);| _val1_ != _val2_ |
|ASSERT\_LT(_val1_, _val2_);|EXPECT\_LT(_val1_, _val2_);| _val1_ < _val2_ |
|ASSERT\_LE(_val1_, _val2_);|EXPECT\_LE(_val1_, _val2_);| _val1_ <= _val2_ |
|ASSERT\_GT(_val1_, _val2_);|EXPECT\_GT(_val1_, _val2_);| _val1_ > _val2_ |
|ASSERT\_GE(_val1_, _val2_);|EXPECT\_GE(_val1_, _val2_);| _val1_ >= _val2_ |

- String Comparison

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** |
|:--------------------|:-----------------------|:-------------|
| ASSERT\_STREQ(_str1_, _str2_);    | EXPECT\_STREQ(_str1_, _str2_);     | the two C strings have the same content |
| ASSERT\_STRNE(_str1_, _str2_;    | EXPECT\_STRNE(_str1_, _str2_);     | the two C strings have different content |
| ASSERT\_STRCASEEQ(_str1_, _str2_);| EXPECT\_STRCASEEQ(_str1_, _str2_); | the two C strings have the same content, ignoring case |
| ASSERT\_STRCASENE(_str1_, _str2_);| EXPECT\_STRCASENE(_str1_, _str2_); | the two C strings have different content, ignoring case |

- [Advanced Assertions](https://github.com/google/googletest/blob/master/googletest/docs/advanced.md)

## 3. Snap Shot
- Succeed

![Succeed](https://raw.githubusercontent.com/KAIST-IS593-WEBSEC/google_test_samples/master/image/success.png)

- Failed

![Failed](https://raw.githubusercontent.com/KAIST-IS593-WEBSEC/google_test_samples/master/image/fail.png)

### 4. cpplint.py
- Coding style check Python script.
- Following [Google C++ Code Guideline](https://google.github.io/styleguide/cppguide.html)
- How to use : `python cpplint.py [path]`

```
# python cpplint.py ./project1/priority_queue.cc
./project1/priority_queue.cc:0:  No copyright message found.  You should have a line: "Copyright [year] <Copyright Owner>"  [legal/copyright] [5]
./project1/priority_queue.cc:1:  Include the directory when naming .h files  [build/include] [4]
./project1/priority_queue.cc:4:  Missing space before {  [whitespace/braces] [5]
./project1/priority_queue.cc:8:  Missing space before {  [whitespace/braces] [5]
./project1/priority_queue.cc:12:  Missing space before {  [whitespace/braces] [5]
./project1/priority_queue.cc:17:  Missing space before {  [whitespace/braces] [5]
./project1/priority_queue.cc:22:  Missing space before {  [whitespace/braces] [5]
./project1/priority_queue.cc:27:  Missing space before {  [whitespace/braces] [5]
./project1/priority_queue.cc:32:  Missing space before {  [whitespace/braces] [5]
Done processing ./project1/priority_queue.cc
Total errors found: 9
```

## Reference
- [Getting started with Google Test (GTest) on Ubuntu](https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/)
- [GoogleTest Documentation](https://github.com/google/googletest/tree/master/googletest/docs)
