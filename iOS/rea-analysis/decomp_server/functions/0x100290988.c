// rea decompile_all
// name: FUN_100290988
// address: 0x100290988
// body: available
// range: 0x100290988-0x1002910d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100290988(ulong param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_170 [16];
  long alStack_160 [2];
  undefined1 auStack_150 [8];
  ulong local_148;
  long local_140;
  long local_138;
  undefined1 *local_130;
  long local_128;
  undefined8 local_120;
  code *local_118;
  undefined1 local_110 [8];
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  long local_a8;
  long local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar2 = &DAT_100a82c30;
  local_120 = param_3;
  local_118 = param_2;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  uVar6 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_130 = auStack_150 + -uVar6;
  lVar7 = (long)local_130 - uVar6;
  lVar3 = 0;
  local_128 = lVar7;
  FUN_1002c76a8();
  lVar7 = lVar7 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  uVar6 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_138 = lVar7 - uVar6;
  lVar10 = local_138 - uVar6;
  _swift_unownedRetainStrong(param_1);
  plVar15 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
  uVar12 = *(undefined8 *)(plVar15[2] + 0x10);
  _os_unfair_lock_lock(uVar12);
  lVar17 = *(long *)(*plVar15 + 0x60);
  _swift_beginAccess((long)plVar15 + lVar17,auStack_80,0,0);
  FUN_100082394((long)plVar15 + lVar17,lVar7,FUN_1002c76a8);
  local_140 = lVar3;
  FUN_10007f314(lVar7 + *(int *)(lVar3 + 0x5c),lVar10,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar7,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar12);
  _swift_release(param_1);
  lVar17 = 0;
  FUN_100277ad0();
  lVar16 = *(long *)(lVar17 + -8);
  lVar3 = lVar10;
  (**(code **)(lVar16 + 0x30))(lVar10,1,lVar17);
  FUN_100040bb4(lVar10,&DAT_100a82460,&DAT_1008175c0);
  if ((int)lVar3 == 1) {
    uVar6 = param_1;
    _swift_unownedRetainStrong();
    FUN_1002c85ec();
    _swift_release(param_1);
    if (uVar6 != 0) {
      _swift_unownedRetainStrong(param_1);
      plVar15 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
      uVar12 = *(undefined8 *)(plVar15[2] + 0x10);
      _os_unfair_lock_lock(uVar12);
      lVar3 = *(long *)(*plVar15 + 0x60);
      _swift_beginAccess((long)plVar15 + lVar3,auStack_98,0,0);
      FUN_100082394((long)plVar15 + lVar3,lVar7,FUN_1002c76a8);
      lVar9 = *(long *)(lVar7 + 0x148);
      _swift_bridgeObjectRetain(lVar9);
      FUN_1000d27dc(lVar7,FUN_1002c76a8);
      _os_unfair_lock_unlock(uVar12);
      lVar3 = *(long *)(lVar9 + 0x10);
      if (lVar3 == 0) {
        _swift_bridgeObjectRelease(lVar9);
        _swift_release(param_1);
        lVar4 = 0;
        __s10Foundation10URLRequestVMa();
        pcVar8 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
        lVar11 = local_128;
      }
      else {
        lVar4 = 0;
        __s10Foundation10URLRequestVMa();
        lVar11 = local_128;
        lVar13 = *(long *)(lVar4 + -8);
        (**(code **)(lVar13 + 0x10))
                  (local_128,
                   lVar9 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)) +
                   *(long *)(lVar13 + 0x48) * (lVar3 + -1),lVar4);
        _swift_bridgeObjectRelease(lVar9);
        _swift_release(param_1);
        pcVar8 = *(code **)(lVar13 + 0x38);
      }
      (*pcVar8)(lVar11,lVar3 == 0,1,lVar4);
      lVar3 = lVar11;
      uVar5 = uVar6;
      (*local_118)();
      local_118 = (code *)lVar3;
      FUN_100040bb4(lVar11,&DAT_100a82c30,&DAT_1008171f0);
      local_120 = CONCAT44(local_120._4_4_,(int)uVar5);
      local_148 = uVar6;
      if ((uVar5 & 1) != 0) {
        _swift_unownedRetainStrong(param_1);
        pcVar8 = local_118;
        _swift_getErrorValue(local_118,auStack_f8,local_110);
        local_128 = lVar10;
        *(code **)(lVar10 + -0x10) = pcVar8;
        _swift_errorRetain(pcVar8);
        lVar9 = local_138;
        FUN_100277c6c(local_138,FUN_10028fb7c,lVar10 + -0x20,uStack_108,local_100);
        (**(code **)(lVar16 + 0x38))(lVar9,0,1,lVar17);
        plVar15 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
        uVar12 = *(undefined8 *)(plVar15[2] + 0x10);
        _os_unfair_lock_lock(uVar12);
        lVar3 = (long)plVar15 + *(long *)(*plVar15 + 0x60);
        _swift_beginAccess(lVar3,auStack_c0,0x21,0);
        FUN_10028fba0(lVar9,lVar3 + *(int *)(local_140 + 0x5c));
        _swift_endAccess(auStack_c0);
        _os_unfair_lock_unlock(uVar12);
        FUN_1001803c8(pcVar8,1);
        _swift_release(param_1);
        FUN_100040bb4(lVar9,&DAT_100a82460,&DAT_1008175c0);
      }
      _swift_unownedRetainStrong(param_1);
      plVar15 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
      uVar12 = *(undefined8 *)(plVar15[2] + 0x10);
      _os_unfair_lock_lock(uVar12);
      lVar3 = *(long *)(*plVar15 + 0x60);
      _swift_beginAccess((long)plVar15 + lVar3,auStack_d8,0,0);
      FUN_100082394((long)plVar15 + lVar3,lVar7,FUN_1002c76a8);
      FUN_10007f314(lVar7 + 0xf0,auStack_c0,&DAT_100a82c40,&DAT_100817200);
      FUN_1000d27dc(lVar7,FUN_1002c76a8);
      _os_unfair_lock_unlock(uVar12);
      _swift_release(param_1);
      if (local_a8 == 0) {
        FUN_1001803c8(local_118,(uint)local_120 & 1);
        FUN_100040bb4(auStack_c0,&DAT_100a82c40,&DAT_100817200);
      }
      else {
        FUN_10003f030(auStack_c0,local_a8);
        _swift_unownedRetainStrong(param_1);
        _swift_unownedRetainStrong();
        plVar15 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
        uVar12 = *(undefined8 *)(plVar15[2] + 0x10);
        _os_unfair_lock_lock(uVar12);
        lVar3 = *(long *)(*plVar15 + 0x60);
        _swift_beginAccess((long)plVar15 + lVar3,auStack_f0,0,0);
        FUN_100082394((long)plVar15 + lVar3,lVar7,FUN_1002c76a8);
        lVar17 = *(long *)(lVar7 + 0x148);
        _swift_bridgeObjectRetain(lVar17);
        FUN_1000d27dc(lVar7,FUN_1002c76a8);
        _os_unfair_lock_unlock(uVar12);
        lVar3 = *(long *)(lVar17 + 0x10);
        if (lVar3 == 0) {
          _swift_bridgeObjectRelease(lVar17);
          _swift_release(param_1);
          lVar7 = 0;
          __s10Foundation10URLRequestVMa();
          pcVar8 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
          puVar14 = local_130;
        }
        else {
          lVar7 = 0;
          __s10Foundation10URLRequestVMa();
          puVar14 = local_130;
          lVar10 = *(long *)(lVar7 + -8);
          (**(code **)(lVar10 + 0x10))
                    (local_130,
                     lVar17 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)) +
                     *(long *)(lVar10 + 0x48) * (lVar3 + -1),lVar7);
          _swift_bridgeObjectRelease(lVar17);
          _swift_release(param_1);
          pcVar8 = *(code **)(lVar10 + 0x38);
        }
        (*pcVar8)(puVar14,lVar3 == 0,1,lVar7);
        pcVar8 = local_118;
        uVar1 = (uint)local_120;
        (**(code **)(local_a0 + 0x120))
                  (param_1,puVar14,local_148,local_118,(uint)local_120 & 1,local_a8,local_a0);
        _swift_release(param_1);
        FUN_1001803c8(pcVar8,uVar1 & 1);
        FUN_100040bb4(puVar14,&DAT_100a82c30,&DAT_1008171f0);
        FUN_10003f094(auStack_c0);
      }
    }
  }
  return;
}

