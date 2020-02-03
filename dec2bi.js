function Dec2B(x){
    let str=''
    while(x>0){
        str=(x%2)+str
        x=Math.floor(x/2)
    }
    console.log(str)
}

Dec2B(13)