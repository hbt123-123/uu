// rea decompile_all
// name: FUN_1000c3164
// address: 0x1000c3164
// body: available
// range: 0x1000c3164-0x1000c349f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000c3164(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  undefined4 param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  byte bVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  undefined1 auStack_e0 [16];
  undefined4 local_d0;
  byte local_cc;
  ulong local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  byte local_b0;
  byte local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined *local_68;
  
  uVar5 = param_1;
  if ((param_1 >> 0x20 & 1) != 0) {
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    uVar5 = _objc_msgSend(*(ID *)(*(long *)(DAT_100b360a8 + 0x80) + 0x10),"screenId");
  }
  if ((int)uVar5 < 1) {
LAB_1000c320c:
    uVar6 = 0;
    FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
    thunk_FUN_1003d7218();
    if (uVar6 == 0) goto LAB_1000c3248;
  }
  else {
    FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
    uVar6 = uVar5;
    FUN_1003d56bc();
    if (uVar6 == 0) goto LAB_1000c320c;
  }
  FUN_1003d541c();
  uVar5 = uVar6;
LAB_1000c3248:
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  uVar6 = uVar5;
  FUN_1003d56bc();
  if (uVar6 == 0) {
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_d0 = (undefined4)param_1;
    local_cc = (byte)(param_1 >> 0x20) & 1;
    FUN_1003fb4ec(FUN_1000c4704,auStack_e0,0xd00000000000009b,0x80000001008841c0,0xd000000000000027,
                  0x80000001008843d0,0x6b,0);
  }
  else {
    local_c0 = param_5 >> 0x20;
    local_b8 = param_6;
    FUN_1000c2b00(uVar5,uVar6);
    puVar8 = auStack_80;
    _swift_beginAccess(uVar5 + 0x20,puVar8,0,0);
    lVar10 = *(long *)(uVar5 + 0x20);
    local_b4 = (undefined4)param_2;
    if ((*(long *)(lVar10 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)puVar8 & 1) == 0)) {
      uVar12 = 0;
      uVar7 = 0;
      local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
      bVar9 = 1;
      bVar11 = 1;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x38) + param_2 * 0x20);
      local_68 = (undefined *)*puVar1;
      uVar7 = puVar1[1];
      bVar11 = *(byte *)(puVar1 + 2);
      uVar12 = *(uint *)((long)puVar1 + 0x14);
      bVar9 = *(byte *)(puVar1 + 3);
      _swift_bridgeObjectRetain();
    }
    _swift_bridgeObjectRetain(param_3);
    FUN_10005fa10();
    puVar4 = local_68;
    if ((bVar11 & 1) == 0) {
      param_4 = uVar7;
    }
    uVar2 = (uint)local_c0;
    if ((bVar9 & 1) == 0) {
      uVar2 = uVar12;
    }
    bVar3 = (byte)local_b8;
    _swift_beginAccess(uVar5 + 0x20,auStack_98,0x21,0);
    uVar7 = *(undefined8 *)(uVar5 + 0x20);
    _swift_isUniquelyReferenced_nonNull_native(uVar7);
    local_a0 = *(undefined8 *)(uVar5 + 0x20);
    *(undefined8 *)(uVar5 + 0x20) = 0x8000000000000000;
    local_a8 = bVar11 & (byte)param_5 & 1;
    local_b0 = bVar9 & bVar3 & 1;
    FUN_100061894(puVar4,param_4,(ulong)local_a8 | (ulong)uVar2 << 0x20,local_b0,local_b4,uVar7);
    uVar7 = local_a0;
    *(undefined8 *)(uVar5 + 0x20) = local_a0;
    _swift_endAccess(auStack_98);
    _swift_retain(uVar7);
    FUN_1000c4904();
    _swift_release(uVar5);
    _swift_release(uVar7);
  }
  return;
}

