// rea decompile_all
// name: FUN_100084794
// address: 0x100084794
// body: available
// range: 0x100084794-0x100084bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100084794(int param_1,long param_2,byte param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 auStack_1c0 [2];
  undefined8 auStack_1b0 [2];
  long lStack_1a0;
  byte abStack_198 [8];
  undefined8 local_190;
  long local_188;
  undefined8 local_180;
  long local_178;
  undefined1 auStack_168 [24];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a73b60 != -1) {
    local_178 = lVar4;
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    lVar4 = local_178;
  }
  lVar7 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if (((lVar7 == 0) ||
      (lVar7 = *(long *)(lVar7 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
      lVar7 == 0)) ||
     (*(int *)(lVar7 + _TtC14UURemoteServer22StreamerConnectSession::handle) != param_1)) {
LAB_10008497c:
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_100084bc4,0,0xd00000000000009f,0x800000010087e740,0xd00000000000003d,
                  0x800000010087f600,0x8c,0);
  }
  else {
    lVar5 = lVar7;
    local_180 = param_6;
    local_178 = lVar4;
    FUN_1000c7b64();
    lVar4 = *(long *)(lVar5 + 0x78);
    bVar2 = *(byte *)(lVar5 + 0x81);
    _swift_release();
    if (((bVar2 & 1) != 0) || (lVar4 != 6)) goto LAB_10008497c;
    lVar4 = *(long *)(*(long *)(lVar7 + _TtC14UURemoteServer22StreamerConnectSession::
                                        ___lazy_storage___appDataHandler) + 0x38);
    if ((lVar4 == 0) ||
       (((*(byte *)(unaff_x20 + 0x14) & 1) != 0 || (iVar1 = *(int *)(unaff_x20 + 0x10), iVar1 < 0)))
       ) goto LAB_10008497c;
    uVar9 = *(undefined8 *)
             (*(long *)(lVar7 + _TtC14UURemoteServer22StreamerConnectSession::
                                ___lazy_storage___appDataHandler) + 0x30);
    local_188 = lVar7;
    *(undefined1 *)((long)&lStack_1a0 + lVar3) = 2;
    *(undefined8 *)((long)auStack_1b0 + lVar3) = 0xffffffffffffffff;
    *(undefined8 *)((long)auStack_1b0 + lVar3 + 8) = 0xffffffffffffffff;
    *(undefined8 *)((long)auStack_1c0 + lVar3) = 0xffffffffffffffff;
    *(undefined8 *)((long)auStack_1c0 + lVar3 + 8) = 0xffffffffffffffff;
    FUN_1005fe7e0(&local_104,0xffffffff,0xffffffff,0xffffffff,iVar1,0xffffffff,0xffffffff,0,
                  0xffffffff);
    lVar7 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
    uStack_148 = uStack_fc;
    local_150 = local_104;
    uStack_138 = uStack_ec;
    local_140 = local_f4;
    uStack_128 = uStack_dc;
    local_130 = local_e4;
    uStack_118 = uStack_cc;
    local_120 = uStack_d4;
    if (((param_3 & 1) != 0) && (param_2 != 0)) {
      local_190 = uVar9;
      _swift_beginAccess(unaff_x20 +
                         _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                         auStack_168,0,0);
      lVar5 = local_178;
      lVar7 = unaff_x20 + lVar7;
      (**(code **)(lVar10 + 0x10))((long)&local_190 + lVar3,lVar7,local_178);
      lVar6 = lVar4;
      _swift_bridgeObjectRetain(lVar4);
      __s10Foundation4UUIDV10uuidStringSSvg();
      (**(code **)(lVar10 + 8))((long)&local_190 + lVar3,lVar5);
      uStack_b8 = uStack_148;
      local_c0 = local_150;
      uStack_a8 = uStack_138;
      local_b0 = local_140;
      uStack_98 = uStack_128;
      local_a0 = local_130;
      uStack_88 = uStack_118;
      local_90 = local_120;
      local_80 = param_2 != 1;
      *(undefined8 *)((long)&lStack_1a0 + lVar3) = param_7;
      uVar9 = local_190;
      FUN_100084c9c(local_190,lVar4,lVar6,lVar7,&local_c0,param_4,param_5,local_180);
      uVar8 = (uint)uVar9;
      _swift_bridgeObjectRelease(lVar7);
      _swift_bridgeObjectRelease(lVar4);
      goto LAB_1000849d8;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)((long)&lStack_1a0 + lVar3) = param_2;
    abStack_198[lVar3] = param_3 & 1;
    FUN_1003fb4ec(FUN_100091844,(long)auStack_1b0 + lVar3,0xd00000000000009f,0x800000010087e740,
                  0xd00000000000003d,0x800000010087f600,0x97,0);
  }
  uVar8 = 0;
LAB_1000849d8:
  return uVar8 & 1;
}

