<?php

$db = 'yourDB';
$username = 'yourUsername';
$host = 'yourHost';
$password = 'yourPasswordDB';

$connect = mysqli_connect($host, $username, $password, $db);

if (!$connect) {
    die('Koneksi Gagal!!');
}
