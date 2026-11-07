// rea decompile_all
// name: FUN_10011327c
// address: 0x10011327c
// body: available
// range: 0x10011327c-0x10011366b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001134c4) */
/* WARNING: Removing unreachable block (ram,0x0001001134fc) */
/* WARNING: Removing unreachable block (ram,0x00010011350c) */

void FUN_10011327c(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_130 [16];
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  undefined8 local_f8;
  undefined1 auStack_e8 [24];
  ulong local_d0;
  ulong uStack_c8;
  long local_b8;
  ulong local_a0;
  ulong local_98;
  undefined8 uStack_90;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  local_d0 = param_1;
  uStack_c8 = param_2;
  _swift_retain(uVar8);
  _swift_bridgeObjectRetain(param_2);
  FUN_1003be1c4(&local_a0,&local_d0);
  _swift_bridgeObjectRelease(param_2);
  _swift_release(uVar8);
  if (local_98 != 0) {
    _swift_bridgeObjectRelease(local_98);
    uVar4 = local_a0 & 0xffffffffffff;
    if ((local_98 & 0x2000000000000000) != 0) {
      uVar4 = local_98 >> 0x38 & 0xf;
    }
    if (uVar4 != 0) {
      return;
    }
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  local_a0 = param_1;
  local_98 = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_retain(uVar8);
  FUN_1003be1c4(&local_d0,&local_a0);
  _swift_bridgeObjectRelease(param_2);
  _swift_release(uVar8);
  if (((char)local_d0 == '\x02') || ((local_d0 & 1) == 0)) {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
    local_d0 = CONCAT71(local_d0._1_7_,1);
    local_a0 = param_1;
    local_98 = param_2;
    _swift_bridgeObjectRetain(param_2);
    _swift_retain(uVar8);
    FUN_1003be2ac(&local_d0,&local_a0);
    _swift_release(uVar8);
    uVar4 = param_1;
    uVar6 = param_2;
    FUN_100112f50(param_1);
    if (uVar6 >> 0x3c < 0xf) {
      FUN_1003ee76c(0);
      FUN_100008184(uVar4,uVar6);
      uVar9 = uVar4;
      uVar7 = uVar6;
      FUN_1003ec478(0x4060000000000000,uVar4);
      uVar10 = uVar6;
      uVar11 = uVar4;
      if (uVar7 >> 0x3c < 0xf) {
        FUN_100006cc8(uVar4,uVar6);
        uVar10 = uVar7;
        uVar11 = uVar9;
      }
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      uVar8 = *(undefined8 *)(DAT_100b360a8 + 0x38);
      _swift_retain(uVar8);
      FUN_10019aad8(&local_a0,uVar11,uVar10);
      _swift_release(uVar8);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
      local_d0 = local_98;
      uStack_c8 = uStack_90;
      local_110 = param_1;
      uStack_108 = param_2;
      _swift_bridgeObjectRetain(param_2);
      _swift_retain(uVar8);
      _swift_bridgeObjectRetain(uStack_90);
      FUN_1003be2ac(&local_d0,&local_110);
      FUN_10010a314(&local_a0);
      _swift_release(uVar8);
      _swift_beginAccess(unaff_x20 + 0x30,auStack_e8,0,0);
      FUN_100113d00(unaff_x20 + 0x30,&local_d0);
      if (local_b8 == 0) {
        FUN_100006cc8(uVar4,uVar6);
        FUN_100006cdc(uVar11,uVar10);
        FUN_100113d50(&local_d0);
      }
      else {
        FUN_1000b142c(&local_d0,&local_110);
        FUN_100113d50(&local_d0);
        puVar5 = &local_110;
        FUN_10003f030(puVar5,local_f8);
        lVar2 = _TtC14UURemoteServer14AppListManager::appIconUploadCount;
        uVar9 = *puVar5;
        lVar1 = *(long *)(uVar9 + _TtC14UURemoteServer14AppListManager::appIconUploadCount) + 1;
        if (SCARRY8(*(long *)(uVar9 + _TtC14UURemoteServer14AppListManager::appIconUploadCount),1))
        {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10011366c);
          (*pcVar3)();
        }
        *(long *)(uVar9 + _TtC14UURemoteServer14AppListManager::appIconUploadCount) = lVar1;
        if (0x13 < lVar1) {
          *(undefined8 *)(uVar9 + lVar2) = 0;
          FUN_1001a4294();
        }
        FUN_100006cdc(uVar11,uVar10);
        FUN_100006cc8(uVar4,uVar6);
        FUN_10003f094(&local_110);
      }
    }
    else {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_120 = param_1;
      uStack_118 = param_2;
      FUN_1003fb4ec(FUN_100113d98,auStack_130,0xd000000000000093,0x800000010088c6c0,
                    0xd00000000000001f,0x800000010088c760,0x8b,0);
    }
  }
  return;
}

