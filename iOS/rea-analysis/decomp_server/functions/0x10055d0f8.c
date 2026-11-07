// rea decompile_all
// name: FUN_10055d0f8
// address: 0x10055d0f8
// body: available
// range: 0x10055d0f8-0x10055d197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055d0f8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_2;
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  lVar4 = lVar3;
  if (lVar3 != 0) {
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8(param_2,lVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10055d198);
      (*pcVar2)();
    }
    lVar3 = (param_2 - lVar4) + lVar3;
  }
  if (!SBORROW8(param_3,param_2)) {
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (param_3 - param_2 <= lVar4) {
      lVar4 = param_3 - param_2;
    }
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar4 + lVar3;
    }
    FUN_100557074(param_1,lVar3,lVar1,param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10055d194);
  (*pcVar2)();
}

