// rea decompile_all
// name: FUN_100113904
// address: 0x100113904
// body: available
// range: 0x100113904-0x1001139ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100113904(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long alStack_a8 [3];
  undefined8 local_90;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long local_50;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      FUN_10011327c(uVar1,uVar2,1);
      _swift_bridgeObjectRelease(uVar2);
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  _swift_beginAccess(param_2 + 0x30,auStack_80,0,0);
  FUN_100113d00(param_2 + 0x30,auStack_68);
  if (local_50 == 0) {
    FUN_100113d50(auStack_68);
  }
  else {
    FUN_1000b142c(auStack_68,alStack_a8);
    FUN_100113d50(auStack_68);
    plVar3 = alStack_a8;
    FUN_10003f030(plVar3,local_90);
    if (0 < *(long *)(*plVar3 + _TtC14UURemoteServer14AppListManager::appIconUploadCount)) {
      *(undefined8 *)(*plVar3 + _TtC14UURemoteServer14AppListManager::appIconUploadCount) = 0;
      FUN_1001a4294();
    }
    FUN_10003f094(alStack_a8);
  }
  return;
}

