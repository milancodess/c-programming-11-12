<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Top Scorer in Computer</title>
</head>
<body>

    <h2>Highest Marks in Computer</h2>

    <?php
    $servername = "localhost";
    $username = "milan@69";
    $password = "milan@69";
    $database = "db"; 
    
    $conn = new mysqli($servername, $username, $password, $database);

    if ($conn->connect_error) {
        die("<p style='color: red;'>Connection failed: " . $conn->connect_error . "</p>");
    }

    $sql = "SELECT name, marks FROM marks WHERE subject = 'Computer' ORDER BY marks DESC LIMIT 1";
    $result = $conn->query($sql);

    if ($result->num_rows > 0) {
        $row = $result->fetch_assoc();
        echo "<p><strong>Top Student:</strong> " . htmlspecialchars($row["name"]) . "</p>";
        echo "<p><strong>Highest Marks in Computer:</strong> " . htmlspecialchars($row["marks"]) . "</p>";
    } else {
        echo "<p>No records found!</p>";
    }

    $conn->close();
    ?>

</body>
</html>
