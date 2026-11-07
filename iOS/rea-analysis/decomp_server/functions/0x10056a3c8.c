// rea decompile_all
// name: FUN_10056a3c8
// address: 0x10056a3c8
// body: available
// range: 0x10056a3c8-0x10056a4fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10056a3c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined *local_90 [3];
  undefined *local_78;
  ulong local_70;
  undefined *local_68;
  
  lVar10 = *(long *)(param_1 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar10 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_100511628(0,lVar10,0);
    puVar12 = (undefined1 *)(param_1 + 0x40);
    puVar11 = local_68;
    do {
      uVar1 = *(undefined8 *)(puVar12 + -0x20);
      uVar4 = *(undefined8 *)(puVar12 + -0x18);
      uVar2 = *(undefined8 *)(puVar12 + -0x10);
      uVar5 = *(ulong *)(puVar12 + -8);
      uVar7 = *puVar12;
      FUN_100008184(uVar1,uVar4);
      uVar3 = *(ulong *)(puVar11 + 0x10);
      uVar6 = *(ulong *)(puVar11 + 0x18);
      uVar9 = uVar5;
      local_68 = puVar11;
      _swift_bridgeObjectRetain();
      if (uVar6 >> 1 <= uVar3) {
        uVar9 = (ulong)(1 < uVar6);
        FUN_100511628(uVar9,uVar3 + 1,1);
        puVar11 = local_68;
      }
      puVar12 = puVar12 + 0x28;
      local_78 = &DAT_1009d5898;
      FUN_1005a8754();
      puVar8 = &DAT_1009d6228;
      local_70 = uVar9;
      _swift_allocObject(&DAT_1009d6228,0x31,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar1;
      *(undefined8 *)(puVar8 + 0x18) = uVar4;
      *(undefined8 *)(puVar8 + 0x20) = uVar2;
      *(ulong *)(puVar8 + 0x28) = uVar5;
      puVar8[0x30] = uVar7;
      *(ulong *)(puVar11 + 0x10) = uVar3 + 1;
      local_90[0] = puVar8;
      thunk_FUN_1000a0074(local_90,puVar11 + uVar3 * 0x28 + 0x20);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return puVar11;
}

