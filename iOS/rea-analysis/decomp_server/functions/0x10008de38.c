// rea decompile_all
// name: FUN_10008de38
// address: 0x10008de38
// body: available
// range: 0x10008de38-0x10008e23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008de38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_150 [16];
  undefined8 auStack_140 [3];
  long lStack_128;
  char *local_120;
  char *local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  undefined1 local_f4;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long local_90;
  int local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar13 = (long)&local_120 + lVar1;
  _swift_beginAccess(param_1 + 0x10,auStack_a8,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _swift_release(uVar5);
    lVar2 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
    _swift_beginAccess(param_1 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                       auStack_c0,0,0);
    (**(code **)(lVar12 + 0x10))(uVar13,param_1 + lVar2,lVar4);
    uVar6 = uVar13;
    __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(uVar13,param_2);
    (**(code **)(lVar12 + 8))(uVar13,lVar4);
    if (((uVar6 & 1) != 0) && (lVar4 = *(long *)(param_1 + 0x70), lVar4 != 0)) {
      local_70 = *(undefined4 *)(param_1 + 0x90);
      local_80 = *(undefined8 *)(param_1 + 0x80);
      uVar13 = *(ulong *)(param_1 + 0x78);
      iVar11 = (int)uVar13;
      local_78 = (undefined4)*(undefined8 *)(param_1 + 0x88);
      uStack_74 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
      local_90 = lVar4;
      local_88 = iVar11;
      if ((0 < param_3) || (iVar3 = iVar11, _CGDisplayIsInMirrorSet(), iVar3 != 0)) {
        uVar13 = uVar13 & 0xffffffff;
        uVar5 = 0;
        local_100 = lVar4;
        FUN_100401b14();
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(long **)((long)auStack_140 + lVar1 + 0x10) = &local_90;
        *(long *)((long)&lStack_128 + lVar1) = param_3;
        local_120 = "reportedAutoFrameQuality";
        local_118 = s_SecondScreenManager___deinit_10087f420 + 0x10;
        local_110 = uVar5;
        FUN_1003fb48c(FUN_100091814,(long)auStack_140 + lVar1,0xd00000000000009f,0x800000010087e740,
                      0xd00000000000002c,0x800000010087f430,0x30f,0);
        uVar9 = *(undefined8 *)(param_1 + 0x40);
        uVar10 = *(undefined8 *)(param_1 + 0x58);
        puVar7 = &DAT_100a76608;
        FUN_100004bb4(&DAT_100a76608,&DAT_10080b130);
        _swift_initStackObject();
        *(undefined8 *)(puVar7 + 0x18) = 2;
        *(undefined8 *)(puVar7 + 0x10) = 1;
        *(undefined8 *)(puVar7 + 0x20) = 1;
        *(int *)(puVar7 + 0x28) = iVar11;
        puVar8 = puVar7;
        FUN_1000cc774();
        _swift_setDeallocating(puVar7);
        _swift_unknownObjectRetain(uVar9);
        _swift_bridgeObjectRetain(uVar10);
        local_f4 = 0;
        puVar7 = puVar8;
        uVar5 = uVar10;
        FUN_10004bca0();
        local_108 = uVar5;
        _swift_unknownObjectRelease(uVar9);
        _swift_bridgeObjectRelease(uVar10);
        _swift_bridgeObjectRelease(puVar8);
        if (((uVar13 & 0xff) == 0) && (_CGDisplayIsInMirrorSet(), iVar11 == 0)) {
          FUN_100075118(puVar7,local_108,0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(long **)((long)auStack_140 + lVar1 + 0x10) = &local_90;
          FUN_1003fb48c(FUN_10009182c,(long)auStack_140 + lVar1,0xd00000000000009f,
                        (ulong)local_120 | 0x8000000000000000,0xd00000000000002c,
                        (ulong)local_118 | 0x8000000000000000,0x314,0);
        }
        else {
          if (param_3 < 10) {
            FUN_100075118(puVar7,local_108,uVar13);
            FUN_10008dac8(param_2,param_3 + 1);
            _swift_release(param_1);
            return;
          }
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(long **)((long)auStack_140 + lVar1) = &local_90;
          *(undefined **)((long)auStack_140 + lVar1 + 8) = puVar7;
          uVar5 = local_108;
          *(undefined8 *)((long)auStack_140 + lVar1 + 0x10) = local_108;
          *(char *)((long)&lStack_128 + lVar1) = (char)uVar13;
          FUN_1003fb4ec(FUN_10009181c,auStack_150 + lVar1,0xd00000000000009f,
                        (ulong)local_120 | 0x8000000000000000,0xd00000000000002c,
                        (ulong)local_118 | 0x8000000000000000,0x319,0);
          FUN_100075118(puVar7,uVar5,uVar13);
        }
        _swift_release(param_1);
        return;
      }
    }
    _swift_release(param_1);
  }
  return;
}

