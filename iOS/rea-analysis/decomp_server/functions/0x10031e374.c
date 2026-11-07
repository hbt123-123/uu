// rea decompile_all
// name: FUN_10031e374
// address: 0x10031e374
// body: available
// range: 0x10031e374-0x10031e4fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010031e4e8) */

void FUN_10031e374(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  _swift_unownedRetainStrong(param_2);
  _swift_unownedRetainStrong(param_2);
  uVar1 = *(undefined8 *)(param_2 + _TtC9Alamofire7Request::underlyingQueue);
  _swift_release(param_2);
  puVar2 = &DAT_100a85c30;
  FUN_100004bb4(&DAT_100a85c30,&DAT_10081a260);
  lVar9 = *(long *)(puVar2 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (**(code **)(lVar9 + 0x10))(auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_1,puVar2);
  uVar4 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar5 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1009b21b0;
  _swift_allocObject(&DAT_1009b21b0,uVar5 + lVar7,uVar4 | 7);
  (**(code **)(lVar9 + 0x20))
            (puVar3 + uVar5,auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0),puVar2);
  plVar6 = *(long **)(param_2 + _TtC9Alamofire7Request::mutableState);
  uVar8 = *(undefined8 *)(plVar6[2] + 0x10);
  _os_unfair_lock_lock(uVar8);
  lVar7 = *(long *)(*plVar6 + 0x60);
  _swift_beginAccess((long)plVar6 + lVar7,auStack_68,0x21,0);
  FUN_1002d1abc((long)plVar6 + lVar7,uVar1,FUN_10032dbcc,puVar3);
  _swift_endAccess(auStack_68);
  _os_unfair_lock_unlock(uVar8);
  _swift_release(param_2);
  _swift_release(puVar3);
  return;
}

