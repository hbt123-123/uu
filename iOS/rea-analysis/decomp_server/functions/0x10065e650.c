// rea decompile_all
// name: FUN_10065e650
// address: 0x10065e650
// body: available
// range: 0x10065e650-0x10065e71f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065e650(uint param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  ulong local_18;
  
  if (param_1 < 0x80) {
    uVar3 = param_1 + 1;
  }
  else {
    uVar1 = (param_1 & 0x3f) * 0x100;
    if (param_1 < 0x800) {
      uVar3 = (param_1 >> 6) + uVar1 + 0x81c1;
    }
    else {
      uVar1 = (uVar1 | param_1 >> 6 & 0x3f) * 0x100;
      uVar3 = ((uVar1 | param_1 >> 0xc & 0x3f) << 8 | param_1 >> 0x12) + 0x818181f1;
      if (param_1 >> 0x10 == 0) {
        uVar3 = (param_1 >> 0xc) + uVar1 + 0x8181e1;
      }
    }
  }
  local_18 = (ulong)uVar3 + 0xfefefefefefeff &
             (-1L << (((ulong)(4 - ((uint)LZCOUNT(uVar3) >> 3)) & 7) << 3) ^ 0xffffffffffffffffU);
  __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ(&local_18);
  FUN_10065b1a0();
  if (param_4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10065e6d8);
    (*pcVar2)();
  }
  return;
}

