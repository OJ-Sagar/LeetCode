/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function(promise1, promise2) {
    const val1 = await promise1;
    const val2 = await promise2;
    let promise = new Promise((res) =>{
        res(val1+val2);
    })
    
    return promise;
    
    
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */