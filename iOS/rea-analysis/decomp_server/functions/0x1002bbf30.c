// rea decompile_all
// name: thunk_FUN_1002bbf34
// address: 0x1002bbf30
// body: available
// range: 0x1002bbf30-0x1002bbf33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] thunk_FUN_1002bbf34(ulong param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  FUN_1002bbc2c();
  if ((param_2 & 1) == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002bbf90);
      (*pcVar1)();
    }
    if (*(ulong *)(param_3 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002bbf94);
      (*pcVar1)();
    }
    param_3 = param_3 + param_1 * 0x20;
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    uVar3 = *(undefined8 *)(param_3 + 0x38);
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}

