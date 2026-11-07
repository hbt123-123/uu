// rea decompile_all
// name: FUN_10066b120
// address: 0x10066b120
// body: available
// range: 0x10066b120-0x10066b1d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10066b120(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined *puVar5;
  undefined8 local_50 [2];
  
  puVar3 = local_50;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  puVar5 = *(undefined **)(lVar4 + 0x18);
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar5 != (undefined *)0x0) {
    puVar2 = puVar5;
    FUN_100630840(puVar5,0);
    FUN_1006413c4(local_50,puVar2 + 0x20,puVar5);
    _swift_retain(lVar4);
    _swift_release(local_50[0]);
    if (puVar3 != (undefined8 *)puVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066b1d4);
      (*pcVar1)();
    }
  }
  FUN_10066b884(param_1,puVar2);
  _swift_release(puVar2);
  return param_1;
}

