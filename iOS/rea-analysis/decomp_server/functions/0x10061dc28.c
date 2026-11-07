// rea decompile_all
// name: FUN_10061dc28
// address: 0x10061dc28
// body: available
// range: 0x10061dc28-0x10061dd53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061dc28(long param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  if ((param_2 & 1) == 0) {
    puVar2 = &DAT_1009e0a70;
    _swift_allocObject(&DAT_1009e0a70,0x20,7);
    *(code **)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    _swift_beginAccess(param_1 + 0x10,auStack_58,0x21,0);
    uVar5 = *(ulong *)(param_1 + 0x10);
    _swift_retain(param_4);
    uVar3 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(param_1 + 0x10) = uVar5;
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_1006261ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5,&DAT_100ab0680,&DAT_100848a10);
      *(ulong *)(param_1 + 0x10) = uVar4;
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_1006261ac(uVar5,uVar3 + 1,1,uVar4,&DAT_100ab0680,&DAT_100848a10);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    lVar1 = uVar5 + uVar3 * 0x10;
    *(code **)(lVar1 + 0x20) = FUN_100102840;
    *(undefined **)(lVar1 + 0x28) = puVar2;
    *(ulong *)(param_1 + 0x10) = uVar5;
    _swift_endAccess(auStack_58);
  }
  else {
    (*param_3)();
  }
  return;
}

