// rea decompile_all
// name: FUN_100522c78
// address: 0x100522c78
// body: available
// range: 0x100522c78-0x100522ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100522c78(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = (uint)((param_2 >> 9 & 0x7fffff) * 0x44b83 >> 0x27);
  if ((param_2 & 0x80000000) != 0) {
    uVar4 = ~(uint)((ulong)(~(uint)param_2 >> 9) * 0x44b83 >> 0x27);
  }
  if (!SCARRY8(param_1,(long)(int)uVar4)) {
    iVar2 = (int)(uint)param_2 % 1000000000;
    iVar1 = iVar2 + 1000000000;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    auVar5._8_4_ = iVar1;
    auVar5._0_8_ = param_1 + (int)uVar4;
    auVar5._12_4_ = 0;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100522ce4);
  (*pcVar3)();
}

