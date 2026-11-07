// rea decompile_all
// name: FUN_10016903c
// address: 0x10016903c
// body: available
// range: 0x10016903c-0x100169287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10016903c(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_e0 [16];
  long lStack_d0;
  undefined4 auStack_c8 [2];
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  char local_51;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_b0 + lVar1;
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  local_70 = param_1[4];
  _swift_beginAccess(param_2 + 0x10,auStack_a8,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((param_2 != 0) &&
     (*(long *)(param_2 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) != 0 &&
      *(long *)(param_2 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) == param_3)) {
    uVar2 = (undefined4)local_90;
    uVar5 = local_90 & 0xffffffff;
    __s10Foundation4DateVACycfC(puVar6);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)((long)&lStack_d0 + lVar1) = param_3;
    *(undefined4 *)((long)auStack_c8 + lVar1) = uVar2;
    *(undefined1 **)((long)auStack_c0 + lVar1) = puVar6;
    FUN_100407cdc(&local_51,FUN_10016c534,auStack_e0 + lVar1,PTR___sSbN_1009958c8);
    (**(code **)(lVar7 + 8))(puVar6,lVar3);
    if (local_51 == '\x01') {
      if (local_90._4_4_ == 0) {
        FUN_10015659c(0x1000000000000012,0x8000000100894ca0);
        return;
      }
      FUN_1001533d4();
      FUN_10013ad7c(&local_90);
      uVar4 = 0;
      FUN_10013bb70();
      if ((uVar4 & 1) == 0) {
        return;
      }
      FUN_10015f548(uVar5);
      return;
    }
  }
  FUN_100401b14(0);
  FUN_1003fb4bc(FUN_100169288,0,0xd0000000000000a4,0x800000010088d870,0xd000000000000029,
                0x8000000100894be0,0x431,0);
  return;
}

