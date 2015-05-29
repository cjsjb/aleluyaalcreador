\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 4" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key g \major

		R1  |
		g' 4 g' 8 g' 4 g' 4.  |
		fis' 4 e' 8 d' ~ d' 2  |
		b 4 b 8 b 4 b 4.  |
%% 5
		b 4 d' 8 fis' ~ fis' 2  |
		c' 4 c' 8 c' 4 c' 4.  |
		d' 4 d' 8 d' 4 d' 4.  |
		d' 2 e' 4 c'  |
		d' 1  |
%% 10
		R1*7  |
		g' 4 g' 8 g' 4 g' 4.  |
		fis' 4 e' 8 d' ~ d' 2  |
		b 4 b 8 b 4 b 4.  |
%% 20
		b 4 d' 8 fis' ~ fis' 2  |
		c' 4 c' 8 c' 4 c' 4.  |
		d' 4 d' 8 d' 4 d' 4.  |
		d' 2 e' 4 c'  |
		d' 1  |
		\bar "|."
	} % Voice
	\lyricsto "voice 4" \new Lyrics \lyricmode {
		¡A -- le -- lu -- ya al crea -- dor,
		a -- le -- lu -- "ya al" sal -- va -- dor,
		a -- le -- lu -- ya, a -- le -- lu -- ya,
		a -- le -- lu -- ya!

		¡A -- le -- lu -- ya al crea -- dor,
		a -- le -- lu -- "ya al" sal -- va -- dor,
		a -- le -- lu -- ya, a -- le -- lu -- ya,
		a -- le -- lu -- ya!
	}
>> % Staff ends
