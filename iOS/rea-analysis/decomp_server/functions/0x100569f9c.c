// rea decompile_all
// name: FUN_100569f9c
// address: 0x100569f9c
// body: available
// range: 0x100569f9c-0x10056a0ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100569f9c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined *local_70;
  
  lVar12 = *(long *)(param_1 + 0x10);
  local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar12 != 0) {
    FUN_10051160c(0,lVar12,0);
    puVar13 = (undefined1 *)(param_1 + 0x50);
    do {
      puVar9 = local_70;
      local_e8 = *(undefined8 *)(puVar13 + -0x30);
      uStack_e0 = *(undefined8 *)(puVar13 + -0x28);
      local_d8 = *(undefined8 *)(puVar13 + -0x20);
      uStack_d0 = *(undefined8 *)(puVar13 + -0x18);
      local_c8 = *(undefined8 *)(puVar13 + -0x10);
      uStack_c0 = *(undefined8 *)(puVar13 + -8);
      local_b8 = *puVar13;
      FUN_100545844();
      puVar10 = &DAT_100aabb38;
      FUN_100004bb4(&DAT_100aabb38,&DAT_10083ce30);
      puVar11 = &DAT_100aaa420;
      FUN_100004bb4(&DAT_100aaa420,&DAT_100836180);
      _swift_dynamicCast(&local_b0,&local_e8,puVar10,puVar11,7);
      uVar8 = local_80;
      uVar7 = uStack_88;
      uVar6 = local_90;
      uVar5 = uStack_98;
      uVar4 = uStack_a0;
      uVar3 = uStack_a8;
      uVar2 = local_b0;
      uVar1 = *(ulong *)(puVar9 + 0x10);
      local_70 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        FUN_10051160c(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar13 = puVar13 + 0x38;
      *(ulong *)(local_70 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_70 + uVar1 * 0x38 + 0x28) = uVar3;
      *(undefined8 *)(local_70 + uVar1 * 0x38 + 0x20) = uVar2;
      *(undefined8 *)(local_70 + uVar1 * 0x38 + 0x38) = uVar5;
      *(undefined8 *)(local_70 + uVar1 * 0x38 + 0x30) = uVar4;
      *(undefined8 *)(local_70 + uVar1 * 0x38 + 0x48) = uVar7;
      *(undefined8 *)(local_70 + uVar1 * 0x38 + 0x40) = uVar6;
      local_70[uVar1 * 0x38 + 0x50] = uVar8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return local_70;
}

