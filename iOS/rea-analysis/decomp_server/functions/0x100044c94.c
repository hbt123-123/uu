// rea decompile_all
// name: FUN_100044c94
// address: 0x100044c94
// body: available
// range: 0x100044c94-0x100044e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100044c94(undefined8 *param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  __ss11_StringGutsV4growyySiF(0x47);
  __sSS6appendyySSF(0xd000000000000038,0x800000010087cd10);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar1 = PTR___sSiN_100995968;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x78,0xe100000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x3a6e6f7361657220,0xe800000000000000);
  uVar5 = 0xeb00000000657669;
  puVar2 = (undefined1 *)0x7469736f506e6f6e;
  if ((0 < (long)param_2) && (0 < (long)param_3)) {
    if ((param_2 < 0xf01) && (param_3 < 0x961)) {
      uVar5 = 0x800000010087ccd0;
      puVar2 = &DAT_d000000000000010;
    }
    else {
      uVar5 = 0x800000010087ccf0;
      puVar2 = &DAT_d000000000000018;
    }
  }
  __sSS6appendyySSF(puVar2,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

