function getAbsSum(arr) {
  return arr.reduce((acc, el) => {
    return acc + Math.abs(el);
  }, 0);
}