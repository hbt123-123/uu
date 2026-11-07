// rea decompile_all
// name: FUN_100169614
// address: 0x100169614
// body: available
// range: 0x100169614-0x1001699f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100169614(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  undefined4 auStack_a8 [2];
  long alStack_a0 [2];
  long local_90 [2];
  char local_79;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)local_90 + lVar1;
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar8 = _TtC14UURemoteServer18ClipboardPCManager::incomingDrop;
  if (param_1 == 0) {
    FUN_100401b14();
    FUN_1003fb4bc(FUN_1001699f4,0,0xd0000000000000a4,0x800000010088d870,0xd000000000000025,
                  0x8000000100894740,0x450,0);
  }
  else {
    if (*(long *)(param_1 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) != 0 &&
        *(long *)(param_1 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) == param_2) {
      __s10Foundation4DateVACycfC(lVar10);
      local_90[0] = lVar8;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)((long)&lStack_b0 + lVar1) = param_2;
      *(undefined4 *)((long)auStack_a8 + lVar1) = param_3;
      *(long *)((long)alStack_a0 + lVar1) = lVar10;
      FUN_100407cdc(&local_79,FUN_10016c534,auStack_c0 + lVar1,PTR___sSbN_1009958c8);
      lVar8 = local_90[0];
      (**(code **)(lVar9 + 8))(lVar10,lVar2);
      if (local_79 == '\x01') {
        FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
        uVar3 = (ulong)*(uint *)(param_2 + 0x10);
        FUN_1003d56bc();
        if (uVar3 != 0) {
          uVar3 = param_1 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
          _swift_unknownObjectWeakLoadStrong();
          if (uVar3 != 0) {
            uVar4 = 0;
            FUN_1001bc5d8(0);
            uVar5 = uVar3;
            _swift_dynamicCastClass(uVar3,uVar4);
            if (uVar5 == 0) {
              _swift_unknownObjectRelease(uVar3);
            }
            else {
              FUN_1001bbfbc();
              _swift_unknownObjectRelease();
              if ((uVar5 & 1) != 0) {
                FUN_100153164();
                uVar5 = uVar3;
                FUN_100189010();
                _swift_release(uVar3);
                puVar6 = &DAT_100a75a28;
                FUN_100004bb4(&DAT_100a75a28,&DAT_100809ad0);
                lVar2 = 0;
                __s10Foundation3URLVMa();
                lVar10 = *(long *)(lVar2 + -8);
                uVar3 = (ulong)*(byte *)(lVar10 + 0x50);
                uVar7 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
                _swift_allocObject(puVar6,uVar7 + *(long *)(lVar10 + 0x48),uVar3 | 7);
                *(undefined8 *)(puVar6 + 0x18) = 2;
                *(undefined8 *)(puVar6 + 0x10) = 1;
                (**(code **)(lVar10 + 0x10))(puVar6 + uVar7,param_4,lVar2);
                if (uVar5 == 0) {
                  _swift_setDeallocating(puVar6);
                  (**(code **)(lVar10 + 8))(puVar6 + uVar7,lVar2);
                  _swift_deallocClassInstance(puVar6,0x20,7);
                }
                else {
                  uVar3 = uVar5;
                  FUN_1000e4118(uVar5,puVar6);
                  _swift_bridgeObjectRelease(uVar5);
                  _swift_setDeallocating(puVar6);
                  _swift_arrayDestroy(puVar6 + uVar7,*(undefined8 *)(puVar6 + 0x10),lVar2);
                  _swift_deallocClassInstance(puVar6,0x20,7);
                  if (((uVar3 & 1) != 0) && (FUN_10012b654(), ((ulong)puVar6 & 1) != 0)) {
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)((long)alStack_a0 + lVar1) = param_3;
    FUN_1003fb4bc(FUN_10016c028,(long)&lStack_b0 + lVar1,0xd0000000000000a4,0x800000010088d870,
                  0xd000000000000025,0x8000000100894740,0x457,0);
    if ((*(long *)(param_1 + lVar8) != 0) && (*(long *)(param_1 + lVar8) == param_2)) {
      FUN_10015659c(0x1000000000000015,0x8000000100894790);
    }
  }
  return;
}

