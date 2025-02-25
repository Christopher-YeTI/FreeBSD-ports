PORTNAME=	vigil
DISTVERSIONPREFIX=	v
DISTVERSION=	1.26.3
PORTREVISION=	12
CATEGORIES=	www

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Monitor distributed infrastructure and send alerts (Slack, SMS, etc.)
WWW=		https://github.com/valeriansaliou/vigil

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	gmake:devel/gmake
LIB_DEPENDS=	libzstd.so:archivers/zstd

USES=		cargo perl5 pkgconfig
USE_PERL5=	build

USE_GITHUB=	yes
GH_ACCOUNT=	valeriansaliou

CARGO_CRATES=	actix-codec-0.5.1 \
		actix-files-0.6.2 \
		actix-http-3.4.0 \
		actix-macros-0.2.4 \
		actix-router-0.5.1 \
		actix-rt-2.9.0 \
		actix-server-2.3.0 \
		actix-service-2.0.2 \
		actix-utils-3.0.1 \
		actix-web-4.4.0 \
		actix-web-codegen-4.2.2 \
		actix-web-httpauth-0.8.0 \
		addr2line-0.21.0 \
		adler-1.0.2 \
		ahash-0.8.3 \
		aho-corasick-1.0.5 \
		alloc-no-stdlib-2.0.4 \
		alloc-stdlib-0.2.2 \
		anstream-0.5.0 \
		anstyle-1.0.2 \
		anstyle-parse-0.2.1 \
		anstyle-query-1.0.0 \
		anstyle-wincon-2.1.0 \
		askama_escape-0.10.3 \
		async-compression-0.4.2 \
		autocfg-1.1.0 \
		backtrace-0.3.69 \
		base64-0.13.1 \
		base64-0.21.3 \
		bitflags-1.3.2 \
		bitflags-2.4.0 \
		block-buffer-0.10.4 \
		brotli-3.3.4 \
		brotli-decompressor-2.3.4 \
		bstr-1.6.2 \
		bumpalo-3.13.0 \
		bytes-1.4.0 \
		bytestring-1.3.0 \
		cc-1.0.83 \
		cfg-if-1.0.0 \
		clap-4.4.2 \
		clap_builder-4.4.2 \
		clap_lex-0.5.1 \
		colorchoice-1.0.0 \
		convert_case-0.4.0 \
		cookie-0.16.2 \
		core-foundation-0.9.3 \
		core-foundation-sys-0.8.4 \
		cpufeatures-0.2.9 \
		crc32fast-1.3.2 \
		crypto-common-0.1.6 \
		deranged-0.3.8 \
		derive_more-0.99.17 \
		digest-0.10.7 \
		dunce-1.0.4 \
		email-encoding-0.2.0 \
		email_address-0.2.4 \
		encoding_rs-0.8.33 \
		envsubst-0.2.1 \
		equivalent-1.0.1 \
		errno-0.3.3 \
		errno-dragonfly-0.1.2 \
		fastrand-1.9.0 \
		fastrand-2.0.0 \
		flate2-1.0.27 \
		fnv-1.0.7 \
		foreign-types-0.3.2 \
		foreign-types-shared-0.1.1 \
		form_urlencoded-1.2.0 \
		fsio-0.4.0 \
		futures-channel-0.3.28 \
		futures-core-0.3.28 \
		futures-io-0.3.28 \
		futures-sink-0.3.28 \
		futures-task-0.3.28 \
		futures-util-0.3.28 \
		generic-array-0.14.7 \
		getrandom-0.2.10 \
		gimli-0.28.0 \
		globset-0.4.13 \
		globwalk-0.8.1 \
		h2-0.3.21 \
		hashbrown-0.12.3 \
		hashbrown-0.14.0 \
		hermit-abi-0.3.2 \
		hostname-0.3.1 \
		http-0.2.9 \
		http-body-0.4.5 \
		http-range-0.1.5 \
		http-serde-1.1.3 \
		httparse-1.8.0 \
		httpdate-1.0.3 \
		hyper-0.14.27 \
		hyper-tls-0.5.0 \
		idna-0.1.5 \
		idna-0.3.0 \
		idna-0.4.0 \
		ignore-0.4.20 \
		indexmap-1.9.3 \
		indexmap-2.0.0 \
		instant-0.1.12 \
		ipnet-2.8.0 \
		itoa-1.0.9 \
		jobserver-0.1.26 \
		js-sys-0.3.64 \
		language-tags-0.3.2 \
		lazy_static-1.4.0 \
		lettre-0.10.4 \
		libc-0.2.147 \
		libstrophe-0.17.0 \
		libstrophe-sys-bindgen-5.0.0 \
		linux-raw-sys-0.4.5 \
		local-channel-0.1.3 \
		local-waker-0.1.3 \
		lock_api-0.4.10 \
		log-0.4.20 \
		match_cfg-0.1.0 \
		matches-0.1.10 \
		memchr-2.6.2 \
		mime-0.3.17 \
		mime_guess-2.0.4 \
		minimal-lexical-0.2.1 \
		miniz_oxide-0.7.1 \
		mio-0.8.8 \
		native-tls-0.2.11 \
		nom-7.1.3 \
		num-traits-0.2.16 \
		num_cpus-1.16.0 \
		object-0.32.0 \
		once_cell-1.18.0 \
		openssl-0.10.57 \
		openssl-macros-0.1.1 \
		openssl-probe-0.1.5 \
		openssl-src-111.27.0+1.1.1v \
		openssl-sys-0.9.92 \
		parking_lot-0.12.1 \
		parking_lot_core-0.9.8 \
		paste-1.0.14 \
		percent-encoding-1.0.1 \
		percent-encoding-2.3.0 \
		pest-2.7.3 \
		pest_derive-2.7.3 \
		pest_generator-2.7.3 \
		pest_meta-2.7.3 \
		pin-project-lite-0.2.13 \
		pin-utils-0.1.0 \
		ping-0.4.1 \
		pkg-config-0.3.27 \
		ppv-lite86-0.2.17 \
		proc-macro2-1.0.66 \
		quote-1.0.33 \
		quoted_printable-0.4.8 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.6.4 \
		redox_syscall-0.3.5 \
		regex-1.9.4 \
		regex-automata-0.3.7 \
		regex-syntax-0.7.5 \
		reqwest-0.11.20 \
		run_script-0.10.1 \
		rustc-demangle-0.1.23 \
		rustc_version-0.4.0 \
		rustix-0.38.11 \
		ryu-1.0.15 \
		same-file-1.0.6 \
		schannel-0.1.22 \
		scopeguard-1.2.0 \
		security-framework-2.9.2 \
		security-framework-sys-2.9.1 \
		semver-1.0.18 \
		serde-1.0.188 \
		serde_derive-1.0.188 \
		serde_json-1.0.105 \
		serde_spanned-0.6.3 \
		serde_urlencoded-0.7.1 \
		sha1-0.10.5 \
		sha2-0.10.7 \
		signal-hook-registry-1.4.1 \
		slab-0.4.9 \
		smallvec-1.11.0 \
		socket2-0.4.9 \
		socket2-0.5.3 \
		strsim-0.10.0 \
		syn-1.0.109 \
		syn-2.0.29 \
		tempfile-3.8.0 \
		tera-1.19.0 \
		thiserror-1.0.47 \
		thiserror-impl-1.0.47 \
		thread_local-1.1.4 \
		time-0.3.28 \
		time-core-0.1.1 \
		time-macros-0.2.14 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.1 \
		tokio-1.32.0 \
		tokio-native-tls-0.3.1 \
		tokio-util-0.7.8 \
		toml-0.7.6 \
		toml_datetime-0.6.3 \
		toml_edit-0.19.14 \
		tower-service-0.3.2 \
		tracing-0.1.37 \
		tracing-core-0.1.31 \
		try-lock-0.2.4 \
		typenum-1.16.0 \
		ucd-trie-0.1.6 \
		unic-char-property-0.9.0 \
		unic-char-range-0.9.0 \
		unic-common-0.9.0 \
		unic-segment-0.9.0 \
		unic-ucd-segment-0.9.0 \
		unic-ucd-version-0.9.0 \
		unicase-2.7.0 \
		unicode-bidi-0.3.13 \
		unicode-ident-1.0.11 \
		unicode-normalization-0.1.22 \
		url-1.7.2 \
		url-2.4.1 \
		url_serde-0.2.0 \
		utf8parse-0.2.1 \
		uuid-1.4.1 \
		vcpkg-0.2.15 \
		version_check-0.9.4 \
		walkdir-2.3.3 \
		want-0.3.1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.87 \
		wasm-bindgen-backend-0.2.87 \
		wasm-bindgen-futures-0.4.37 \
		wasm-bindgen-macro-0.2.87 \
		wasm-bindgen-macro-support-0.2.87 \
		wasm-bindgen-shared-0.2.87 \
		web-sys-0.3.64 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-sys-0.48.0 \
		windows-targets-0.48.5 \
		windows_aarch64_gnullvm-0.48.5 \
		windows_aarch64_msvc-0.48.5 \
		windows_i686_gnu-0.48.5 \
		windows_i686_msvc-0.48.5 \
		windows_x86_64_gnu-0.48.5 \
		windows_x86_64_gnullvm-0.48.5 \
		windows_x86_64_msvc-0.48.5 \
		winnow-0.5.15 \
		winreg-0.50.0 \
		zstd-0.12.4 \
		zstd-safe-6.0.6 \
		zstd-sys-2.0.8+zstd.1.5.5

OPENSSLINC=	/usr/include
OPENSSLLIB=	/usr/lib

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
