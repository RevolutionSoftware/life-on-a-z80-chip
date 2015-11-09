;;; equates.inc - most stuff is ripped from ion.inc
;;

;----> Safe Memory Areas
; saferam1 = 768 bytes (apdram)
; saferam2 = 531 bytes (statram)
; saferam3 = 128 bytes (textmem)
; saferam4 = 66 bytes (ops)
; saferam5 = 10 bytes (imathptrs)

#define bcall(xxxx)	rst 28h         \ .dw xxxx

#define	bcallz(xxxx)	jr nz,$+5       \ rst 28h       \ .dw xxxx
#define	bcallnz(xxxx)	jr z,$+5        \ rst 28h       \ .dw xxxx
#define	bcallc(xxxx)	jr nc,$+5       \ rst 28h       \ .dw xxxx
#define	bcallnc(xxxx)	jr c,$+5        \ rst 28h       \ .dw xxxx
#define bjump(xxxx)	call 50h        \ .dw xxxx
 .addinstr B_CALL *     EF 3 NOP 1

libstart        = $0004
cmdshad         = $966E
progstart       = $9D95
saferam1        = $86EC
saferam2        = $8A3A
saferam3        = $8508
saferam4        = $8478
saferam5        = $84D3
gbuf            = $9340
grbuf           = $9340
graph_mem       = $9340
_copygbuf       = $486A
_cleargbuf      = $4BD0
_clrlcdf        = $4540
_clrscrf        = $4546
_chksysvar      = $42F1
sram            = saferam1
apd_buf         = saferam1
apdbuf          = saferam1
apdram          = saferam1
statram         = saferam2
statvar         = saferam2
text_mem        = saferam3
textmem         = saferam3
