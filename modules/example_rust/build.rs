fn main() {
    cxx_build::bridge("src/lib.rs")
        .std("c++14")
        .compile("rust-bridge-demo");

    println!("cargo:rerun-if-changed=src/main.rs");
    //println!("cargo:rerun-if-changed=src/blobstore.cc");
    //println!("cargo:rerun-if-changed=include/blobstore.h");
}
