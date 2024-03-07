// Ques 1: Q1: Imagine you are a teacher observing a classroom with students sitting in rows You have a window that can only show a limited number of students at a time. The students are of different heights, and you want to keep track of the tallest student in your view as you move the window across the rows
// Your task is to record the height of the tallest student within the window as you slide it from left to right. The students within the window are the ones you can see You record the maximum height as you move the window.
// For example, if you have a classroom with students of heights [1.3,-1,-3,5,3,6,7). and your window size is 3, you need to determine the maximum height within the window as it moves from left to right. The maximum heights recorded are [3,3,5,5,6,7]

// Which of the following Node.js code snippets correctly returns the maximum values within a sliding window of size k for the given array nums?

function maxSlidingWindow1(nums, k) {
  const result = [];
  for (let i = 0; i < nums.length - k + 1; i++) {
    result.push(Math.max(...nums.slice(i, i + k)));
  }
  return result;
} //correct

function maxSlidingWindow2(nums, k) {
  const result = [];
  for (let i = 0; i < nums.length - k + 1; i++) {
    result.push(Math.max(...nums.slice(i, k)));
  }
  return result;
}

function maxSlidingWindow3(nums, k) {
  const result = [];
  let maxIndex = nums.indexOf(Math.max(...nums.slice(0, k)));
  result.push(nums[maxIndex]);
  for (let i = k; i < nums.length; i++) {
    if (nums[i] >= nums[maxIndex]) {
      maxIndex = i;
    }
  }
  result.push(nums[maxIndex]);
  return result;
}

function maxSlidingWindow4(nums, k) {
  const result = [];
  for (let i = 0; i < nums.length - k + 1; i++) {
    let max = nums[i];
    for (let j = i + 1; j < i + k; j++) {
      max = Math.max(max, nums[j]);
    }

    result.push(max);
  }
  return result;
} //correct

console.log("Answer Ques 1");
const arr = [2];
console.log(maxSlidingWindow1(arr, 3));
console.log(maxSlidingWindow2(arr, 3));
console.log(maxSlidingWindow3(arr, 3));
console.log(maxSlidingWindow4(arr, 3));
console.log("First and Last Options are Correct");

console.log("Answer Ques 2");
console.log("app.use() option is correct");
// Q2 : app.use();

// Ques3:  Imagine you are planning a team- building event for your company. You have a list of employees, and you want to create all possible combinations of teams to participate in different activities. Each team can consist of one or more employees
// You have three employees, labeled as 1, 2, and 3. You want to generate all possible team combinations, including teams with just one employee and teams with multiple employees. The resulting team combinations are: []. [1], [2], [1, 2], [3], [1, 3], [2.3], and [1, 2, 3]

function generateSubsets1(nums) {
  const subsets = [[]];
  for (const num of nums) {
    const len = subsets.length;
    for (let i = 0; i < len; i++) {
      const subset = subsets[i].slice();
      subset.push(num);
      subsets.push(subset);
    }
  }
  return subsets;
}

function generateSubsets2(nums) {
  const subsets = [];
  for (const num of nums) {
    subsets.forEach((subset) => {
      subsets.push([...subset, num]);
    });
  }
  return [[]].concat(subsets);
}

function generateSubsets3(nums) {
  const subsets = [[]];
  for (const num of nums) {
    const len = subsets.length;
    for (let i = 0; i < len; i++) {
      subsets.push([num]);
    }
  }
  return subsets;
}

function generateSubsets4(nums) {
  const subsets = [[]];
  for (const num of nums) {
    const len = subsets.length;
    for (let i = 0; i < len; i++) {
      subsets.push([...subsets[i], num]);
    }
  }
  return subsets;
}

console.log("Answer Ques 3");
const nums = [1, 2, 3];
console.log(generateSubsets1(nums));
console.log(generateSubsets2(nums));
console.log(generateSubsets3(nums));
console.log(generateSubsets4(nums));
console.log("First and Last Options are Correct");

// Q4: Imagine you are a librarian managing a library with a unique cataloguing system for books. Each book is assigned a positive Integer as its catalogue number. Your task is to find the smallest available catalogue number for a new book.
// You have a list of books with the following catalogue numbers: [1, 2, 0]. To add a new book to the library, you need to determine the smallest available catalogue number that is not already assigned. In this case, the answer would be 3 because it is the smallest positive catalogue number not yet used in your library. Which of the following Node.js code snippets correctly finds the smallest positive integer not present in the given array nums?

function findSmallestMissing1(nums) {
  const sortedNums = nums.sort((a, b) => a - b);
  let missing = 1;
  for (const num of sortedNums) {
    if (num === missing) {
      missing++;
    }
  }
  return missing;
} //correct

function findSmallestMissing2(nums) {
  for (let i = 1; i <= nums.length; i++) {
    if (!nums.includes(i)) {
      return i;
    }
  }
  return nums.length + 1;
} //correct

function findSmallestMissing3(nums) {
  const maxNum = Math.max(...nums);
  for (let i = 1; i <= maxNum + 1; i++) {
    if (!nums.includes(i)) {
      return i;
    }
  }
} //correct

function findSmallestMissing4(nums) {
  let missing = 1;
  while (nums.includes(missing)) {
    missing++;
  }
  return missing;
} //correct

const arr1 = [1, 2, 3, 4, 5];
console.log(findSmallestMissing1(arr1));
console.log(findSmallestMissing2(arr1));
console.log(findSmallestMissing3(arr1));
console.log(findSmallestMissing4(arr1));
console.log("All 4 options are correct");
