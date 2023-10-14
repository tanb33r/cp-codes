Add-Type -AssemblyName System.Windows.Forms
Start-Sleep -Seconds 3
$delayInSeconds = 0.2
$lines = @(
"In this script, we analyze the email addresses from the first list to deduce the most common separator used between the first name and last name. Then, we use this separator to generate email addresses for the data points in the second list, assuming that the most common separator is the likely format used.",
"",
"Please note that this approach makes certain assumptions and simplifications about the email address format based on the provided data. It may not capture all possible variations, but it's a starting point for generating email addresses based on the observed patterns.",
"")
[System.Windows.Forms.SendKeys]::SendWait("+")
Start-Sleep -Seconds $delayInSeconds

foreach ($line in $lines) {
    foreach ($char in $line.ToCharArray()) {
        $escapedChar = if ($char -match '(["`$%+{}])') { "$char" } else { $char }
        [System.Windows.Forms.SendKeys]::SendWait("$escapedChar")
        Start-Sleep -Seconds $delayInSeconds
    }

    [System.Windows.Forms.SendKeys]::SendWait("{ENTER}")
    Start-Sleep -Seconds $delayInSeconds
}
