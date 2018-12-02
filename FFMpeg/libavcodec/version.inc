(*
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *)

{$ifndef AVCODEC_VERSION_H}
{$define AVCODEC_VERSION_H}

(**
 * @file
 * @ingroup libavc
 * Libavcodec version macros.
 *)

// #include "LIBAVCODEC/version.h"


const
 LIBAVCODEC_VERSION_MAJOR    =   57;
 LIBAVCODEC_VERSION_MAJOR_S  =  '57';

 LIBAVCODEC_VERSION_MINOR    =   107;
 LIBAVCODEC_VERSION_MINOR_S  =  '107';

 LIBAVCODEC_VERSION_MICRO    =  100;
 LIBAVCODEC_VERSION_MICRO_S  = '100';

 LIBAVCODEC_VERSION_INT      = (LIBAVCODEC_VERSION_MAJOR shl 16) or
                               (LIBAVCODEC_VERSION_MINOR shl 8) or
                                LIBAVCODEC_VERSION_MICRO;


 LIBAVCODEC_VERSION          = LIBAVCODEC_VERSION_MAJOR_S + '.' +
                              LIBAVCODEC_VERSION_MINOR_S + '.' +
                              LIBAVCODEC_VERSION_MICRO_S;

 LIBAVCODEC_BUILD            = LIBAVCODEC_VERSION_INT;

 LIBAVCODEC_IDENT            = 'Lavc'+LIBAVCODEC_VERSION;

{$IFDEF MSWINDOWS}
 LIBAVCODEC_LIBNAME          = 'avcodec-'+ LIBAVCODEC_VERSION_MAJOR_S + '.dll';
{$ENDIF}
{$IFDEF UNIX}
 LIBAVCODEC_LIBNAME          = 'libavcodec.so';
{$ENDIF}

(**
 * FF_API_* defines may be placed below to indicate public API that will be
 * dropped at a future version bump. The defines themselves are not part of
 * the public API and may change, break or disappear at any time.
 *
 * @note, when bumping the major version it is recommended to manually
 * disable each FF_API_* in its own commit instead of disabling them all
 * at once through the bump. This improves the git bisect-ability of the change.
 *)

{$IFNDEF FF_API_VIMA_DECODER}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_VIMA_DECODER}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_AUDIO_CONVERT}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_AUDIO_CONVERT}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_AVCODEC_RESAMPLE}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_AVCODEC_RESAMPLE}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_MISSING_SAMPLE}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_MISSING_SAMPLE}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_LOWRES}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_LOWRES}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_CAP_VDPAU}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_CAP_VDPAU}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_BUFS_VDPAU}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_BUFS_VDPAU}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_VOXWARE}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_VOXWARE}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_SET_DIMENSIONS}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_SET_DIMENSIONS}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_DEBUG_MV}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_DEBUG_MV}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_AC_VLC}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_AC_VLC}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_OLD_MSMPEG4}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_OLD_MSMPEG4}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_ASPECT_EXTENDED}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_ASPECT_EXTENDED}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_ARCH_ALPHA}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_ARCH_ALPHA}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_XVMC}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_XVMC}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_ERROR_RATE}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_ERROR_RATE}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_QSCALE_TYPE}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_QSCALE_TYPE}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_MB_TYPE}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_MB_TYPE}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_MAX_BFRAMES}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_MAX_BFRAMES}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_NEG_LINESIZES}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_NEG_LINESIZES}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_EMU_EDGE}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_EMU_EDGE}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_ARCH_SH4}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_ARCH_SH4}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_ARCH_SPARC}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_ARCH_SPARC}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_UNUSED_MEMBERS}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_UNUSED_MEMBERS}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_IDCT_XVIDMMX}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_IDCT_XVIDMMX}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_INPUT_PRESERVED}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_INPUT_PRESERVED}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_NORMALIZE_AQP}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_NORMALIZE_AQP}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_GMC}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_GMC}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_MV0}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_MV0}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_CODEC_NAME}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_CODEC_NAME}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_AFD}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_AFD}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_VISMV}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    (* XXX: don't forget to drop the -vismv documentation *)
    {$DEFINE FF_API_VISMV}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_AUDIOENC_DELAY}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_AUDIOENC_DELAY}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_VAAPI_CONTEXT}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_VAAPI_CONTEXT}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_MERGE_SD}
  {$IF LIBAVCODEC_VERSION_MAJOR < 58}
    {$DEFINE FF_API_MERGE_SD}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_AVCTX_TIMEBASE}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_AVCTX_TIMEBASE}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_MPV_OPT}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_MPV_OPT}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_STREAM_CODEC_TAG}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_STREAM_CODEC_TAG}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_QUANT_BIAS}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_QUANT_BIAS}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_RC_STRATEGY}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_RC_STRATEGY}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_CODED_FRAME}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_CODED_FRAME}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_MOTION_EST}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_MOTION_EST}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_WITHOUT_PREFIX}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_WITHOUT_PREFIX}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_SIDEDATA_ONLY_PKT}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_SIDEDATA_ONLY_PKT}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_VDPAU_PROFILE}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_VDPAU_PROFILE}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_CONVERGENCE_DURATION}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_CONVERGENCE_DURATION}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_AVPICTURE}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_AVPICTURE}
  {$IFEND}
{$ENDIF}
{$IFNDEF FF_API_AVPACKET_OLD_API}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_AVPACKET_OLD_API}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_RTP_CALLBACK}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_RTP_CALLBACK}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_VBV_DELAY}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_VBV_DELAY}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_CODER_TYPE}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_CODER_TYPE}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_STAT_BITS}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_STAT_BITS}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_PRIVATE_OPT}
  {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_PRIVATE_OPT}
  {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_ASS_TIMING}
 {$IF LIBAVCODEC_VERSION_MAJOR < 59}
    {$DEFINE FF_API_ASS_TIMING}
 {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_OLD_BSF}
 {$IF LIBAVCODEC_VERSION_MAJOR < 59}
     {$DEFINE FF_API_OLD_BSF}
 {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_COPY_CONTEXT}
 {$IF LIBAVCODEC_VERSION_MAJOR < 59}
     {$DEFINE FF_API_COPY_CONTEXT}
 {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_GET_CONTEXT_DEFAULTS}
 {$IF LIBAVCODEC_VERSION_MAJOR < 59}
     {$DEFINE FF_API_GET_CONTEXT_DEFAULTS}
 {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_NVENC_OLD_NAME}
 {$IF LIBAVCODEC_VERSION_MAJOR < 59}
     {$DEFINE FF_API_NVENC_OLD_NAME}
 {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_STRUCT_VAAPI_CONTEXT}
 {$IF LIBAVCODEC_VERSION_MAJOR < 59}
     {$DEFINE FF_API_STRUCT_VAAPI_CONTEXT}
 {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_MERGE_SD_API}
 {$IF LIBAVCODEC_VERSION_MAJOR < 59}
     {$DEFINE FF_API_MERGE_SD_API}
 {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_TAG_STRING}
 {$IF LIBAVCODEC_VERSION_MAJOR < 59}
     {$DEFINE FF_API_TAG_STRING}
 {$IFEND}
{$ENDIF}

{$IFNDEF FF_API_GETCHROMA}
 {$IF LIBAVCODEC_VERSION_MAJOR < 59}
     {$DEFINE FF_API_GETCHROMA}
 {$IFEND}
{$ENDIF}


{$endif} (* AVCODEC_VERSION_H *)

