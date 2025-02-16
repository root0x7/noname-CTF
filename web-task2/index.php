<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>WIFI</title>
	<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">
</head>
<body>
		

		<div class="container my-5">
		<div class="row">
			<div class="col-6 offset-3">
				<form method="post">
					<input type="text" name="password" class="form-control"><br>
					<button title="submit" class="btn btn-info">check</button>
				</form>
			
			<div class="my-5">
				<?php
				if(isset($_POST)){
					if ($_POST['password'] == '1' ) {
						?>
						<div class="alert alert-success" role="alert">
  							muvoffaqiyatli. bayroqni topish uchun yaxshiroq qarang
  							<!-- flag{brute_passwprd!} -->
						</div>
						<?php
					}
					else{
						?>
						<div class="alert alert-danger" role="alert">
  							Error
						</div>
					<?php
					}
				}
				 ?>	
			</div>
			</div>
		</div>
	</div>
</body>
</html>