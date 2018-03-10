This is a Yescrypt CPU miner supporting R16. It has been forked from [here](https://github.com/crypto-jeronimo/cpuminer-yescrypt) (which is a fork of Jeff Garzik's reference [cpuminer](https://github.com/noncepool/cpuminer-yescrypt)).

License: GPLv2.  See COPYING for details.

Windows Binary:

Dependencies:

	libcurl			[http://curl.haxx.se/libcurl/](http://curl.haxx.se/libcurl/)
	jansson			[http://www.digip.org/jansson/](http://www.digip.org/jansson/)
		(jansson is included in-tree)

Install Build Dependencies on Debian, Ubuntu and other APT-based distros:

```
sudo apt-get install build-essential libcurl4-openssl-dev autotools-dev automake
```

Install Build Dependencies on Fedora, RHEL, CentOS and other yum-based distros:

```
sudo yum install gcc make curl-devel automake
```

Install Build Dependencies on OpenSUSE and other ZYpp-based distros:

```
sudo zypper in gcc make libcurl-devel automake
```

Basic *nix build instructions:

```
./autogen.sh	# Only needed if building from git repo.
./nomacro.pl	# Only needed if building on Mac OS X or with Clang.
./configure CFLAGS="-O3" # For ARM-based devices, please, use
                         # CFLAGS = -O3 -funroll-loops -fomit-frame-pointer
                         # Alternatively, check out the _arm_ branch of this
                         # repository, and build the project from there.
make
```

For more advanced build instructions and relevant details please refer to [these](https://github.com/crypto-jeronimo/cpuminer-yescrypt-r16/blob/master/INSTALL.md) [two](https://github.com/crypto-jeronimo/cpuminer-yescrypt-r16/blob/master/INSTALL) files.

Usage instructions:  Run `minerd --help` to see options.

_Note:_ Mining to online wallet addresses, including exchanges, may result in
loss of coins due to the specifics of confirmation of newly-mined coins.

Connecting through a proxy:  Use the `--proxy` option.

To use a SOCKS proxy, add a `socks4://` or `socks5://` prefix to the proxy host.

Protocols `socks4a` and `socks5h`, enabling remote name resolving, are also
available from `libcurl 7.18.0` on.

If no protocol is specified, the proxy is assumed to be a HTTP proxy.

When the `--proxy` option is not used, the program honors the `http_proxy`
and `all_proxy` environment variables.

Also many issues and FAQs are covered in the dedicated forum thread:

* [Original Pooler CPUMiner Bitcointalk Thread](https://bitcointalk.org/index.php?topic=55038.0)

If you have found this software more useful than other alternatives available,
please, feel free to donate:

- **BTC:** 1HKWV5t4KGUwybVHNUaaY9TXFSoBvoaSiP
- **ETH:** 0xF17e490B391E17BE2D14BFfaA831ab8966d2e689
- **LTC:** LNSEJzT8byYasZGd4f9c3DgtMbmexnXHdy
- **BCH:** 1AVXvPBrNdhTdwBN5VQT5LSHa7sEzMSia4
- **XEM:** NB3NDXRBOLEJLPT6MP6JAD4EZEOX5TFLDG3WR7JJ
- **MONA:** MPq54r8XTwtB2qmAeVqayy27ZCaPt845B6
- **KOTO:** k1GHJkvxLQocac94MFBbKAsdUvNbFdFWUyE
- **NEET:** NYaP7eEsDdALK5eHPZkYk1d8pBLyGvq9L1

After all, those morning cups of coffee need to come from somewhere, in order to
enable writing efficient code :)

Thanks and happy mining!