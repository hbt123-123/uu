// rea decompile_all
// name: FUN_10065cf4c
// address: 0x10065cf4c
// body: available
// range: 0x10065cf4c-0x10065cfbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065cf4c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  _swift_bridgeObjectRetain(uVar1);
  uVar5 = 10;
  uVar4 = uVar1;
  FUN_10065b1a0();
  if (param_5 != 0) {
    _swift_bridgeObjectRelease(uVar1);
    *param_1 = uVar3;
    param_1[1] = uVar4;
    *(undefined1 *)(param_1 + 2) = uVar5;
    param_1[3] = param_5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10065cfc0);
  (*pcVar2)();
}

