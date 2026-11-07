// rea decompile_all
// name: FUN_10025ce84
// address: 0x10025ce84
// body: available
// range: 0x10025ce84-0x10025cf0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10025ce84(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    _swift_bridgeObjectRelease(param_1);
    puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    puVar2 = puVar4;
    FUN_10025d598(puVar4,0);
    puVar3 = &local_58;
    FUN_10025fb98(puVar3,puVar2 + 4,puVar4,param_1);
    FUN_10003f638(local_58,uStack_50,local_48,uStack_40,local_38);
    if (puVar3 != puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10025cee8);
      (*pcVar1)();
    }
  }
  return puVar2;
}

