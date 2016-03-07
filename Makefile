CC=gcc

i2cHoneywellHumidity:
	$(CC) i2cHoneywellHumidity.c  -o i2cHoneywellHumidity

clean:
	rm i2cHoneywellHumidity
