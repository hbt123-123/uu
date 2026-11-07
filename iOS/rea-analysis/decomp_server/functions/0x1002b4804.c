// rea decompile_all
// name: FUN_1002b4804
// address: 0x1002b4804
// body: available
// range: 0x1002b4804-0x1002b4993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002b4980) */

void FUN_1002b4804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(param_5 + -8);
  lVar3 = *(long *)(lVar7 + 0x40);
  local_98 = param_6;
  local_90 = param_3;
  local_88 = param_4;
  (**(code **)(lVar7 + 0x10))(auStack_a0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2,param_5);
  uVar2 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
  uVar6 = lVar3 + uVar8 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_1009aca38;
  _swift_allocObject(&DAT_1009aca38,uVar6 + 0x20,uVar2 | 7);
  *(long *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = local_98;
  (**(code **)(lVar7 + 0x20))
            (puVar1 + uVar8,auStack_a0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_5);
  *(undefined8 *)(puVar1 + uVar6) = param_1;
  *(undefined8 *)(puVar1 + uVar6 + 8) = local_90;
  *(undefined8 *)((long)(puVar1 + uVar6 + 8) + 8) = local_88;
  *(long *)(puVar1 + uVar6 + 0x18) = unaff_x20;
  plVar4 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar5 = *(undefined8 *)(plVar4[2] + 0x10);
  _swift_retain(local_88);
  _swift_retain();
  _os_unfair_lock_lock(uVar5);
  lVar3 = *(long *)(*plVar4 + 0x60);
  _swift_beginAccess((long)plVar4 + lVar3,auStack_78,0x21,0);
  FUN_1002d02a4((long)plVar4 + lVar3,FUN_1002b9484,puVar1);
  _swift_endAccess(auStack_78);
  _os_unfair_lock_unlock(uVar5);
  _swift_release(puVar1);
  return;
}

