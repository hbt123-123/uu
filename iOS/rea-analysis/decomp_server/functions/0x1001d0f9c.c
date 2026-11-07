// rea decompile_all
// name: FUN_1001d0f9c
// address: 0x1001d0f9c
// body: available
// range: 0x1001d0f9c-0x1001d113f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d0f9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [72];
  
  if (((*(byte *)(param_1 + 0x31) & 1) == 0) && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
    _swift_beginAccess(param_1 + 0x48,auStack_b0,0,0);
    lVar9 = *(long *)(param_1 + 0x48);
    if (*(long *)(lVar9 + 0x10) != 0) {
      uVar1 = *(undefined8 *)(lVar9 + 0x20);
      uVar3 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined1 *)(param_1 + 0x50) = 1;
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      FUN_100008184(uVar1,uVar3);
      FUN_1001d3440(auStack_98,uVar2,uVar4,uVar1,uVar3);
      puVar7 = &DAT_1009a3498;
      puVar5 = puVar7;
      _swift_allocObject(&DAT_1009a3498,0x18,7);
      _swift_weakInit(puVar5 + 0x10,param_1);
      puVar6 = &DAT_1009a33f8;
      _swift_allocObject(&DAT_1009a33f8,0x18,7);
      _swift_weakInit(puVar6 + 0x10);
      _swift_allocObject(&DAT_1009a3498,0x18,7);
      _swift_weakInit(puVar7 + 0x10,param_1);
      puVar8 = &DAT_1009a3628;
      _swift_allocObject(&DAT_1009a3628,0x20,7);
      *(undefined **)(puVar8 + 0x10) = puVar6;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      _swift_retain(puVar5);
      _swift_retain(puVar6);
      _swift_retain(puVar7);
      FUN_1001cdaac(auStack_98,0x41544144,0xe400000000000000,thunk_FUN_1001d319c,puVar5,
                    FUN_1001d3514,puVar8);
      _swift_release_n(puVar5,2);
      _swift_release(puVar6);
      _swift_release(puVar7);
      _swift_release(puVar8);
      FUN_1001d2d44(auStack_98);
      FUN_100006cdc(uVar1,uVar3);
    }
  }
  return;
}

