// rea decompile_all
// name: FUN_1002812bc
// address: 0x1002812bc
// body: available
// range: 0x1002812bc-0x100281ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002812bc(ulong param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined1 auStack_1a0 [16];
  undefined8 auStack_190 [2];
  undefined1 auStack_180 [8];
  ulong local_178;
  long local_170;
  long local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined8 local_150;
  code *local_148;
  undefined1 local_140 [8];
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  long local_c0;
  long local_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  
  puVar3 = &DAT_100a82c30;
  local_150 = param_3;
  local_148 = param_2;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  uVar9 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_160 = auStack_180 + -uVar9;
  puVar10 = local_160 + -uVar9;
  lVar4 = 0;
  local_158 = puVar10;
  FUN_1002c76a8();
  lVar15 = (long)puVar10 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  uVar9 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_168 = lVar15 - uVar9;
  puVar10 = (undefined1 *)(local_168 - uVar9);
  _swift_unownedRetainStrong(param_1);
  plVar19 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
  uVar17 = *(undefined8 *)(plVar19[2] + 0x10);
  _os_unfair_lock_lock(uVar17);
  lVar20 = *(long *)(*plVar19 + 0x60);
  _swift_beginAccess((long)plVar19 + lVar20,auStack_80,0,0);
  FUN_10028ab0c((long)plVar19 + lVar20,lVar15);
  local_170 = lVar4;
  FUN_10007f314(lVar15 + *(int *)(lVar4 + 0x5c),puVar10,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar15,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar17);
  _swift_release(param_1);
  lVar4 = 0;
  FUN_100277ad0();
  lVar20 = *(long *)(lVar4 + -8);
  puVar5 = puVar10;
  (**(code **)(lVar20 + 0x30))(puVar10,1,lVar4);
  FUN_100040bb4(puVar10,&DAT_100a82460,&DAT_1008175c0);
  if ((int)puVar5 == 1) {
    uVar9 = param_1;
    _swift_unownedRetainStrong();
    FUN_1002c85ec();
    _swift_release(param_1);
    if (uVar9 != 0) {
      _swift_unownedRetainStrong(param_1);
      plVar19 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
      uVar17 = *(undefined8 *)(plVar19[2] + 0x10);
      _os_unfair_lock_lock(uVar17);
      lVar16 = *(long *)(*plVar19 + 0x60);
      _swift_beginAccess((long)plVar19 + lVar16,auStack_98,0,0);
      FUN_10028ab0c((long)plVar19 + lVar16,lVar15);
      lVar13 = *(long *)(lVar15 + 0x148);
      _swift_bridgeObjectRetain(lVar13);
      FUN_1000d27dc(lVar15,FUN_1002c76a8);
      _os_unfair_lock_unlock(uVar17);
      lVar16 = *(long *)(lVar13 + 0x10);
      if (lVar16 == 0) {
        _swift_bridgeObjectRelease(lVar13);
        _swift_release(param_1);
        lVar6 = 0;
        __s10Foundation10URLRequestVMa();
        pcVar11 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
        puVar5 = local_158;
      }
      else {
        lVar6 = 0;
        __s10Foundation10URLRequestVMa();
        puVar5 = local_158;
        lVar18 = *(long *)(lVar6 + -8);
        (**(code **)(lVar18 + 0x10))
                  (local_158,
                   lVar13 + ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff)) +
                   *(long *)(lVar18 + 0x48) * (lVar16 + -1),lVar6);
        _swift_bridgeObjectRelease(lVar13);
        _swift_release(param_1);
        pcVar11 = *(code **)(lVar18 + 0x38);
      }
      (*pcVar11)(puVar5,lVar16 == 0,1,lVar6);
      _swift_unownedRetainStrong(param_1);
      lVar16 = *(long *)(param_1 + _TtC9Alamofire11DataRequest::dataMutableState);
      uVar14 = *(undefined8 *)(*(long *)(lVar16 + 0x10) + 0x10);
      _os_unfair_lock_lock(uVar14);
      _swift_beginAccess(lVar16 + 0x18,auStack_b0,0,0);
      uVar17 = *(undefined8 *)(lVar16 + 0x18);
      uVar1 = *(undefined8 *)(lVar16 + 0x20);
      FUN_10010bd10(uVar17,uVar1);
      _os_unfair_lock_unlock(uVar14);
      _swift_release(param_1);
      puVar7 = puVar5;
      uVar8 = uVar9;
      (*local_148)(puVar5,uVar9,uVar17,uVar1);
      local_148 = (code *)puVar7;
      FUN_100006cc8(uVar17,uVar1);
      FUN_100040bb4(puVar5,&DAT_100a82c30,&DAT_1008171f0);
      local_150 = CONCAT44(local_150._4_4_,(int)uVar8);
      local_178 = uVar9;
      if ((uVar8 & 1) != 0) {
        _swift_unownedRetainStrong(param_1);
        pcVar11 = local_148;
        _swift_getErrorValue(local_148,auStack_128,local_140);
        local_158 = puVar10;
        *(code **)(puVar10 + -0x10) = pcVar11;
        _swift_errorRetain(pcVar11);
        lVar16 = local_168;
        FUN_100277c6c(local_168,FUN_10028fb7c,puVar10 + -0x20,local_138,local_130);
        puVar10 = local_158;
        (**(code **)(lVar20 + 0x38))(lVar16,0,1,lVar4);
        plVar19 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
        uVar17 = *(undefined8 *)(plVar19[2] + 0x10);
        _os_unfair_lock_lock(uVar17);
        lVar4 = (long)plVar19 + *(long *)(*plVar19 + 0x60);
        _swift_beginAccess(lVar4,auStack_d8,0x21,0);
        FUN_10028fba0(lVar16,lVar4 + *(int *)(local_170 + 0x5c));
        _swift_endAccess(auStack_d8);
        _os_unfair_lock_unlock(uVar17);
        FUN_1001803c8(pcVar11,1);
        _swift_release(param_1);
        FUN_100040bb4(lVar16,&DAT_100a82460,&DAT_1008175c0);
      }
      _swift_unownedRetainStrong(param_1);
      plVar19 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
      uVar17 = *(undefined8 *)(plVar19[2] + 0x10);
      _os_unfair_lock_lock(uVar17);
      lVar4 = *(long *)(*plVar19 + 0x60);
      _swift_beginAccess((long)plVar19 + lVar4,auStack_f0,0,0);
      FUN_10028ab0c((long)plVar19 + lVar4,lVar15);
      FUN_10007f314(lVar15 + 0xf0,auStack_d8,&DAT_100a82c40,&DAT_100817200);
      FUN_1000d27dc(lVar15,FUN_1002c76a8);
      _os_unfair_lock_unlock(uVar17);
      _swift_release(param_1);
      if (local_c0 == 0) {
        FUN_1001803c8(local_148,(uint)local_150 & 1);
        FUN_100040bb4(auStack_d8,&DAT_100a82c40,&DAT_100817200);
      }
      else {
        FUN_10003f030(auStack_d8,local_c0);
        _swift_unownedRetainStrong(param_1);
        _swift_unownedRetainStrong();
        plVar19 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
        uVar17 = *(undefined8 *)(plVar19[2] + 0x10);
        _os_unfair_lock_lock(uVar17);
        lVar4 = *(long *)(*plVar19 + 0x60);
        _swift_beginAccess((long)plVar19 + lVar4,auStack_108,0,0);
        FUN_10028ab0c((long)plVar19 + lVar4,lVar15);
        lVar20 = *(long *)(lVar15 + 0x148);
        _swift_bridgeObjectRetain(lVar20);
        FUN_1000d27dc(lVar15,FUN_1002c76a8);
        _os_unfair_lock_unlock(uVar17);
        lVar4 = *(long *)(lVar20 + 0x10);
        if (lVar4 == 0) {
          _swift_bridgeObjectRelease(lVar20);
          _swift_release(param_1);
          lVar15 = 0;
          __s10Foundation10URLRequestVMa();
          pcVar11 = *(code **)(*(long *)(lVar15 + -8) + 0x38);
          puVar5 = local_160;
        }
        else {
          lVar15 = 0;
          __s10Foundation10URLRequestVMa();
          puVar5 = local_160;
          lVar16 = *(long *)(lVar15 + -8);
          (**(code **)(lVar16 + 0x10))
                    (local_160,
                     lVar20 + ((ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff)) +
                     *(long *)(lVar16 + 0x48) * (lVar4 + -1),lVar15);
          _swift_bridgeObjectRelease(lVar20);
          _swift_release(param_1);
          pcVar11 = *(code **)(lVar16 + 0x38);
        }
        (*pcVar11)(puVar5,lVar4 == 0,1,lVar15);
        _swift_unownedRetainStrong(param_1);
        lVar4 = *(long *)(param_1 + _TtC9Alamofire11DataRequest::dataMutableState);
        uVar14 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10);
        _os_unfair_lock_lock(uVar14);
        _swift_beginAccess(lVar4 + 0x18,auStack_120,0,0);
        uVar17 = *(undefined8 *)(lVar4 + 0x18);
        uVar1 = *(undefined8 *)(lVar4 + 0x20);
        FUN_10010bd10(uVar17,uVar1);
        _os_unfair_lock_unlock(uVar14);
        _swift_release(param_1);
        pcVar12 = *(code **)(local_b8 + 0x108);
        *(long *)(puVar10 + -0x10) = local_b8;
        pcVar11 = local_148;
        uVar2 = (uint)local_150;
        (*pcVar12)(param_1,puVar5,local_178,uVar17,uVar1,local_148,(uint)local_150 & 1,local_c0);
        FUN_100006cc8(uVar17,uVar1);
        _swift_release(param_1);
        FUN_1001803c8(pcVar11,uVar2 & 1);
        FUN_100040bb4(puVar5,&DAT_100a82c30,&DAT_1008171f0);
        FUN_10003f094(auStack_d8);
      }
    }
  }
  return;
}

