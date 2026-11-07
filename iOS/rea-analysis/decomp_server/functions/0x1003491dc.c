// rea decompile_all
// name: FUN_1003491dc
// address: 0x1003491dc
// body: available
// range: 0x1003491dc-0x10034926f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003491dc(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = param_2;
  FUN_1003491bc();
  _swift_allocObject();
  if (1 < param_3) {
    *(long *)(lVar2 + 0x10) = param_2;
    *(ulong *)(lVar2 + 0x18) = param_3;
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_4;
    *(undefined8 *)(lVar2 + 0x30) = param_5;
    *(undefined8 *)(lVar2 + 0x38) = param_6;
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_5);
    _swift_bridgeObjectRetain(param_6);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100349270);
  (*pcVar1)();
}

