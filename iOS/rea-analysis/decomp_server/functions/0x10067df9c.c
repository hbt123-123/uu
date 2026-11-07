// rea decompile_all
// name: FUN_10067df9c
// address: 0x10067df9c
// body: available
// range: 0x10067df9c-0x10067e0ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10067df9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_78 [3];
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x28) + 0x10);
  lVar5 = *(long *)(lVar4 + 0x18);
  puVar6 = *(undefined8 **)(lVar5 + 0x18);
  if (puVar6 == (undefined8 *)0x0) {
    _swift_retain(lVar4);
    puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    puVar2 = puVar6;
    FUN_100630840(puVar6,0);
    puVar3 = local_78;
    FUN_1006413c4(puVar3,puVar2 + 4,puVar6);
    _swift_retain(lVar4);
    _swift_retain(lVar5);
    _swift_release(local_78[0]);
    if (puVar3 != puVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10067e02c);
      (*pcVar1)();
    }
  }
  _swift_beginAccess(lVar4 + 0x20,local_78,0x21,0);
  FUN_100662e80(param_1,param_2,param_3,param_4,lVar4 + 0x20,puVar2);
  _swift_endAccess(local_78);
  _swift_release(lVar4);
  _swift_release(puVar2);
  return param_1;
}

