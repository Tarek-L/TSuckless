patches=(
    "https://st.suckless.org/patches/ligatures/0.9.2/st-ligatures-20241226-0.9.2.diff"
    "https://st.suckless.org/patches/clipboard/st-clipboard-0.8.3.diff"
    "https://st.suckless.org/patches/alpha/st-alpha-20240814-a0274bc.diff"
    "https://st.suckless.org/patches/boxdraw/st-boxdraw_v2-0.8.5.diff"
    "https://st.suckless.org/patches/columnredraw/st-columnredraw-20241119-fb8569b.diff"
    "https://st.suckless.org/patches/font2/st-font2-0.8.5.diff"
    "https://st.suckless.org/patches/anygeometry/st-anygeometry-0.8.1.diff"
    )

for patch in "${patches[@]}"; do
    curl -O "$patch"
done
