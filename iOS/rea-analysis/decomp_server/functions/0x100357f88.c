// rea decompile_all
// name: FUN_100357f88
// address: 0x100357f88
// body: available
// range: 0x100357f88-0x100358017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100357f88(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 local_50 [2];
  
  puVar3 = local_50;
  puVar4 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar4;
    FUN_10034cc50(puVar4,0);
    FUN_1002bc8fc(local_50,puVar2 + 0x20,puVar4,param_1);
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRelease(local_50[0]);
    if (puVar3 != (undefined8 *)puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100357ff4);
      (*pcVar1)();
    }
  }
  return puVar2;
}

