// rea decompile_all
// name: FUN_10005ba24
// address: 0x10005ba24
// body: available
// range: 0x10005ba24-0x10005bae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005ba24(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar2 = 0;
  FUN_100098548(0,lVar4);
  puVar5 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar5);
  puVar3 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar2);
  if ((int)puVar3 != 1) {
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,puVar5,lVar4);
    return;
  }
  FUN_100075a04(0x10000000000001ba,0x80000001000ca350);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10005bae8);
  (*pcVar1)();
}

