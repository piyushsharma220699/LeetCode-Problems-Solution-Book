<?php 
/* Dibuat Pada Tanggal : 03-10-2021
 * Nama project		: Covid api From kawalcorona

 * Dibuat Oleh ♡ Yoppy0x100 
*/

class Solution 
{
    public function twoSum($nums, $target)
    {
        $res = [];
        for($i=0;$i<count($nums);$i++) {
            for($ii=0;$ii<count($nums);$ii++) {
                $total = $nums[$i] + $nums[$ii];
                // echo $nums[$i] . '+' . $nums[$ii] . PHP_EOL;
                if($total == $target) {
                    $res[] = '[' . $i . ',' . $ii . ']';
                }
            }
        }
        return $res;
    }
}

$cls = new Solution();
print_r($cls->twoSum([1,2,3,4,5], 7));