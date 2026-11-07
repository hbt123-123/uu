// rea decompile_all
// name: FUN_10061defc
// address: 0x10061defc
// body: available
// range: 0x10061defc-0x10061e057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061defc(long param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long local_58;
  undefined1 local_50;
  
  if (((uint)param_2 >> 8 & 1) == 0) {
    puVar3 = &DAT_1009e0db8;
    _swift_allocObject(&DAT_1009e0db8,0x20,7);
    *(code **)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    _swift_beginAccess(param_1 + 0x10,&local_58,0x21,0);
    uVar6 = *(ulong *)(param_1 + 0x10);
    _swift_retain(param_4);
    uVar4 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(param_1 + 0x10) = uVar6;
    uVar5 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
      FUN_1006261ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6,&DAT_100ab06a8,&DAT_100848a38);
      *(ulong *)(param_1 + 0x10) = uVar5;
    }
    uVar4 = *(ulong *)(uVar5 + 0x10);
    uVar6 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_1006261ac(uVar6,uVar4 + 1,1,uVar5,&DAT_100ab06a8,&DAT_100848a38);
    }
    *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
    lVar1 = uVar6 + uVar4 * 0x10;
    *(code **)(lVar1 + 0x20) = FUN_1006276f8;
    *(undefined **)(lVar1 + 0x28) = puVar3;
    *(ulong *)(param_1 + 0x10) = uVar6;
    _swift_endAccess(&local_58);
  }
  else {
    uVar2 = (uint)param_2 & 1;
    local_50 = (undefined1)uVar2;
    local_58 = param_1;
    FUN_100330f30(param_1,uVar2);
    (*param_3)(&local_58);
    FUN_1006073e8(param_1,param_2,1);
  }
  return;
}

