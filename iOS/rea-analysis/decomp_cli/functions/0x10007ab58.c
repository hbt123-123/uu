// rea decompile_all
// name: FUN_10007ab58
// address: 0x10007ab58
// body: available
// range: 0x10007ab58-0x10007ac37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10007ab58(undefined1 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  undefined1 *local_50;
  ulong uStack_48;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    ppuVar3 = (undefined1 **)0x0;
  }
  else {
    uVar2 = 0;
    FUN_10007ac38(0xf,param_1,param_2);
    if ((param_2 >> 0x3c & 1) == 0) {
      if ((param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2,uVar2 >> 0x10);
          ppuVar3 = (undefined1 **)param_1;
        }
        else {
          ppuVar3 = (undefined1 **)((param_2 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        uStack_48 = param_2 & 0xffffffffffffff;
        ppuVar3 = &local_50;
        local_50 = param_1;
      }
      __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF();
    }
    else {
      ppuVar3 = (undefined1 **)(uVar2 & 0xffffffffffff0000);
      __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                (ppuVar3,param_1,param_2);
    }
  }
  return (ulong)ppuVar3 & 0xffffffff | (ulong)(uVar1 == 0) << 0x20;
}

