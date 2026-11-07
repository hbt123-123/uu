// rea decompile_all
// name: FUN_1001fb714
// address: 0x1001fb714
// body: available
// range: 0x1001fb714-0x1001fbab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001fb714(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  undefined1 auStack_f0 [16];
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char *local_a8;
  undefined8 uStack_a0;
  uint local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  lVar4 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    FUN_1000c7b64();
    lVar10 = *(long *)(lVar4 + 0x78);
    bVar2 = *(byte *)(lVar4 + 0x81);
    _swift_release(lVar4);
    if (((bVar2 & 1) == 0) && (lVar10 == 6)) {
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1001ff0a8,0,0xd0000000000000a0,0x800000010088d990,0xd000000000000037,
                    0x80000001008a1d70,0x1b8,0);
      uVar7 = *(ulong *)(param_3 + 8);
      uVar8 = param_3[0x10];
      uVar9 = 0xffffffff;
      goto LAB_1001fb968;
    }
  }
  local_94 = (uint)param_1;
  uVar3 = *param_3;
  uVar7 = *(ulong *)(param_3 + 8);
  uVar8 = param_3[0x10];
  uVar9 = *(undefined8 *)(param_3 + 0x18);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar5 = 0;
  FUN_100401b14();
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_e0 = CONCAT71(local_e0._1_7_,uVar3);
  local_a8 = ":action:request:)";
  uStack_d8 = uVar7;
  local_d0 = uVar9;
  local_c8 = uVar1;
  uStack_a0 = uVar5;
  FUN_1003fb48c(FUN_100201804,auStack_f0,0xd0000000000000a0,0x800000010088d990,0xd000000000000037,
                0x80000001008a1d70,0x1c1,0);
  if (1 < uVar7) {
    IVar6 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
    uStack_88 = 5;
    local_90 = 0xe;
    local_80 = 0;
    IVar6 = NSProcessInfo::isOperatingSystemAtLeastVersion_
                      (IVar6,"isOperatingSystemAtLeastVersion:",&local_90);
    if ((IVar6 & 1) == 0) {
      IVar6 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
      NSProcessInfo::operatingSystemVersion(IVar6,"operatingSystemVersion",&local_90);
      uVar9 = local_80;
      uStack_b8 = uStack_88;
      local_c0 = local_90;
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      uStack_d8 = uStack_b8;
      local_e0 = local_c0;
      local_d0 = uVar9;
      FUN_1003fb48c(FUN_100201814,auStack_f0,0xd0000000000000a0,0x800000010088d990,
                    0xd000000000000037,(ulong)local_a8 | 0x8000000000000000,0x1c4,0);
      FUN_100201ab4(local_94,param_2,uVar7,uVar8,0x2711);
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      uVar9 = *(undefined8 *)(DAT_100b360a8 + 0x98);
      _swift_retain(uVar9);
      FUN_1000bb868(uVar7,0x2711);
      _swift_release(uVar9);
      return;
    }
  }
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar5 = *(undefined8 *)(DAT_100b360a8 + 0x98);
  _swift_retain(uVar5);
  FUN_1000bb348(uVar3,uVar7,uVar9,uVar1);
  _swift_release(uVar5);
  param_1 = (ulong)local_94;
  uVar9 = 0;
LAB_1001fb968:
  FUN_100201ab4(param_1,param_2,uVar7,uVar8,uVar9);
  return;
}

