// rea decompile_all
// name: FUN_1001f82b4
// address: 0x1001f82b4
// body: available
// range: 0x1001f82b4-0x1001f8367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1001f82b4(long param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  iVar3 = (int)((ulong)param_3 >> 0x20);
  uVar1 = (uint)(param_4 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    uVar6 = param_4 >> 0x30 & 0xff;
    if (uVar4 != 0) {
      uVar6 = (long)iVar3;
    }
    lVar5 = 0;
    if (uVar4 != 0) {
      lVar5 = (long)(int)param_3;
    }
  }
  else if (uVar4 == 2) {
    uVar6 = *(ulong *)(param_3 + 0x18);
    lVar5 = *(long *)(param_3 + 0x10);
  }
  else {
    uVar6 = 0;
    lVar5 = 0;
  }
  if (((long)uVar6 < param_1) || (param_1 < lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f8360);
    (*pcVar2)();
  }
  if (uVar4 < 2) {
    uVar6 = param_4 >> 0x30 & 0xff;
    if (uVar4 != 0) {
      uVar6 = (long)iVar3;
    }
    lVar5 = 0;
    if (uVar4 != 0) {
      lVar5 = (long)(int)param_3;
    }
  }
  else if (uVar4 == 2) {
    uVar6 = *(ulong *)(param_3 + 0x18);
    lVar5 = *(long *)(param_3 + 0x10);
  }
  else {
    uVar6 = 0;
    lVar5 = 0;
  }
  if ((param_2 <= (long)uVar6) && (lVar5 <= param_2)) {
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f8368);
      (*pcVar2)();
    }
    return param_2 - param_1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f8364);
  (*pcVar2)();
}

