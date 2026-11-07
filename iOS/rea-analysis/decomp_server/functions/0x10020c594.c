// rea decompile_all
// name: FUN_10020c594
// address: 0x10020c594
// body: available
// range: 0x10020c594-0x10020c6af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10020c594(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((param_2 & 1) == 0) {
    local_30 = 0;
    local_28 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x11);
    _swift_bridgeObjectRelease(local_28);
    local_30 = 0x2873736563637573;
    local_28 = 0xee003d746e756f63;
    local_38 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar2);
  }
  else {
    local_30 = 0;
    local_28 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x11);
    __sSS6appendyySSF(0x286572756c696166,0xee003d726f727265);
    local_38 = CONCAT71(local_38._1_7_,(char)param_1);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_38,&local_30,&DAT_10099bed0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  }
  __sSS6appendyySSF(0x29,0xe100000000000000);
  auVar1._8_8_ = local_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}

