// rea decompile_all
// name: FUN_100291cc0
// address: 0x100291cc0
// body: available
// range: 0x100291cc0-0x100291e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100291cc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auStack_68 [24];
  
  puVar3 = &DAT_1009abd20;
  _swift_allocObject(&DAT_1009abd20,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  *(undefined8 *)(puVar3 + 0x20) = param_7;
  *(long *)(puVar3 + 0x28) = param_1;
  *(undefined8 *)(puVar3 + 0x30) = param_2;
  *(undefined8 *)(puVar3 + 0x38) = param_3;
  *(undefined8 *)(puVar3 + 0x40) = param_4;
  plVar8 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
  uVar7 = *(undefined8 *)(plVar8[2] + 0x10);
  _swift_retain(param_1);
  _swift_retain(param_4);
  _os_unfair_lock_lock(uVar7);
  lVar1 = (long)plVar8 + *(long *)(*plVar8 + 0x60);
  _swift_beginAccess(lVar1,auStack_68,0x21,0);
  *(undefined1 *)(lVar1 + 0xd8) = 0;
  puVar4 = &DAT_1009abd48;
  _swift_allocObject(&DAT_1009abd48,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1002a633c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uVar9 = *(ulong *)(lVar1 + 0xe0);
  _swift_retain(puVar3);
  uVar5 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar1 + 0xe0) = uVar9;
  uVar6 = uVar9;
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
    FUN_1002965b8(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9,&DAT_100a83350,FUN_10027643c);
    *(ulong *)(lVar1 + 0xe0) = uVar6;
  }
  uVar5 = *(ulong *)(uVar6 + 0x10);
  uVar9 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_1002965b8(uVar9,uVar5 + 1,1,uVar6,&DAT_100a83350,FUN_10027643c);
  }
  *(ulong *)(uVar9 + 0x10) = uVar5 + 1;
  lVar2 = uVar9 + uVar5 * 0x10;
  *(code **)(lVar2 + 0x20) = thunk_FUN_1000f4ed4;
  *(undefined **)(lVar2 + 0x28) = puVar4;
  *(ulong *)(lVar1 + 0xe0) = uVar9;
  _swift_endAccess(auStack_68);
  _os_unfair_lock_unlock(uVar7);
  FUN_1002cbca4();
  _swift_release(puVar3);
  return;
}

