// rea decompile_all
// name: FUN_10032e494
// address: 0x10032e494
// body: available
// range: 0x10032e494-0x10032e613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010032e600) */

void FUN_10032e494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar9 = *(long *)(lVar1 + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  (**(code **)(lVar9 + 0x10))(auStack_90 + -(lVar8 + 0xfU & 0xfffffffffffffff0),param_4,lVar1);
  uVar4 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar7 = uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009b2300;
  _swift_allocObject(&DAT_1009b2300,uVar7 + lVar8,uVar4 | 7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  (**(code **)(lVar9 + 0x20))
            (puVar2 + uVar7,auStack_90 + -(lVar8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar3 = &DAT_1009b2260;
  _swift_allocObject(&DAT_1009b2260,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10032e690;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar6);
  _swift_beginAccess(lVar1 + 0x18,auStack_78,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  local_80 = uVar5;
  _swift_bridgeObjectRetain(uVar5);
  FUN_10032de9c(&local_80,puVar3);
  _swift_bridgeObjectRelease(uVar5);
  _os_unfair_lock_unlock(uVar6);
  _swift_release(puVar3);
  return;
}

