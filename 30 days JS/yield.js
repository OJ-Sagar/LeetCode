var fibGenerator = (()=> {
    let a=0,b=1;
    while(true){
        yield a;
        [a,b] =[b,a+b];
    }
});
let x = fibGenerator();
console.log(x);