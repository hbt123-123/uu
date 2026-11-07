// rea decompile_all
// name: FUN_1002925bc
// address: 0x1002925bc
// body: available
// range: 0x1002925bc-0x100292727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002925bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_1002928f0(param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    puVar2 = &DAT_1009abd70;
    _swift_allocObject(&DAT_1009abd70,0x48,7);
    *(undefined8 *)(puVar2 + 0x10) = param_6;
    *(undefined8 *)(puVar2 + 0x18) = param_7;
    *(undefined8 *)(puVar2 + 0x20) = param_8;
    *(undefined8 *)(puVar2 + 0x28) = param_2;
    *(undefined8 *)(puVar2 + 0x30) = param_3;
    *(undefined8 *)(puVar2 + 0x38) = param_4;
    *(undefined8 *)(puVar2 + 0x40) = param_5;
    uVar5 = *(ulong *)(param_1 + 0x18);
    _swift_retain(param_2);
    _swift_retain(param_5);
    uVar3 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_1002965b8(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5,&DAT_100a83350,FUN_10027643c);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_1002965b8(uVar5,uVar3 + 1,1,uVar4,&DAT_100a83350,FUN_10027643c);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    lVar1 = uVar5 + uVar3 * 0x10;
    *(code **)(lVar1 + 0x20) = FUN_1002a6394;
    *(undefined **)(lVar1 + 0x28) = puVar2;
    *(ulong *)(param_1 + 0x18) = uVar5;
  }
  return;
}

