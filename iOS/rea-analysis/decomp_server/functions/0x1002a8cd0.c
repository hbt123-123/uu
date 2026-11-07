// rea decompile_all
// name: FUN_1002a8cd0
// address: 0x1002a8cd0
// body: available
// range: 0x1002a8cd0-0x1002a963f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002a8cd0(ulong param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined1 auStack_1c0 [16];
  long alStack_1b0 [2];
  undefined1 auStack_1a0 [8];
  long local_198;
  ulong local_190;
  long local_188;
  long local_180;
  long local_178;
  undefined1 *local_170;
  undefined8 local_168;
  code *local_160;
  long local_158;
  undefined1 *local_150;
  long local_148;
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
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  local_168 = param_3;
  local_160 = param_2;
  FUN_1002a7694();
  lVar7 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  puVar4 = &DAT_100a83428;
  local_158 = lVar3;
  local_150 = auStack_1a0 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar3 = (long)(auStack_1a0 + -(lVar7 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a82c30;
  local_148 = lVar3;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  uVar8 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_178 = lVar3 - uVar8;
  lVar9 = local_178 - uVar8;
  lVar3 = 0;
  local_170 = (undefined1 *)lVar9;
  FUN_1002c76a8();
  lVar9 = lVar9 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  uVar8 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_180 = lVar9 - uVar8;
  lVar11 = local_180 - uVar8;
  _swift_unownedRetainStrong(param_1);
  plVar15 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
  uVar12 = *(undefined8 *)(plVar15[2] + 0x10);
  _os_unfair_lock_lock(uVar12);
  lVar7 = *(long *)(*plVar15 + 0x60);
  _swift_beginAccess((long)plVar15 + lVar7,auStack_80,0,0);
  FUN_100082394((long)plVar15 + lVar7,lVar9,FUN_1002c76a8);
  local_188 = lVar3;
  FUN_10007f314(lVar9 + *(int *)(lVar3 + 0x5c),lVar11,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar9,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar12);
  _swift_release(param_1);
  lVar7 = 0;
  FUN_100277ad0();
  lVar14 = *(long *)(lVar7 + -8);
  lVar3 = lVar11;
  (**(code **)(lVar14 + 0x30))(lVar11,1,lVar7);
  FUN_100040bb4(lVar11,&DAT_100a82460,&DAT_1008175c0);
  if ((int)lVar3 == 1) {
    uVar8 = param_1;
    _swift_unownedRetainStrong();
    FUN_1002c85ec();
    _swift_release(param_1);
    if (uVar8 != 0) {
      local_198 = lVar14;
      _swift_unownedRetainStrong(param_1);
      plVar15 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
      uVar12 = *(undefined8 *)(plVar15[2] + 0x10);
      _os_unfair_lock_lock(uVar12);
      lVar3 = *(long *)(*plVar15 + 0x60);
      _swift_beginAccess((long)plVar15 + lVar3,auStack_98,0,0);
      FUN_100082394((long)plVar15 + lVar3,lVar9,FUN_1002c76a8);
      lVar14 = *(long *)(lVar9 + 0x148);
      _swift_bridgeObjectRetain(lVar14);
      FUN_1000d27dc(lVar9,FUN_1002c76a8);
      _os_unfair_lock_unlock(uVar12);
      lVar3 = *(long *)(lVar14 + 0x10);
      local_190 = uVar8;
      if (lVar3 == 0) {
        _swift_bridgeObjectRelease(lVar14);
        _swift_release(param_1);
        lVar5 = 0;
        __s10Foundation10URLRequestVMa();
        pcVar10 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
        puVar6 = local_170;
      }
      else {
        lVar5 = 0;
        __s10Foundation10URLRequestVMa();
        puVar6 = local_170;
        lVar13 = *(long *)(lVar5 + -8);
        (**(code **)(lVar13 + 0x10))
                  (local_170,
                   lVar14 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)) +
                   *(long *)(lVar13 + 0x48) * (lVar3 + -1),lVar5);
        _swift_bridgeObjectRelease(lVar14);
        _swift_release(param_1);
        pcVar10 = *(code **)(lVar13 + 0x38);
      }
      (*pcVar10)(puVar6,lVar3 == 0,1,lVar5);
      _swift_unownedRetainStrong(param_1);
      plVar15 = *(long **)(param_1 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
      uVar12 = *(undefined8 *)(plVar15[2] + 0x10);
      _os_unfair_lock_lock(uVar12);
      lVar3 = *(long *)(*plVar15 + 0x60);
      _swift_beginAccess((long)plVar15 + lVar3,auStack_b0,0,0);
      puVar2 = local_150;
      FUN_100082394((long)plVar15 + lVar3,local_150,FUN_1002a7694);
      lVar3 = local_148;
      FUN_10007f314(puVar2 + *(int *)(local_158 + 0x14),local_148,&DAT_100a83428,&DAT_100817bb0);
      FUN_1000d27dc(puVar2,FUN_1002a7694);
      _os_unfair_lock_unlock(uVar12);
      _swift_release(param_1);
      lVar14 = (long)puVar6;
      uVar8 = local_190;
      (*local_160)(puVar6,local_190,lVar3);
      local_160 = (code *)lVar14;
      FUN_100040bb4(lVar3,&DAT_100a83428,&DAT_100817bb0);
      FUN_100040bb4(puVar6,&DAT_100a82c30,&DAT_1008171f0);
      local_168 = CONCAT44(local_168._4_4_,(int)uVar8);
      if ((uVar8 & 1) != 0) {
        _swift_unownedRetainStrong(param_1);
        pcVar10 = local_160;
        _swift_getErrorValue(local_160,auStack_128,local_140);
        *(code **)(lVar11 + -0x10) = pcVar10;
        _swift_errorRetain(pcVar10);
        lVar14 = local_180;
        FUN_100277c6c(local_180,FUN_10028fb7c,lVar11 + -0x20,local_138,local_130);
        (**(code **)(local_198 + 0x38))(lVar14,0,1,lVar7);
        plVar15 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
        uVar12 = *(undefined8 *)(plVar15[2] + 0x10);
        _os_unfair_lock_lock(uVar12);
        lVar3 = (long)plVar15 + *(long *)(*plVar15 + 0x60);
        _swift_beginAccess(lVar3,auStack_d8,0x21,0);
        FUN_10028fba0(lVar14,lVar3 + *(int *)(local_188 + 0x5c));
        _swift_endAccess(auStack_d8);
        _os_unfair_lock_unlock(uVar12);
        FUN_1001803c8(pcVar10,1);
        _swift_release(param_1);
        FUN_100040bb4(lVar14,&DAT_100a82460,&DAT_1008175c0);
      }
      _swift_unownedRetainStrong(param_1);
      plVar15 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
      uVar12 = *(undefined8 *)(plVar15[2] + 0x10);
      _os_unfair_lock_lock(uVar12);
      lVar3 = *(long *)(*plVar15 + 0x60);
      _swift_beginAccess((long)plVar15 + lVar3,auStack_f0,0,0);
      FUN_100082394((long)plVar15 + lVar3,lVar9,FUN_1002c76a8);
      FUN_10007f314(lVar9 + 0xf0,auStack_d8,&DAT_100a82c40,&DAT_100817200);
      FUN_1000d27dc(lVar9,FUN_1002c76a8);
      _os_unfair_lock_unlock(uVar12);
      _swift_release(param_1);
      if (local_c0 == 0) {
        FUN_1001803c8(local_160,(uint)local_168 & 1);
        FUN_100040bb4(auStack_d8,&DAT_100a82c40,&DAT_100817200);
      }
      else {
        puVar6 = auStack_d8;
        FUN_10003f030(puVar6,local_c0);
        local_170 = puVar6;
        _swift_unownedRetainStrong(param_1);
        _swift_unownedRetainStrong();
        plVar15 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
        uVar12 = *(undefined8 *)(plVar15[2] + 0x10);
        _os_unfair_lock_lock(uVar12);
        lVar3 = *(long *)(*plVar15 + 0x60);
        _swift_beginAccess((long)plVar15 + lVar3,auStack_108,0,0);
        FUN_100082394((long)plVar15 + lVar3,lVar9,FUN_1002c76a8);
        lVar7 = *(long *)(lVar9 + 0x148);
        _swift_bridgeObjectRetain(lVar7);
        FUN_1000d27dc(lVar9,FUN_1002c76a8);
        _os_unfair_lock_unlock(uVar12);
        lVar3 = *(long *)(lVar7 + 0x10);
        if (lVar3 == 0) {
          _swift_bridgeObjectRelease(lVar7);
          _swift_release(param_1);
          lVar11 = 0;
          __s10Foundation10URLRequestVMa();
          pcVar10 = *(code **)(*(long *)(lVar11 + -8) + 0x38);
          lVar9 = local_178;
        }
        else {
          lVar11 = 0;
          __s10Foundation10URLRequestVMa();
          lVar9 = local_178;
          lVar14 = *(long *)(lVar11 + -8);
          (**(code **)(lVar14 + 0x10))
                    (local_178,
                     lVar7 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)) +
                     *(long *)(lVar14 + 0x48) * (lVar3 + -1),lVar11);
          _swift_bridgeObjectRelease(lVar7);
          _swift_release(param_1);
          pcVar10 = *(code **)(lVar14 + 0x38);
        }
        (*pcVar10)(lVar9,lVar3 == 0,1,lVar11);
        _swift_unownedRetainStrong(param_1);
        plVar15 = *(long **)(param_1 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
        uVar12 = *(undefined8 *)(plVar15[2] + 0x10);
        _os_unfair_lock_lock(uVar12);
        lVar3 = *(long *)(*plVar15 + 0x60);
        _swift_beginAccess((long)plVar15 + lVar3,auStack_120,0,0);
        puVar6 = local_150;
        FUN_100082394((long)plVar15 + lVar3,local_150,FUN_1002a7694);
        lVar3 = local_148;
        FUN_10007f314(puVar6 + *(int *)(local_158 + 0x14),local_148,&DAT_100a83428,&DAT_100817bb0);
        FUN_1000d27dc(puVar6,FUN_1002a7694);
        _os_unfair_lock_unlock(uVar12);
        _swift_release(param_1);
        pcVar10 = local_160;
        uVar1 = (uint)local_168;
        (**(code **)(local_b8 + 0x158))
                  (param_1,lVar9,local_190,lVar3,local_160,(uint)local_168 & 1,local_c0,local_b8);
        _swift_release(param_1);
        FUN_1001803c8(pcVar10,uVar1 & 1);
        FUN_100040bb4(lVar3,&DAT_100a83428,&DAT_100817bb0);
        FUN_100040bb4(lVar9,&DAT_100a82c30,&DAT_1008171f0);
        FUN_10003f094(auStack_d8);
      }
    }
  }
  return;
}

