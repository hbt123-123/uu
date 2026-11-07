// rea decompile_all
// name: FUN_1001dbbb4
// address: 0x1001dbbb4
// body: available
// range: 0x1001dbbb4-0x1001dbd5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001dbd4c) */

void FUN_1001dbbb4(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    _swift_beginAccess(param_4 + 0x10,auStack_70,0,0);
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    _swift_bridgeObjectRetain(uVar2);
    (*param_2)();
    _swift_bridgeObjectRelease(uVar2);
  }
  else {
    _swift_beginAccess(param_4 + 0x10,auStack_70,0,0);
    uVar1 = *(undefined8 *)(param_4 + 0x10);
    uVar2 = uVar1;
    _swift_bridgeObjectRetain();
    FUN_1001dbd60();
    _swift_bridgeObjectRelease(uVar1);
    local_78 = uVar2;
    _swift_bridgeObjectRetain(uVar2);
    FUN_1001d4610(&local_78);
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = local_78;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_90 = uVar2;
    FUN_1003fb45c(FUN_1001e1b18,auStack_a0,0xd000000000000095,0x8000000100889250,0xd000000000000019,
                  0x800000010089ed10,0x2b4,0);
    FUN_1001dc984(uVar2);
    (*param_2)(uVar2);
    _swift_release(uVar2);
  }
  return;
}

