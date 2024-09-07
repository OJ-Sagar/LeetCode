/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const returnedArray = [];
    let f = false;
    for (let i = 0; i < arr.length; i++) {
        f = fn(arr[i], i);
        if(f){
            returnedArray.push(arr[i]);
        }
    }
    return returnedArray;
};