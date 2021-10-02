var findMedianSortedArrays = function(nums1, nums2) {
    let concat = nums1.concat(nums2);
    concat.sort((a,b)=>a-b);
    let len = concat.length;
    
    if(len<=1){
        return concat[0];
    }
    for(let i=0; i<len; i++){
        let avg = len/2;
        if(len%2 !== 0){
            let z = Math.floor(avg);
            return concat[z]
        }else{
            let x = avg-1;
            let evenavg = (concat[avg]+concat[x])/2
            return evenavg;
        }
    }
};