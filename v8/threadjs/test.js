start(() => {
    for (var i = 0; i < 4; i++) {
        print("a");
        sleep(100);
    }
})

for (var i = 0; i < 3; i++) {
    print("b");
    sleep(100);
}