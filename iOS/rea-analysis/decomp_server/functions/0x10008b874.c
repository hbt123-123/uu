// rea decompile_all
// name: FUN_10008b874
// address: 0x10008b874
// body: available
// range: 0x10008b874-0x10008bd83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008b874(ulong param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  ulong param_6,ulong param_7,undefined8 param_8,undefined4 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  undefined1 auStack_1a0 [16];
  ulong auStack_190 [2];
  undefined1 auStack_180 [8];
  ulong local_178;
  long local_170;
  undefined8 local_168;
  long local_160;
  long local_158;
  undefined8 local_150;
  long local_148;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  code *local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  undefined1 *local_108;
  long local_100;
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
  
  lVar2 = 0;
  local_120 = param_6;
  local_118 = param_7;
  __s10Foundation4UUIDVMa();
  lVar15 = *(long *)(lVar2 + -8);
  lVar12 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_108 = auStack_180 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = (long)(auStack_180 + -(lVar12 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  _swift_beginAccess(param_2 + 0x10,auStack_c8,0,0);
  if ((long)param_1 < *(long *)(*(long *)(param_2 + 0x10) + 0x10)) {
    local_b0 = 0x2d65726f74736572;
    uStack_a8 = 0xe800000000000000;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    local_140 = param_5;
    local_130 = param_8;
    local_128 = param_4;
    local_110 = param_1;
    local_e0[0] = param_1;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    local_100 = param_2;
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    uVar3 = 0x2d;
    uVar7 = 0xe100000000000000;
    __sSS6appendyySSF(0x2d,0xe100000000000000);
    __s10Foundation4UUIDVACycfC(lVar10);
    __s10Foundation4UUIDV10uuidStringSSvg();
    pcVar16 = *(code **)(lVar15 + 8);
    (*pcVar16)(lVar10,lVar2);
    lVar1 = local_100;
    __sSS6appendyySSF(uVar3,uVar7);
    _swift_bridgeObjectRelease(uVar7);
    uVar3 = uStack_a8;
    lVar8 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
    local_150 = local_b0;
    _swift_beginAccess(param_3 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                       local_e0,0,0);
    pcVar13 = *(code **)(lVar15 + 0x10);
    lVar8 = param_3 + lVar8;
    lVar4 = lVar10;
    local_148 = lVar15;
    (*pcVar13)(lVar10,lVar8,lVar2);
    __s10Foundation4UUIDV10uuidStringSSvg();
    uVar9 = local_110;
    local_160 = lVar4;
    local_158 = lVar8;
    (*pcVar16)(lVar10,lVar2);
    _swift_beginAccess(lVar1 + 0x10,auStack_f8,0,0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10008bd80);
      (*pcVar13)();
    }
    lVar15 = *(long *)(lVar1 + 0x10);
    if (*(ulong *)(lVar15 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10008bd84);
      (*pcVar13)();
    }
    local_134 = param_9;
    lVar15 = lVar15 + uVar9 * 0x44;
    uStack_88 = *(undefined8 *)(lVar15 + 0x48);
    local_90 = *(undefined8 *)(lVar15 + 0x40);
    uStack_78 = *(undefined8 *)(lVar15 + 0x58);
    uStack_80 = *(undefined8 *)(lVar15 + 0x50);
    local_70 = *(undefined1 *)(lVar15 + 0x60);
    uStack_a8 = *(undefined8 *)(lVar15 + 0x28);
    local_b0 = *(undefined8 *)(lVar15 + 0x20);
    uStack_98 = *(undefined8 *)(lVar15 + 0x38);
    uStack_a0 = *(undefined8 *)(lVar15 + 0x30);
    puVar5 = &DAT_100999b60;
    _swift_allocObject(&DAT_100999b60,0x18,7);
    _swift_weakInit(puVar5 + 0x10,param_3);
    local_168 = uVar3;
    local_170 = lVar2;
    (*pcVar13)(local_108,local_130,lVar2);
    lVar2 = local_148;
    uVar9 = (ulong)*(byte *)(local_148 + 0x50);
    uVar14 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
    local_178 = lVar12 + uVar14 + 3 & 0xfffffffffffffffc;
    uVar11 = local_178 + 0xb & 0xfffffffffffffff8;
    puVar6 = &DAT_100999e80;
    _swift_allocObject(&DAT_100999e80,uVar11 + 0x38,uVar9 | 7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    (**(code **)(lVar2 + 0x20))(puVar6 + uVar14,local_108,local_170);
    lVar12 = local_100;
    uVar14 = local_118;
    uVar9 = local_120;
    uVar7 = local_140;
    *(undefined4 *)(puVar6 + local_178) = local_134;
    *(ulong *)(puVar6 + uVar11) = local_110;
    *(long *)(puVar6 + uVar11 + 8) = local_100;
    *(long *)(puVar6 + uVar11 + 0x10) = param_3;
    *(code **)(puVar6 + uVar11 + 0x18) = local_128;
    *(undefined8 *)((long)(puVar6 + uVar11 + 0x18) + 8) = local_140;
    *(ulong *)(puVar6 + uVar11 + 0x28) = local_120;
    *(ulong *)((long)(puVar6 + uVar11 + 0x28) + 8) = local_118;
    _swift_retain(puVar5);
    _swift_retain(lVar12);
    _swift_retain(param_3);
    _swift_retain(uVar7);
    _swift_bridgeObjectRetain(uVar14);
    *(undefined **)(lVar10 + -0x10) = puVar6;
    lVar2 = local_158;
    uVar3 = local_168;
    uVar11 = uVar9;
    FUN_100084c9c(uVar9,uVar14,local_160,local_158,&local_b0,local_150,local_168,thunk_FUN_100093148
                 );
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(lVar2);
    if ((uVar11 & 1) == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      uVar11 = local_110;
      *(ulong *)(lVar10 + -0x10) = local_110;
      FUN_1003fb4bc(thunk_FUN_100093068,lVar10 + -0x20,0xd00000000000009f,0x800000010087e740,
                    0x3a5f28796c707061,0xe900000000000029,0x200,0);
      *(undefined4 *)(lVar10 + -0x10) = local_134;
      FUN_10008b874(uVar11 + 1,lVar12,param_3,local_128,uVar7,uVar9,uVar14,local_130);
    }
  }
  else {
    *(undefined1 *)(param_3 + _TtC14UURemoteServer19SecondScreenManager::restoringPersistedSettings)
         = 0;
    (*param_4)();
  }
  return;
}

