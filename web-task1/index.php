<?php

$ip = $_POST['ip'];

$blacklist = [';','&','sudo','touch','curl','wget','gcc','python','mkdir'];
foreach ($blacklist as $char) {
    if (strpos($ip, $char) !== false) {
        die("Xatolik: Noto'g'ri belgi topildi!");
    }
}

?>
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>Ping tool</title>
	<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">
</head>
<body>

	<div class="container my-5">
		<div class="row">
			<div class="col-6 offset-3">
				<form method="post">
					<input type="text" name="ip" class="form-control"><br>
					<button title="submit" class="btn btn-info">send</button>
				</form>
			
			<div class="my-5">
				<?=system("ping -c 2  {$ip}")?>
			</div>
			</div>
		</div>
	</div>
</body>
</html>