// rea decompile_all
// name: FUN_1002921b0
// address: 0x1002921b0
// body: available
// range: 0x1002921b0-0x100292347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002921b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  lVar7 = *(long *)(param_1 + _TtC9Alamofire17DataStreamRequest::streamMutableState);
  uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar5);
  _swift_beginAccess(lVar7 + 0x18,auStack_68,0x21,0);
  if (*(long *)(lVar7 + 0x28) == 0) {
    FUN_100292728(param_2,param_3,param_4,&DAT_1009ab910,FUN_1002a5f40,&DAT_1009ab928);
  }
  else {
    puVar2 = &DAT_1009ab8e8;
    _swift_allocObject(&DAT_1009ab8e8,0x30,7);
    *(long *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    *(undefined8 *)(puVar2 + 0x28) = param_4;
    uVar6 = *(ulong *)(lVar7 + 0x30);
    _swift_retain(param_1);
    _swift_retain(param_4);
    uVar3 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar7 + 0x30) = uVar6;
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_1002965b8(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6,&DAT_100a83350,FUN_10027643c);
      *(ulong *)(lVar7 + 0x30) = uVar4;
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar6 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_1002965b8(uVar6,uVar3 + 1,1,uVar4,&DAT_100a83350,FUN_10027643c);
    }
    *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
    lVar1 = uVar6 + uVar3 * 0x10;
    *(code **)(lVar1 + 0x20) = FUN_1002a5f00;
    *(undefined **)(lVar1 + 0x28) = puVar2;
    *(ulong *)(lVar7 + 0x30) = uVar6;
  }
  _swift_endAccess(auStack_68);
  _os_unfair_lock_unlock(uVar5);
  return;
}

