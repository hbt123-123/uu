// rea decompile_all
// name: FUN_100159c0c
// address: 0x100159c0c
// body: available
// range: 0x100159c0c-0x100159d13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100159c0c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_138 [160];
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_77;
  undefined2 local_73;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  lVar3 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_88 = (ulong)*(uint *)(param_2 + 2);
    uStack_80 = 1;
    local_78 = 1;
    local_71 = 0;
    local_73 = 0;
    local_77 = 0;
    uStack_68 = 0xc000000000000000;
    local_70 = 0;
    local_58 = 0x1000000000000000;
    local_98 = uVar1;
    uStack_90 = uVar2;
    FUN_100193df4(auStack_138,&local_98);
    FUN_1001bddd8(param_1,auStack_138);
    FUN_1001536b4();
    FUN_100148e58(param_2);
    _swift_release(param_1);
    _swift_unknownObjectRelease(lVar3);
    FUN_10016b308(auStack_138);
    _swift_bridgeObjectRelease(uVar2);
    FUN_100006cdc(0,0xc000000000000000);
  }
  return;
}

