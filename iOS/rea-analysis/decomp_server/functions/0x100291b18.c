// rea decompile_all
// name: FUN_100291b18
// address: 0x100291b18
// body: available
// range: 0x100291b18-0x100291cbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100291b18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 auStack_78 [24];
  
  _swift_allocObject(param_5,0x30,7);
  *(long *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  *(undefined8 *)(param_5 + 0x20) = param_3;
  *(undefined8 *)(param_5 + 0x28) = param_4;
  plVar7 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
  uVar5 = *(undefined8 *)(plVar7[2] + 0x10);
  _swift_retain(param_1);
  _swift_retain(param_4);
  _os_unfair_lock_lock(uVar5);
  lVar1 = (long)plVar7 + *(long *)(*plVar7 + 0x60);
  _swift_beginAccess(lVar1,auStack_78,0x21,0);
  *(undefined1 *)(lVar1 + 0xd8) = 0;
  _swift_allocObject(param_6,0x20,7);
  *(undefined8 *)(param_6 + 0x10) = param_7;
  *(long *)(param_6 + 0x18) = param_5;
  uVar6 = *(ulong *)(lVar1 + 0xe0);
  _swift_retain(param_5);
  uVar3 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar1 + 0xe0) = uVar6;
  uVar4 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_1002965b8(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6,&DAT_100a83350,FUN_10027643c);
    *(ulong *)(lVar1 + 0xe0) = uVar4;
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar6 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_1002965b8(uVar6,uVar3 + 1,1,uVar4,&DAT_100a83350,FUN_10027643c);
  }
  *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
  lVar2 = uVar6 + uVar3 * 0x10;
  *(undefined8 *)(lVar2 + 0x20) = param_8;
  *(long *)(lVar2 + 0x28) = param_6;
  *(ulong *)(lVar1 + 0xe0) = uVar6;
  _swift_endAccess(auStack_78);
  _os_unfair_lock_unlock(uVar5);
  FUN_1002cbca4();
  _swift_release(param_5);
  return;
}

