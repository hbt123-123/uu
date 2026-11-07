// rea decompile_all
// name: FUN_100091850
// address: 0x100091850
// body: available
// range: 0x100091850-0x100091df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100091850(ulong param_1,long param_2,long param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9,
                  undefined4 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x13;
  code *pcVar11;
  ulong uVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [8];
  undefined4 local_178;
  undefined4 local_174;
  long local_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined4 local_13c;
  long local_138;
  ulong local_130;
  ulong local_128;
  undefined8 local_120;
  undefined1 *local_118;
  long local_110;
  long local_108;
  ulong local_100;
  undefined1 auStack_f8 [24];
  ulong local_e0 [3];
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  lVar3 = 0;
  local_130 = param_4;
  local_128 = param_5;
  local_120 = param_6;
  local_110 = param_3;
  __s10Foundation4UUIDVMa();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_138 = extraout_x13;
  local_118 = auStack_180 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = (long)(auStack_180 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar4 = &DAT_100999e30;
  _swift_allocObject(&DAT_100999e30,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_8;
  *(undefined4 *)(puVar4 + 0x18) = param_9;
  *(undefined4 *)(puVar4 + 0x1c) = param_10;
  _swift_beginAccess(param_2 + 0x10,auStack_c8,0,0);
  local_108 = param_2;
  local_100 = param_1;
  if ((long)param_1 < *(long *)(*(long *)(param_2 + 0x10) + 0x10)) {
    local_174 = param_10;
    local_178 = param_9;
    local_b0 = 0x2d65726f74736572;
    uStack_a8 = 0xe800000000000000;
    local_148 = puVar4;
    local_13c = param_7;
    local_e0[0] = param_1;
    _swift_retain_n(param_8,2);
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    uVar5 = 0x2d;
    uVar7 = 0xe100000000000000;
    __sSS6appendyySSF(0x2d,0xe100000000000000);
    __s10Foundation4UUIDVACycfC(lVar16);
    __s10Foundation4UUIDV10uuidStringSSvg();
    pcVar13 = *(code **)(lVar17 + 8);
    (*pcVar13)(lVar16,lVar3);
    __sSS6appendyySSF(uVar5,uVar7);
    lVar2 = local_110;
    _swift_bridgeObjectRelease(uVar7);
    uVar5 = uStack_a8;
    lVar8 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
    local_150 = local_b0;
    _swift_beginAccess(lVar2 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                       local_e0,0,0);
    pcVar11 = *(code **)(lVar17 + 0x10);
    lVar8 = lVar2 + lVar8;
    lVar9 = lVar16;
    (*pcVar11)(lVar16,lVar8,lVar3);
    __s10Foundation4UUIDV10uuidStringSSvg();
    local_158 = lVar9;
    (*pcVar13)(lVar16,lVar3);
    _swift_beginAccess(local_108 + 0x10,auStack_f8,0,0);
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100091df0);
      (*pcVar11)();
    }
    if (*(ulong *)(*(long *)(local_108 + 0x10) + 0x10) <= local_100) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100091df4);
      (*pcVar11)();
    }
    lVar9 = *(long *)(local_108 + 0x10) + local_100 * 0x44;
    uStack_88 = *(undefined8 *)(lVar9 + 0x48);
    local_90 = *(undefined8 *)(lVar9 + 0x40);
    uStack_78 = *(undefined8 *)(lVar9 + 0x58);
    uStack_80 = *(undefined8 *)(lVar9 + 0x50);
    local_70 = *(undefined1 *)(lVar9 + 0x60);
    uStack_a8 = *(undefined8 *)(lVar9 + 0x28);
    local_b0 = *(undefined8 *)(lVar9 + 0x20);
    uStack_98 = *(undefined8 *)(lVar9 + 0x38);
    uStack_a0 = *(undefined8 *)(lVar9 + 0x30);
    puVar4 = &DAT_100999b60;
    local_160 = param_8;
    _swift_allocObject(&DAT_100999b60,0x18,7);
    _swift_weakInit(puVar4 + 0x10,lVar2);
    (*pcVar11)(local_118,local_120,lVar3);
    uVar10 = (ulong)*(byte *)(lVar17 + 0x50);
    uVar12 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
    uVar14 = local_138 + uVar12 + 3 & 0xfffffffffffffffc;
    uVar15 = uVar14 + 0xb & 0xfffffffffffffff8;
    local_168 = uVar5;
    puVar6 = &DAT_100999e58;
    local_170 = lVar3;
    local_138 = lVar8;
    _swift_allocObject(&DAT_100999e58,uVar15 + 0x38,uVar10 | 7);
    *(undefined **)(puVar6 + 0x10) = puVar4;
    (**(code **)(lVar17 + 0x20))(puVar6 + uVar12,local_118,local_170);
    lVar3 = local_108;
    lVar17 = local_110;
    uVar12 = local_128;
    uVar10 = local_130;
    puVar1 = local_148;
    *(undefined4 *)(puVar6 + uVar14) = local_13c;
    *(ulong *)(puVar6 + uVar15) = local_100;
    *(long *)(puVar6 + uVar15 + 8) = local_108;
    *(long *)(puVar6 + uVar15 + 0x10) = local_110;
    *(code **)(puVar6 + uVar15 + 0x18) = FUN_100093054;
    *(undefined **)((long)(puVar6 + uVar15 + 0x18) + 8) = local_148;
    *(ulong *)(puVar6 + uVar15 + 0x28) = local_130;
    *(ulong *)((long)(puVar6 + uVar15 + 0x28) + 8) = local_128;
    _swift_retain(puVar4);
    _swift_retain(lVar3);
    _swift_retain(lVar17);
    _swift_retain(puVar1);
    _swift_bridgeObjectRetain(uVar12);
    *(undefined **)(lVar16 + -0x10) = puVar6;
    lVar3 = local_138;
    uVar5 = local_168;
    uVar14 = uVar10;
    FUN_100084c9c(uVar10,uVar12,local_158,local_138,&local_b0,local_150,local_168,
                  thunk_FUN_100093148);
    _swift_release(puVar4);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(lVar3);
    if ((uVar14 & 1) == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      uVar14 = local_100;
      *(ulong *)(lVar16 + -0x10) = local_100;
      FUN_1003fb4bc(FUN_100093068,lVar16 + -0x20,0xd00000000000009f,0x800000010087e740,
                    0x3a5f28796c707061,0xe900000000000029,0x200,0);
      uVar5 = local_160;
      _swift_retain(local_160);
      *(undefined4 *)(lVar16 + -0xc) = local_174;
      *(undefined4 *)(lVar16 + -0x10) = local_178;
      FUN_100091850(uVar14 + 1,local_108,lVar17,uVar10,uVar12,local_120,local_13c,uVar5);
      _swift_release(puVar1);
      _swift_release_n(uVar5,2);
    }
    else {
      _swift_release(local_160);
      _swift_release(puVar1);
    }
  }
  else {
    *(undefined1 *)
     (local_110 + _TtC14UURemoteServer19SecondScreenManager::restoringPersistedSettings) = 0;
    _swift_retain_n(param_8,2);
    FUN_10010f938();
    _swift_release(param_8);
    _swift_release(puVar4);
  }
  return;
}

