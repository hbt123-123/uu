// rea decompile_all
// name: FUN_100257210
// address: 0x100257210
// body: available
// range: 0x100257210-0x1002572b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100257210(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  *(undefined ***)(param_2 + 0x40) = &PTR_PTR_1009a81c8;
  _swift_unknownObjectWeakAssign(param_2 + 0x38,param_1);
  puVar1 = (undefined *)(param_2 + 0x38);
  _swift_unknownObjectWeakLoadStrong();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    FUN_100254f08();
    _swift_unknownObjectRelease(puVar1);
    if (puVar2 != (undefined *)0x0) goto LAB_100257274;
  }
  _swift_bridgeObjectRelease(0);
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_100257274:
  _swift_beginAccess(param_2 + 0x28,auStack_48,0x21,0);
  FUN_100257490(puVar2);
  _swift_endAccess(auStack_48);
  _swift_bridgeObjectRelease(puVar2);
  return;
}

