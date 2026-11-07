// rea decompile_all
// name: FUN_10051ac80
// address: 0x10051ac80
// body: available
// range: 0x10051ac80-0x10051ad07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10051ac80(ulong param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (0x773593fe < param_2 + 999999999U) {
    bVar4 = SCARRY8(param_1,(long)(param_2 / 1000000000));
    param_1 = param_1 + (long)(param_2 / 1000000000);
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10051ad08);
      (*pcVar3)();
    }
    param_2 = param_2 % 1000000000;
  }
  if ((param_2 < 0) && (0 < (long)param_1)) {
    auVar5._8_4_ = param_2 + 1000000000;
    auVar5._0_8_ = param_1 - 1;
    auVar5._12_4_ = 0;
    return auVar5;
  }
  uVar1 = param_1;
  iVar2 = param_2;
  if ((param_1 & 0x8000000000000000) != 0) {
    uVar1 = param_1 + 1;
    iVar2 = param_2 + -1000000000;
  }
  if (0 < param_2) {
    param_1 = uVar1;
    param_2 = iVar2;
  }
  auVar6._8_4_ = param_2;
  auVar6._0_8_ = param_1;
  auVar6._12_4_ = 0;
  return auVar6;
}

