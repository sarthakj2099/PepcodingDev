
function reducer(a,b){
    return a+b;
}

Array.prototype.reduce=function (accumulator,currentValue){
    if(currentValue==null)
        currentValue =0;

    for(let i=0;i<this.length;i++)
        currentValue=accumulator(this[i],currentValue);
    return currentValue;
}  
let array1=[1,2,3,4];
console.log(array1.reduce( reducer));
console.log(array1.reduce( reducer,5));
