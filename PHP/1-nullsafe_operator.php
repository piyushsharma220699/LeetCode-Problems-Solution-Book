<?php

// class Order{
//     public ?string $item;
// }

// class Transaction{
//     public ?Order $order;
// }

// function getItem(?Transaction $transaction): ?string
// {
//     // if($transaction != null){
//     //     if($transaction->order != null){
//     //         return $transaction->order->item;
//     //     }
//     // }

//     return isset($transaction->order->item) ? $transaction->order->item : 'N/A';

//     // return null;
// }

// echo getItem(null);

class Order{
    public ?string $item;
}

class Transaction{
    public ?Order $order;
}

function getItem(?Transaction $transaction): ?string
{
    return $transaction?->order?->item;
}

echo getItem(null);