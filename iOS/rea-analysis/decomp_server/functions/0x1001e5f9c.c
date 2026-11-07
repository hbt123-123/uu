// rea decompile_all
// name: FUN_1001e5f9c
// address: 0x1001e5f9c
// body: available
// range: 0x1001e5f9c-0x1001e6597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e5f9c(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined *param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  undefined4 uVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 auStack_140 [2];
  undefined8 auStack_130 [2];
  undefined8 auStack_120 [2];
  undefined8 auStack_110 [2];
  undefined1 auStack_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  
  lVar5 = 0;
  local_e8 = param_3;
  __s10Foundation12CharacterSetVMa();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_100 + lVar2;
  puVar6 = &DAT_1009a40f0;
  _swift_allocObject(&DAT_1009a40f0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_6;
  *(undefined **)(puVar6 + 0x18) = param_7;
  if (*(long *)(param_5 + _TtC14UURemoteServer15TerminalManager::tmuxController) == 0) {
    FUN_100401b14(0);
    _swift_retain(param_7);
    FUN_1003fb4bc(FUN_1001e4f08,0,0xd000000000000099,0x800000010089fc50,0xd00000000000001e,
                  0x800000010089fcf0,0x59,0);
    local_d8 = 1;
    uStack_a8 = 0xd00000000000001e;
    local_b0 = 5;
    local_a0 = 0x800000010089fa70;
    uStack_98 = 0x1000000000000015;
    local_90 = 0x800000010089fd10;
LAB_1001e6568:
    local_70 = 1;
    FUN_1000fde90(&local_b0,param_6,param_7);
  }
  else {
    puVar7 = param_7;
    local_f8 = param_6;
    local_f0 = param_4;
    local_b0 = param_1;
    uStack_a8 = param_2;
    _swift_retain();
    __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(puVar15);
    FUN_10009ff0c();
    puVar8 = puVar15;
    puVar11 = PTR___sSSN_1009957f8;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF();
    (**(code **)(lVar14 + 8))(puVar15,lVar5);
    puVar9 = puVar11;
    _swift_bridgeObjectRelease();
    uVar1 = (ulong)puVar8 & 0xffffffffffff;
    if (((ulong)puVar11 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar11 >> 0x38 & 0xf;
    }
    local_c0 = 0;
    local_b8 = (undefined *)0xe000000000000000;
    if (uVar1 != 0) {
      puVar9 = puVar7;
      FUN_1001e0038();
      if ((param_1 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar9);
        FUN_100401b14(0);
        FUN_1003fb4bc(FUN_1001e4f34,0,0xd000000000000099,0x800000010089fc50,0xd00000000000001e,
                      0x800000010089fcf0,0x65,0);
        local_e0 = 1;
        uStack_a8 = 0xd000000000000014;
        local_b0 = 1;
        local_a0 = 0x800000010089f1b0;
        uStack_98 = 0x1000000000000012;
        local_90 = 0x800000010089fd30;
        uStack_80 = uStack_d0;
        local_78 = local_c8;
        param_6 = local_f8;
        goto LAB_1001e6568;
      }
      local_c0 = param_2;
      local_b8 = puVar9;
      FUN_1001d5dbc();
      _swift_bridgeObjectRetain(puVar9);
      FUN_1001e063c(param_2,puVar9,0,param_1);
      _swift_bridgeObjectRelease(param_1);
      _swift_bridgeObjectRelease();
      if ((param_2 & 1) != 0) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ulong **)((long)auStack_110 + lVar2) = &local_c0;
        FUN_1003fb4bc(FUN_1001e6670,(long)auStack_120 + lVar2,0xd000000000000099,0x800000010089fc50,
                      0xd00000000000001e,0x800000010089fcf0,0x6d,0);
        local_e0 = 1;
        uStack_a8 = 0xd000000000000015;
        local_b0 = 3;
        local_a0 = 0x800000010089ea90;
        uStack_98 = 0x1000000000000015;
        local_90 = 0x800000010089fd50;
        uStack_80 = uStack_d0;
        local_78 = local_c8;
        local_70 = 1;
        FUN_1000fde90(&local_b0,local_f8,param_7);
        puVar7 = local_b8;
        _swift_release(puVar6);
        _swift_bridgeObjectRelease(puVar7);
        return;
      }
    }
    FUN_1001e4a98();
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(bool *)((long)auStack_130 + lVar2) = uVar1 == 0;
    *(ulong **)((long)auStack_130 + lVar2 + 8) = &local_c0;
    uVar3 = local_f0;
    *(undefined8 *)((long)auStack_120 + lVar2) = local_e8;
    *(undefined8 *)((long)auStack_120 + lVar2 + 8) = uVar3;
    uVar13 = SUB84(puVar9,0);
    *(undefined4 *)((long)auStack_110 + lVar2) = uVar13;
    FUN_1003fb48c(FUN_1001e65c4,(long)auStack_140 + lVar2,0xd000000000000099,0x800000010089fc50,
                  0xd00000000000001e,0x800000010089fcf0,0x74,0);
    puVar4 = local_b8;
    uVar1 = local_c0;
    puVar7 = &DAT_1009a4118;
    puVar10 = puVar7;
    _swift_allocObject(&DAT_1009a4118,0x18,7);
    _swift_unknownObjectWeakInit(puVar10 + 0x10,param_5);
    puVar11 = &DAT_1009a4140;
    _swift_allocObject(&DAT_1009a4140,0x30,7);
    *(undefined **)(puVar11 + 0x10) = puVar10;
    *(undefined4 *)(puVar11 + 0x18) = uVar13;
    *(code **)(puVar11 + 0x20) = FUN_1001e65bc;
    *(undefined **)(puVar11 + 0x28) = puVar6;
    _swift_allocObject(&DAT_1009a4118,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10,param_5);
    puVar12 = &DAT_1009a4168;
    _swift_allocObject(&DAT_1009a4168,0x40,7);
    *(undefined **)(puVar12 + 0x10) = puVar7;
    *(undefined4 *)(puVar12 + 0x18) = uVar13;
    *(code **)(puVar12 + 0x20) = FUN_1001e65fc;
    *(undefined **)(puVar12 + 0x28) = puVar11;
    *(ulong *)(puVar12 + 0x30) = uVar1;
    *(undefined **)(puVar12 + 0x38) = puVar4;
    _swift_retain(puVar10);
    _swift_retain(puVar6);
    _swift_retain(puVar7);
    _swift_retain(puVar11);
    _swift_bridgeObjectRetain(puVar4);
    *(undefined1 *)((long)auStack_110 + lVar2) = 1;
    *(undefined **)((long)auStack_120 + lVar2) = puVar12;
    *(undefined8 *)((long)auStack_120 + lVar2 + 8) = 0;
    *(undefined8 *)((long)auStack_130 + lVar2) = 0;
    *(code **)((long)auStack_130 + lVar2 + 8) = FUN_1001e6640;
    *(undefined8 *)((long)auStack_140 + lVar2) = 0;
    *(code **)((long)auStack_140 + lVar2 + 8) = FUN_100008290;
    FUN_1001d64b8(puVar9,0,0,local_e8,local_f0,0x50,0x18,FUN_100008290);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(puVar4);
    _swift_release(puVar10);
    _swift_release(puVar11);
    _swift_release(puVar7);
    puVar6 = puVar12;
  }
  _swift_release(puVar6);
  return;
}

