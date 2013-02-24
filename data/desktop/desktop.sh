#!/bin/sh

echo_mime () {
	printf "$i;";
}

MIMETYPES=`grep -v ^# $1`
printf MimeType=;
for i in $MIMETYPES ; do
	echo_mime;
done

echo ""
echo ""
echo "Actions=Play;Previous;Next;"
echo ""
echo "[Desktop Action Play]"
echo "Exec=parole --play"
echo "_Name=Play/Pause"
echo "Icon=media-playback-start"
echo "OnlyShowIn=Unity;"
echo ""
echo "[Desktop Action Previous]"
echo "Exec=parole --previous-track"
echo "_Name=Previous Track"
echo "Icon=media-skip-backward"
echo "OnlyShowIn=Unity;"
echo ""
echo "[Desktop Action Next]"
echo "Exec=parole --next-track"
echo "_Name=Next Track"
echo "Icon=media-skip-forward"
echo "OnlyShowIn=Unity;"
echo ""