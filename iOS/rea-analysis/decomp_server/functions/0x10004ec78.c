// rea decompile_all
// name: FUN_10004ec78
// address: 0x10004ec78
// body: available
// range: 0x10004ec78-0x10004ee9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004ec78(long param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_80 [2];
  undefined *local_78;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    local_80[0] = 0x2716;
    local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
    if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
      *(undefined1 *)(param_2 + 0x10) = 1;
      (**(code **)(param_2 + 0x18))(local_80);
    }
  }
  else {
    uVar4 = param_4;
    FUN_10004ef14(param_3,param_4,param_5);
    if ((uVar4 & 1) == 0) {
      puVar2 = &DAT_1009985d0;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar2 + 0x10,param_1);
      puVar3 = &DAT_100998648;
      _swift_allocObject(&DAT_100998648,0x38,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(long *)(puVar3 + 0x18) = param_2;
      *(undefined8 *)(puVar3 + 0x20) = param_3;
      *(ulong *)(puVar3 + 0x28) = param_4;
      *(undefined8 *)(puVar3 + 0x30) = param_5;
      _swift_beginAccess(param_1 + 0x88,local_80,0x21,0);
      uVar6 = *(ulong *)(param_1 + 0x88);
      _swift_retain_n(param_2,2);
      _swift_bridgeObjectRetain(param_5);
      uVar4 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(param_1 + 0x88) = uVar6;
      uVar5 = uVar6;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        FUN_1000346dc(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
        *(ulong *)(param_1 + 0x88) = uVar5;
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar6 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_1000346dc(uVar6,uVar4 + 1,1,uVar5);
      }
      *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
      lVar1 = uVar6 + uVar4 * 0x20;
      *(code **)(lVar1 + 0x20) = FUN_10004f8e0;
      *(undefined **)(lVar1 + 0x28) = puVar3;
      *(code **)(lVar1 + 0x30) = FUN_10004f8f0;
      *(long *)(lVar1 + 0x38) = param_2;
      *(ulong *)(param_1 + 0x88) = uVar6;
      _swift_endAccess(local_80);
      _swift_retain(puVar3);
      _swift_retain(param_2);
      FUN_10005edf0();
      _swift_release(param_2);
      _swift_release(puVar3);
    }
    else {
      local_80[0] = (undefined4)param_3;
      local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
      if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
        *(undefined1 *)(param_2 + 0x10) = 1;
        (**(code **)(param_2 + 0x18))(local_80);
      }
    }
    _swift_release(param_1);
  }
  return;
}

