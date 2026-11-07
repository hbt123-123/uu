// rea decompile_all
// name: FUN_1000093f0
// address: 0x1000093f0
// body: available
// range: 0x1000093f0-0x1000094a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000093f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  uint extraout_w8;
  uint uVar5;
  long unaff_x21;
  byte local_41;
  
  lVar3 = param_1;
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  lVar4 = lVar3;
  if (lVar3 != 0) {
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8(param_1,lVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000094a4);
      (*pcVar2)();
    }
    lVar3 = (param_1 - lVar4) + lVar3;
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000094a0);
    (*pcVar2)();
  }
  __s10Foundation13__DataStorageC7_lengthSivg();
  if (param_2 - param_1 <= lVar4) {
    lVar4 = param_2 - param_1;
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar4 + lVar3;
  }
  FUN_100009038(&local_41,lVar3,lVar1,param_4,param_5);
  uVar5 = extraout_w8;
  if (unaff_x21 == 0) {
    uVar5 = (uint)local_41;
  }
  return uVar5 & 1;
}

