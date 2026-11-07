// rea decompile_all
// name: FUN_1001f8250
// address: 0x1001f8250
// body: available
// range: 0x1001f8250-0x1001f82b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f8250(long param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f82b0);
    (*pcVar2)();
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    uVar5 = param_4 >> 0x30 & 0xff;
    if (uVar3 != 0) {
      uVar5 = (long)(int)((ulong)param_3 >> 0x20);
    }
    lVar4 = 0;
    if (uVar3 != 0) {
      lVar4 = (long)(int)param_3;
    }
  }
  else if (uVar3 == 2) {
    uVar5 = *(ulong *)(param_3 + 0x18);
    lVar4 = *(long *)(param_3 + 0x10);
  }
  else {
    uVar5 = 0;
    lVar4 = 0;
  }
  if ((param_1 + param_2 <= (long)uVar5) && (lVar4 <= param_1 + param_2)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f82b4);
  (*pcVar2)();
}

