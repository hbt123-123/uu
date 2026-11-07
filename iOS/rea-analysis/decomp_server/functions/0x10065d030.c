// rea decompile_all
// name: thunk_FUN_10065d034
// address: 0x10065d030
// body: available
// range: 0x10065d030-0x10065d033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10065d034(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  long lStack_60;
  byte bStack_58;
  
  _swift_bridgeObjectRetain(param_3);
  FUN_10065c4fc(&uStack_78,param_2,param_3,10);
  if (lStack_60 != 0) {
    _swift_bridgeObjectRelease(param_3);
    *param_1 = uStack_78;
    param_1[1] = uStack_70;
    *(undefined1 *)(param_1 + 2) = uStack_68;
    param_1[3] = lStack_60;
    *(byte *)(param_1 + 4) = bStack_58 & 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10065d0c8);
  (*pcVar1)();
}

