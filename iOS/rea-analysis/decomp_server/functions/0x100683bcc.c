// rea decompile_all
// name: FUN_100683bcc
// address: 0x100683bcc
// body: available
// range: 0x100683bcc-0x100683cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100683bcc(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  FUN_100682f28();
  lVar3 = param_1;
  lVar4 = param_2;
  uVar6 = param_3;
  FUN_100682fd0();
  uVar1 = (uint)param_3 >> 6 & 3;
  uVar5 = (uint)uVar6;
  if (uVar1 == 0) {
    if ((uVar5 & 0xff) < 0x40) {
      return param_1 == lVar3;
    }
  }
  else if (uVar1 == 1) {
    if ((uVar5 & 0xc0) == 0x40) {
      if (((param_3 & 1) == 0) && ((uVar6 & 1) == 0)) {
        FUN_100690ae8();
        FUN_100690ae8(param_1,param_2,param_3);
        if (param_2 == lVar4) {
          return param_1 == lVar3;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100683cb8);
        (*pcVar2)();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100683cbc);
      (*pcVar2)();
    }
    FUN_100690ae8();
  }
  else if ((((uVar5 & 0xc0) == 0x80) && ((uVar5 & 0xff) == 0x80)) && (lVar3 == 0 && lVar4 == 0)) {
    return true;
  }
  FUN_100690ae8();
  return false;
}

