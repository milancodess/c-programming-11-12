<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Simple Interest Calculator</title>
</head>
<body>

    <h2>Simple Interest Calculator</h2>

    <form action="interest.php" method="post" >
        <label for="principal">Principal Amount: </label>
        <input type="number" name="principal" required><br><br>

        <label for="rate">Rate of Interest: </label>
        <input type="number" name="rate" step="0.01" required><br><br>

        <label for="time">Time: </label>
        <input type="number" name="time" required><br><br>

        <input type="submit" name="calculate" value="Calculate">
    </form>
    <?php
        $p = $_POST["principal"];
        $r = $_POST["rate"];
        $t = $_POST["time"];

            $si = ($p * $r * $t) / 100;
            echo "Simple Interest: $si";
    ?>
</body>
</html>
