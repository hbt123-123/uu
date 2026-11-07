// rea decompile_all
// name: FUN_100091df4
// address: 0x100091df4
// body: available
// range: 0x100091df4-0x1000927ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100091df4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined4 param_6,ulong param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  code *pcVar18;
  int iVar19;
  undefined1 auStack_2a0 [8];
  undefined8 uStack_298;
  undefined8 uStack_290;
  int aiStack_288 [2];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [8];
  char *local_268;
  char *pcStack_260;
  undefined *local_258;
  undefined8 *local_250;
  undefined8 local_248;
  uint local_23c;
  undefined1 *local_238;
  long local_230;
  long local_228;
  long local_220;
  undefined4 local_214;
  undefined1 auStack_210 [28];
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  undefined8 local_1c4;
  undefined8 uStack_1bc;
  undefined1 local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined1 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  ulong local_e4;
  ulong uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  ulong local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar11 = 0;
  local_220 = param_1;
  local_214 = param_6;
  __s10Foundation4UUIDVMa();
  local_230 = *(long *)(lVar11 + -8);
  local_228 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_230 + 0x40));
  lVar15 = DAT_100a73b60;
  lVar11 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_238 = auStack_270 + lVar11;
  _swift_retain(param_5);
  if (lVar15 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar15 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                    _TtC14UURemoteServer15StreamerManager::dispatcher);
  iVar19 = (int)param_3;
  if (((lVar15 == 0) ||
      (lVar15 = *(long *)(lVar15 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
      lVar15 == 0)) ||
     (*(int *)(lVar15 + _TtC14UURemoteServer22StreamerConnectSession::handle) != iVar19)) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)((long)&uStack_280 + lVar11) = iVar19;
    FUN_1003fb48c(FUN_100092fdc,(long)&uStack_290 + lVar11,0xd00000000000009f,0x800000010087e740,
                  0xd000000000000035,0x800000010087f9f0,0x1b4,0);
    *(undefined1 *)(param_4 + _TtC14UURemoteServer19SecondScreenManager::restoringPersistedSettings)
         = 0;
  }
  else {
    local_23c = (uint)param_7;
    lVar15 = local_220;
    local_248 = param_2;
    FUN_1001a11bc(local_220,param_2);
    plVar16 = *(long **)(lVar15 + 0x30);
    pcVar18 = *(code **)(*plVar16 + 0xb0);
    _swift_retain(plVar16);
    (*pcVar18)(&local_e4);
    _swift_release(plVar16);
    _swift_release(lVar15);
    uStack_98 = uStack_dc;
    local_a0 = local_e4;
    local_88 = uStack_cc;
    local_90 = local_d4;
    uStack_78 = uStack_bc;
    local_80 = local_c4;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)((long)&uStack_280 + lVar11) = iVar19;
    *(undefined8 **)((long)&uStack_278 + lVar11) = &local_a0;
    FUN_1003fb45c(FUN_100092fe4,(long)&uStack_290 + lVar11,0xd00000000000009f,0x800000010087e740,
                  0xd000000000000035,0x800000010087f9f0,0x1ba,0);
    if ((((local_a0 & 1) != 0) && ((*(byte *)(param_4 + 0x14) & 1) == 0)) &&
       (iVar19 = *(int *)(param_4 + 0x10), -1 < iVar19)) {
      local_268 = "reportedAutoFrameQuality";
      pcStack_260 = s___10087f9d0 + 0x20;
      puVar12 = &DAT_100999e08;
      _swift_allocObject(&DAT_100999e08,0x18,7);
      puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar17 = (undefined8 *)(puVar12 + 0x10);
      *puVar17 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_258 = puVar12;
      local_250 = puVar17;
      if (((int)local_88 == 0) || ((int)local_88 == 1)) {
        *(char *)((long)&uStack_280 + lVar11) = (char)local_88;
        *(undefined8 *)((long)&uStack_290 + lVar11) = 0xffffffffffffffff;
        *(undefined8 *)((long)aiStack_288 + lVar11) = 0xffffffffffffffff;
        *(undefined8 *)(auStack_2a0 + lVar11) = 0xffffffffffffffff;
        *(undefined8 *)((long)&uStack_298 + lVar11) = 0xffffffffffffffff;
        FUN_1005fe7e0(&local_1f4,0xffffffff,0xffffffff,0xffffffff,iVar19,0xffffffff,0xffffffff,0,
                      0xffffffff);
        *puVar17 = puVar14;
        puVar12 = (undefined *)0x0;
        FUN_100034d34(0,1,1,puVar14);
        *puVar17 = puVar12;
        uVar1 = *(ulong *)(puVar12 + 0x10);
        puVar14 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          FUN_100034d34(puVar14,uVar1 + 1,1,puVar12);
        }
        *(ulong *)(puVar14 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x48) = uStack_1cc;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x40) = local_1d4;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x58) = uStack_1bc;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x50) = local_1c4;
        puVar14[uVar1 * 0x44 + 0x60] = local_1b4;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x28) = uStack_1ec;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x20) = local_1f4;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x38) = uStack_1dc;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x30) = local_1e4;
        *local_250 = puVar14;
      }
      puVar17 = local_250;
      uVar7 = local_a0._4_4_;
      uVar1 = uStack_98 & 0xffffffff;
      iVar8 = uStack_98._4_4_;
      if (((-1 < (long)local_a0) || (0 < (int)uStack_98)) || (0 < uStack_98._4_4_)) {
        uVar9 = (undefined4)local_90;
        uVar10 = local_90._4_4_;
        *(undefined1 *)((long)&uStack_280 + lVar11) = 2;
        *(undefined8 *)((long)aiStack_288 + lVar11) = 0xffffffffffffffff;
        *(undefined4 *)((long)&uStack_290 + lVar11) = uVar9;
        *(undefined4 *)((long)aiStack_288 + lVar11 + -4) = uVar10;
        *(undefined4 *)((long)&uStack_298 + lVar11 + 4) = 0xffffffff;
        *(undefined8 *)(auStack_2a0 + lVar11 + 4) = 0xffffffffffffffff;
        *(undefined4 *)(auStack_2a0 + lVar11) = uVar7;
        FUN_1005fe7e0(&local_1b0,0xffffffff,0xffffffff,0xffffffff,iVar19,uVar1,iVar8,0,0xffffffff);
        puVar12 = puVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        *puVar17 = puVar14;
        puVar13 = puVar14;
        if (((ulong)puVar12 & 1) == 0) {
          puVar13 = (undefined *)0x0;
          FUN_100034d34(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
          *puVar17 = puVar13;
        }
        uVar1 = *(ulong *)(puVar13 + 0x10);
        puVar14 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          FUN_100034d34(puVar14,uVar1 + 1,1,puVar13);
        }
        *(ulong *)(puVar14 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x28) = uStack_1a8;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x20) = local_1b0;
        puVar14[uVar1 * 0x44 + 0x60] = local_170;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x48) = uStack_188;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x40) = uStack_190;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x58) = uStack_178;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x50) = local_180;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x38) = uStack_198;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x30) = local_1a0;
        *local_250 = puVar14;
      }
      puVar17 = local_250;
      iVar8 = local_88._4_4_;
      if (0 < local_88._4_4_) {
        *(undefined1 *)((long)&uStack_280 + lVar11) = 2;
        *(undefined4 *)((long)aiStack_288 + lVar11) = 0xffffffff;
        *(int *)((long)aiStack_288 + lVar11 + 4) = iVar8;
        *(undefined8 *)((long)&uStack_298 + lVar11) = 0xffffffffffffffff;
        *(undefined8 *)((long)&uStack_290 + lVar11) = 0xffffffffffffffff;
        *(undefined8 *)(auStack_2a0 + lVar11) = 0xffffffffffffffff;
        FUN_1005fe7e0(&local_16c,iVar8,0xffffffff,0xffffffff,iVar19,0xffffffff,0xffffffff,0,
                      0xffffffff);
        puVar12 = puVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        *puVar17 = puVar14;
        puVar13 = puVar14;
        if (((ulong)puVar12 & 1) == 0) {
          puVar13 = (undefined *)0x0;
          FUN_100034d34(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
          *puVar17 = puVar13;
        }
        uVar1 = *(ulong *)(puVar13 + 0x10);
        puVar14 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          FUN_100034d34(puVar14,uVar1 + 1,1,puVar13);
        }
        *(ulong *)(puVar14 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x28) = uStack_164;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x20) = local_16c;
        puVar14[uVar1 * 0x44 + 0x60] = local_12c;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x48) = uStack_144;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x40) = uStack_14c;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x58) = uStack_134;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x50) = local_13c;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x38) = uStack_154;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x30) = local_15c;
        *local_250 = puVar14;
      }
      puVar17 = local_250;
      uVar1 = local_80 & 0xffffffff;
      uVar7 = local_80._4_4_;
      if ((-1 < (int)local_80) || (-1 < (long)local_80)) {
        uVar9 = uStack_78._4_4_;
        *(undefined1 *)((long)&uStack_280 + lVar11) = 2;
        *(undefined8 *)((long)&uStack_290 + lVar11) = 0xffffffffffffffff;
        *(undefined8 *)((long)aiStack_288 + lVar11) = 0xffffffffffffffff;
        *(undefined8 *)(auStack_2a0 + lVar11) = 0xffffffffffffffff;
        *(undefined8 *)((long)&uStack_298 + lVar11) = 0xffffffffffffffff;
        FUN_1005fe7e0(&local_e4,0xffffffff,uVar1,uVar7,iVar19,0xffffffff,0xffffffff,uVar9,0xffffffff
                     );
        puVar12 = puVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        *puVar17 = puVar14;
        puVar13 = puVar14;
        if (((ulong)puVar12 & 1) == 0) {
          puVar13 = (undefined *)0x0;
          FUN_100034d34(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
          *puVar17 = puVar13;
        }
        uVar1 = *(ulong *)(puVar13 + 0x10);
        puVar14 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          FUN_100034d34(puVar14,uVar1 + 1,1,puVar13);
        }
        *(ulong *)(puVar14 + 0x10) = uVar1 + 1;
        *(ulong *)(puVar14 + uVar1 * 0x44 + 0x28) = uStack_dc;
        *(ulong *)(puVar14 + uVar1 * 0x44 + 0x20) = local_e4;
        puVar14[uVar1 * 0x44 + 0x60] = local_a4;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x48) = uStack_bc;
        *(ulong *)(puVar14 + uVar1 * 0x44 + 0x40) = local_c4;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x58) = uStack_ac;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x50) = local_b4;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x38) = uStack_cc;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x30) = local_d4;
        *local_250 = puVar14;
      }
      puVar17 = local_250;
      iVar8 = (int)uStack_78;
      if (-1 < (int)uStack_78) {
        *(undefined1 *)((long)&uStack_280 + lVar11) = 2;
        *(int *)((long)aiStack_288 + lVar11) = iVar8;
        *(undefined4 *)((long)aiStack_288 + lVar11 + 4) = 0xffffffff;
        *(undefined8 *)((long)&uStack_298 + lVar11) = 0xffffffffffffffff;
        *(undefined8 *)((long)&uStack_290 + lVar11) = 0xffffffffffffffff;
        *(undefined8 *)(auStack_2a0 + lVar11) = 0xffffffffffffffff;
        FUN_1005fe7e0(&local_128,0xffffffff,0xffffffff,0xffffffff,iVar19,0xffffffff,0xffffffff,0,
                      0xffffffff);
        puVar12 = puVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        *puVar17 = puVar14;
        puVar13 = puVar14;
        if (((ulong)puVar12 & 1) == 0) {
          puVar13 = (undefined *)0x0;
          FUN_100034d34(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
          *puVar17 = puVar13;
        }
        uVar1 = *(ulong *)(puVar13 + 0x10);
        puVar14 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          FUN_100034d34(puVar14,uVar1 + 1,1,puVar13);
        }
        *(ulong *)(puVar14 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x28) = uStack_120;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x20) = local_128;
        puVar14[uVar1 * 0x44 + 0x60] = local_e8;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x48) = uStack_100;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x40) = local_108;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x58) = uStack_f0;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x50) = local_f8;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x38) = uStack_110;
        *(undefined8 *)(puVar14 + uVar1 * 0x44 + 0x30) = local_118;
        *local_250 = puVar14;
      }
      puVar17 = local_250;
      if (*(long *)(puVar14 + 0x10) == 0) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar2 = local_248;
        *(long *)((long)&uStack_280 + lVar11) = local_220;
        *(undefined8 *)((long)&uStack_278 + lVar11) = uVar2;
        FUN_1003fb45c(FUN_100093028,(long)&uStack_290 + lVar11,0xd00000000000009f,
                      (ulong)local_268 | 0x8000000000000000,0xd000000000000035,
                      (ulong)pcStack_260 | 0x8000000000000000,0x1df,0);
        *(undefined1 *)
         (param_4 + _TtC14UURemoteServer19SecondScreenManager::restoringPersistedSettings) = 0;
        FUN_10010f938(param_5,local_214,local_23c);
        _swift_release(param_5);
        puVar12 = local_258;
      }
      else {
        *(undefined1 *)
         (param_4 + _TtC14UURemoteServer19SecondScreenManager::restoringPersistedSettings) = 1;
        (*(code *)PTR____chkstk_darwin_100995498)();
        lVar6 = local_220;
        uVar2 = local_248;
        *(long *)((long)&uStack_290 + lVar11) = local_220;
        *(undefined8 *)((long)aiStack_288 + lVar11) = uVar2;
        *(undefined8 **)((long)&uStack_280 + lVar11) = puVar17;
        FUN_1003fb48c(FUN_10009301c,auStack_2a0 + lVar11,0xd00000000000009f,
                      (ulong)local_268 | 0x8000000000000000,0xd000000000000035,
                      (ulong)pcStack_260 | 0x8000000000000000,0x1e6,0);
        lVar15 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
        _swift_beginAccess(param_4 + _TtC14UURemoteServer19SecondScreenManager::
                                     secondScreenGeneration,auStack_210,0,0);
        lVar5 = local_228;
        lVar4 = local_230;
        puVar3 = local_238;
        (**(code **)(local_230 + 0x10))(local_238,param_4 + lVar15,local_228);
        _swift_retain(param_5);
        *(uint *)((long)&uStack_280 + lVar11 + 4) = local_23c;
        *(undefined4 *)((long)&uStack_280 + lVar11) = local_214;
        puVar12 = local_258;
        FUN_100091850(0,local_258,param_4,lVar6,uVar2,puVar3,param_3,param_5);
        _swift_release(param_5);
        (**(code **)(lVar4 + 8))(puVar3,lVar5);
        _swift_release(param_5);
      }
      goto LAB_1000920a4;
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar2 = local_248;
    *(long *)((long)&uStack_280 + lVar11) = local_220;
    *(undefined8 *)((long)&uStack_278 + lVar11) = uVar2;
    FUN_1003fb45c(FUN_100092ff0,(long)&uStack_290 + lVar11,0xd00000000000009f,0x800000010087e740,
                  0xd000000000000035,0x800000010087f9f0,0x1bc,0);
    *(undefined1 *)(param_4 + _TtC14UURemoteServer19SecondScreenManager::restoringPersistedSettings)
         = 0;
    param_7 = (ulong)local_23c;
  }
  FUN_10010f938(param_5,local_214,param_7);
  puVar12 = param_5;
LAB_1000920a4:
  _swift_release(puVar12);
  return;
}

