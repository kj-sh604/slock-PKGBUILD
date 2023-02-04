# Maintainer: Sergej Pupykin <pupykin.s+arch@gmail.com>
# Maintainer: T.J. Townsend <blakkheim@archlinux.org>
# Contributor: Sebastian A. Liem <sebastian at liem dot se>

pkgname=slock
pkgver=1.5
pkgrel=1
pkgdesc="A simple screen locker for X"
arch=('x86_64')
url="https://tools.suckless.org/slock"
license=('MIT')
depends=('libxext' 'libxrandr')
source=("https://aedrielkylejavier.me/assets/$pkgname-$pkgver.tar.gz")
sha256sums=('d1f9cb0a58985c77a80a737fbd09b5b82e41ff08f0d1a6b2824db335c3bfa10b')

prepare() {
  cd "$srcdir/slock-$pkgver"
  sed -i 's|static const char \*group = "nogroup";|static const char *group = "nobody";|' config.def.h
  sed -ri 's/((CPP|C|LD)FLAGS) =/\1 +=/g' config.mk
}

build() {
  cd "$srcdir/slock-$pkgver"
  make X11INC=/usr/include/X11 X11LIB=/usr/lib/X11
}

package() {
  cd "$srcdir/slock-$pkgver"
  make PREFIX=/usr DESTDIR="$pkgdir" install
  install -m644 -D LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
}
