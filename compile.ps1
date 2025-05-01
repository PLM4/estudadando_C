# Cria a pasta build se não existir
New-Item -ItemType Directory -Force -Path build | Out-Null

# Compila todos os arquivos .c
Get-ChildItem -Path src -Recurse -Filter *.c | ForEach-Object {
    $output = "build/" + $_.BaseName + ".exe"
    gcc $_.FullName -o $output
    Write-Host "Compilado: $($_.FullName) -> $output"
}