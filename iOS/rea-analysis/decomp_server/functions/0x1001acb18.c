// rea decompile_all
// name: FUN_1001acb18
// address: 0x1001acb18
// body: available
// range: 0x1001acb18-0x1001acceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001acb18(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100004bb4(&DAT_100a7cb90,&DAT_100811648);
  _swift_allocObject();
  uVar2 = 0x4979616c70736964;
  FUN_1003ef570(0x4979616c70736964,0xec000000736f666e,&local_70,0);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  local_70 = puVar1;
  FUN_100004bb4(&DAT_100a7cb98,&DAT_100811650);
  _swift_allocObject();
  uVar2 = 0x446c617574726976;
  FUN_1003ef570(0x446c617574726976,0xef7379616c707369,&local_70,0);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  local_70._0_4_ = (uint)local_70 & 0xffffff00;
  local_70._4_4_ = 0xffffffff;
  uStack_68 = 0xffffffff;
  local_64 = 0xffffffffffffffff;
  local_5c = 0xffffffff;
  local_54 = 0xffffffffffffffff;
  local_4c = 0xffffffffffffffff;
  local_44 = 0;
  FUN_100004bb4(&DAT_100a7cba0,&DAT_100811658);
  _swift_allocObject();
  uVar2 = 0xd000000000000014;
  FUN_1003ef570(0xd000000000000014,0x800000010089aa30,&local_70,0);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(long **)(unaff_x20 + 0x18) = param_2;
  plVar3 = param_2;
  _swift_bridgeObjectRetain();
  FUN_1003e6f74();
  lVar4 = *plVar3;
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    _swift_retain(lVar4);
    FUN_1003e7bd0(param_1,param_2);
    _swift_release(lVar4);
    _swift_bridgeObjectRelease(param_2);
    if (param_1 != 0) {
      _swift_retain();
      FUN_1003e7924();
      _swift_release();
    }
  }
  return;
}

