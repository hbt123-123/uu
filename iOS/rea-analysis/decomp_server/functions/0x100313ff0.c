// rea decompile_all
// name: FUN_100313ff0
// address: 0x100313ff0
// body: available
// range: 0x100313ff0-0x10031420f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100313ff0(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  ulong uVar8;
  
  lVar2 = 0;
  FUN_100316ccc(0,*(undefined8 *)(*param_6 + 0x50),*(undefined8 *)(*param_6 + 0x58));
  if (*(long *)(param_2 + *(int *)(lVar2 + 0x24)) == param_3) {
    lVar3 = *(long *)(param_2 + *(int *)(lVar2 + 0x28));
    if (lVar3 == 0) {
      puVar4 = &DAT_1009b03d8;
      _swift_allocObject(&DAT_1009b03d8,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = param_4;
      *(undefined8 *)(puVar4 + 0x18) = param_5;
      iVar1 = *(int *)(lVar2 + 0x38);
      uVar8 = *(ulong *)(param_2 + iVar1);
      _swift_retain(param_5);
      uVar5 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = uVar8;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
        FUN_100297330(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
      }
      uVar5 = *(ulong *)(uVar6 + 0x10);
      uVar8 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_100297330(uVar8,uVar5 + 1,1,uVar6);
      }
      *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
      lVar2 = uVar8 + uVar5 * 0x10;
      *(code **)(lVar2 + 0x20) = FUN_100316d58;
      *(undefined **)(lVar2 + 0x28) = puVar4;
      *(ulong *)(param_2 + iVar1) = uVar8;
      FUN_100313564(param_7,param_8,param_2);
    }
    else {
      if (lVar3 != 1) {
        *param_1 = lVar3;
        *(undefined1 *)(param_1 + 1) = 1;
        _swift_errorRetain();
        return;
      }
      puVar4 = &DAT_1009b0400;
      _swift_allocObject(&DAT_1009b0400,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = param_4;
      *(undefined8 *)(puVar4 + 0x18) = param_5;
      iVar1 = *(int *)(lVar2 + 0x38);
      uVar8 = *(ulong *)(param_2 + iVar1);
      _swift_retain(param_5);
      uVar5 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = uVar8;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
        FUN_100297330(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
      }
      uVar5 = *(ulong *)(uVar6 + 0x10);
      uVar8 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_100297330(uVar8,uVar5 + 1,1,uVar6);
      }
      *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
      lVar2 = uVar8 + uVar5 * 0x10;
      *(code **)(lVar2 + 0x20) = thunk_FUN_100316d58;
      *(undefined **)(lVar2 + 0x28) = puVar4;
      *(ulong *)(param_2 + iVar1) = uVar8;
    }
    *param_1 = 0;
    uVar7 = 0xff;
  }
  else {
    *param_1 = 0;
    uVar7 = 2;
  }
  *(undefined1 *)(param_1 + 1) = uVar7;
  return;
}

