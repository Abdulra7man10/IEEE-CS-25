function isOmnipresent(arr, val) {
  for (let i = 0; i < arr.length; i++)
    if (!arr[i].includes(val))
      return false;
  return true;
}
