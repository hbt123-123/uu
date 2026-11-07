// rea decompile_all
// name: FUN_1001e6b88
// address: 0x1001e6b88
// body: available
// range: 0x1001e6b88-0x1001e7023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e7020 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e6b88(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_d0 [16];
  int local_c0;
  undefined1 auStack_b0 [8];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 auStack_94 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = &DAT_1009a4190;
  _swift_allocObject(&DAT_1009a4190,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  uVar8 = param_5;
  _swift_retain(param_5);
  FUN_1001e4b60();
  FUN_1001e66c4(param_1,param_2,uVar8);
  _swift_bridgeObjectRelease(uVar8);
  iVar9 = (int)param_1;
  if ((param_1 >> 0x20 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_c0 = iVar9;
    FUN_1003fb48c(FUN_1001e702c,auStack_d0,0xd000000000000099,0x800000010089fc50,0xd000000000000019,
                  0x800000010089ff60,0xb8,0);
    puVar2 = &DAT_1009a41b8;
    _swift_allocObject(&DAT_1009a41b8,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_1001e7024;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    lVar7 = _TtC14UURemoteServer15TerminalManager::sessions;
    puVar6 = &local_90;
    _swift_beginAccess(param_3 + _TtC14UURemoteServer15TerminalManager::sessions,puVar6,0x20,0);
    lVar7 = *(long *)(param_3 + lVar7);
    if ((*(long *)(lVar7 + 0x10) == 0) ||
       (uVar3 = param_1, thunk_FUN_1001a2c34(), ((ulong)puVar6 & 1) == 0)) {
      _swift_endAccess(&local_90);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_c0 = iVar9;
      _swift_retain(puVar1);
      FUN_1003fb48c(FUN_1001cbec4,auStack_d0,0xd000000000000095,0x8000000100889250,
                    0xd000000000000022,0x800000010089d930,0x26f,0);
      uStack_88 = 0xd000000000000011;
      local_90 = 1;
      local_80 = 0x800000010088a4f0;
      uStack_78 = 0xb8e49dafe89abce4;
      local_70 = 0xafa89ce598ade58d;
      FUN_1000fe7a0(&local_90,param_4,param_5);
      _swift_release(puVar1);
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 8);
      local_a0 = uVar8;
      _swift_endAccess(&local_90);
      local_a8 = auStack_b0;
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_c0 = iVar9;
      _swift_retain(puVar1);
      _swift_retain(uVar8);
      FUN_1003fb48c(FUN_1001cbecc,auStack_d0,0xd000000000000095,0x8000000100889250,
                    0xd000000000000022,0x800000010089d930,0x273,0);
      _swift_beginAccess(param_3 + _TtC14UURemoteServer15TerminalManager::closingSessionIds,
                         &local_90,0x21,0);
      FUN_10006d93c(auStack_94,param_1);
      _swift_endAccess(&local_90);
      puVar4 = &DAT_1009a4118;
      _swift_allocObject(&DAT_1009a4118,0x18,7);
      _swift_unknownObjectWeakInit(puVar4 + 0x10,param_3);
      puVar5 = &DAT_1009a41e0;
      _swift_allocObject(&DAT_1009a41e0,0x30,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(int *)(puVar5 + 0x18) = iVar9;
      *(code **)(puVar5 + 0x20) = FUN_1001e7034;
      *(undefined **)(puVar5 + 0x28) = puVar2;
      FUN_100004b70(0);
      _swift_retain(puVar4);
      _swift_retain(puVar2);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      uVar8 = local_a0;
      FUN_1001e843c();
      _swift_release(puVar1);
      _swift_release(uVar8);
      _swift_release(puVar4);
      _swift_release(puVar5);
    }
    _swift_release(puVar2);
    return;
  }
  if (iVar9 == 0) {
    uStack_88 = 0xd000000000000011;
    local_80 = 0x800000010088a4f0;
    uStack_78 = 0xb8e49dafe89abce4;
    local_70 = 0xafa89ce598ade58d;
  }
  else {
    uStack_88 = 0xd000000000000017;
    local_80 = 0x800000010088a4b0;
    uStack_78 = 0x100000000000002a;
    local_70 = 0x800000010088a550;
  }
  local_90 = 1;
  FUN_1000fe7a0(&local_90,param_4,param_5);
  _swift_release(puVar1);
  return;
}

